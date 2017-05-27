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

	// Game Info var
	public String gameKey;

	public String getGameKey() {
		return gameKey;
	}

	public List<GameMember> gameMembers;
	public int gameState;

	public Game(GameSocketHandler handler, String gameKey) {
		gameMembers = new ArrayList<GameMember>();
		gameSockethandler = handler;
		this.gameState = GAME_STATE_READY;
		this.gameKey = gameKey;
	}

	public void addMember(GameMember member) {
		gameMembers.add(member);
		
		String memberState = Game_startInfo(member); 
		try { 
			member.MessageSend(memberState);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
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

		if (msg.equals("exit")) {
			this.gameClose();
			return;
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
		gameMembers.clear();
		System.out.println("[END_GAME]"+gameKey);
		
	}

	/*GameMethod showMemberState
	 * MEMBER/[index]:[userID],
	 */
	private String Game_startInfo(GameMember member) { 
		//ex)GameStart,0,김민찬|손지호|최유태|홍길동
		//GameStart,[MYNUMBER],[USER1],[USER2],[USER3],[USER4]
		String result = "GameStart"; 
		int n = gameMembers.indexOf(member);
		result +=","+n;
		for (int i = 0; i < gameMembers.size(); i++) { 
			result+=","; 
			result += gameMembers.get(i).getUserId();
		} 
		return result;
	}

	static long drainTime = 1000;
	// test
	int count = 0;
	int turn = 0;

	@Override
	public void run() {
		long beforeTime = System.currentTimeMillis();

		while (true) {
			long currentTime = System.currentTimeMillis();
			if ((currentTime - beforeTime) < drainTime) {
				continue;
			}
			beforeTime = currentTime;

			if (gameState == GAME_STATE_READY && gameMembers.size() >= 1) {
				broadcast("After 5 seconds Game Start!");
				gameState = GAME_STATE_RUNNING;
				count = 5;
				continue;
			}

			if (gameState == GAME_STATE_RUNNING && count > 0) {
				broadcast(count + "seconds.");
				count--;
				continue;
			}

			broadcast("[" + turn + "]Game State - MemberCount : " + gameMembers.size());
			turn++;

			if (gameMembers.size() == 0){
				gameState = GAME_STATE_FINISH;
				gameClose();
				break;
			}
			 
			
		}
	}

}
