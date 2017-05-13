package arboard.game.model;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import org.springframework.web.socket.WebSocketSession;

import arboard.game.websocket.GameSocketHandler;

public class Game extends Thread {

	public final static int GAME_STATE_READY = 0;
	public final static int GAME_STATE_RUNNING = 1;
	public final static int GAME_STATE_FINISH = 2;

	// hander
	private GameSocketHandler gameSockethandler;

	// test var
	int count = 0;

	// Game Info var
	public String gameKey;
	private List<GameMember> gameMembers;
	public int gameState;

	public Game(GameSocketHandler handler, String gameKey) {
		gameMembers = new ArrayList<GameMember>();
		gameSockethandler = handler;
		this.gameState = GAME_STATE_READY;
		this.gameKey = gameKey;
	}

	@Override
	public synchronized void start() {
		super.start();
	}

	public void addMember(WebSocketSession session, String userId) {

		gameMembers.add(new GameMember(session, userId));
	}

	public void broadcast(String msg) {
		for (GameMember m : gameMembers) {
			try {
				m.MessageSend(msg);
			} catch (IOException e) {
				e.printStackTrace(); 
			}
		}
	}

	public void messagehandle(String userId, String msg) {

		for (GameMember m : gameMembers) {
			if (m.getUserId().equals(userId)) {
				m.position++;
				break;
			}
		}

		broadcast(msg); 

	}

	public void gameClose() {
		broadcast("NF");
		gameSockethandler.gameList.remove(this.gameKey);
		for (GameMember m : gameMembers) {
			try {
				m.closeSocket();
			} catch (Exception e) {
				e.printStackTrace();
			}
		} 
	}

	static long drainTime = 1000;

	@Override
	public void run() {
		long beforeTime = System.currentTimeMillis();  
		while (true) {
			long currentTime = System.currentTimeMillis();
			if ((currentTime - beforeTime) < drainTime) {
				continue;
			} 
			
			beforeTime = currentTime; 
			count++;
			String state = "";
			// logic
			state += "C:" + gameMembers.size() + "/T:" + count + "/";
			for (GameMember m : gameMembers) {
				state += m.userId + ":" + m.position;
				state += "/";
			}
			broadcast(state);

			// finish game
			if (count == 60) {
				gameState = GAME_STATE_FINISH;
				gameClose();
				break;
			}  
			if(gameMembers.size() == 0){
				gameState = GAME_STATE_FINISH;
				gameClose();
				break;
			}

		}
	}

}
