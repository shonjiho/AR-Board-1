package arboard.game.model;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import org.springframework.web.socket.WebSocketSession;

import arboard.game.websocket.GameSocketHandler;

public class Game extends Thread {

	int count = 0;
	private List<GameMember> members;
	private GameSocketHandler gameSockethandler;
	public String gameKey;
	public Game(GameSocketHandler handler,String gameKey) {
		members = new ArrayList<GameMember>();
		gameSockethandler = handler;
		this.gameKey = gameKey;
	}
 

	@Override
	public synchronized void start() {
		super.start();
	}

	public void addMember(WebSocketSession session, String userId ) {

		members.add(new GameMember(session,userId));
	}
	
	public void broadcast(String msg) {
		for(GameMember m:members){
			try {
				m.MessageSend(msg);
			} catch (IOException e) { 
				e.printStackTrace();
				continue;
			}
		}
	}

	public void messagehandle(String userId,String msg){
		
		for(GameMember m:members){
			if(m.getUserId().equals(userId)){
				m.position ++;
				break;
			}
		}
		//sleep상태 제거.
		//interrupt();
		
	}
	@Override
	public void run() {
		while (true) {
			try {  
				count++;
				String state = "";
				//logic 
				state += "C:"+members.size()+"/T:"+count+"/";
				for(GameMember m:members){
					state+=m.userId +":"+m.position;
					state+="/";
				}
				broadcast(state);
				Thread.sleep(1000);
				
			} catch (InterruptedException e) {
				e.printStackTrace();
		 
			} finally{
				//finish game
				if(count == 30){
					broadcast("NF");
					gameSockethandler.gameList.remove(this.gameKey); 
					break;
				}
			}
		}
	}

}
