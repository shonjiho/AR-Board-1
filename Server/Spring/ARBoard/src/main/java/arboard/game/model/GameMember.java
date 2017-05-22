package arboard.game.model;

import java.io.IOException;

import org.springframework.web.socket.TextMessage;
import org.springframework.web.socket.WebSocketSession;

public class GameMember  {
 
	public int position ;
	
	public String userId; 
	
	public String getUserId() {
		return userId;
	}

	public WebSocketSession session;
 
	public GameMember(WebSocketSession session, String userId){
		this.userId = userId;
		this.session = session; 
		this.position = 0;
		
	}
	
	public void MessageSend(String str) throws IOException{
		
		if(isInvalidSession()){
			session.sendMessage(new TextMessage(str));
		} 
	}
	
	public boolean isInvalidSession(){
		if(session.isOpen()){
			return true;
		}else{
			return false;
		}
	}
	
	public void closeSocket() throws Exception{
		if(session.isOpen()){
			session.close();
		}
	}
	
	
}
