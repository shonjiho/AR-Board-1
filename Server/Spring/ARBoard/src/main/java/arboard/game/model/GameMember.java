package arboard.game.model;

import java.io.IOException;

import org.springframework.web.socket.BinaryMessage;
import org.springframework.web.socket.TextMessage;
import org.springframework.web.socket.WebSocketSession;

public class GameMember  {
 
	
	public String userId; 
	 
	
	public String getUserId() {
		return userId;
	}

	public WebSocketSession session;
  
	public GameMember(WebSocketSession session, String userId){
		this.userId = userId;
		this.session = session;  
		
	}
	
	public void MessageSend(String str) {
		
		if(isInvalidSession()){
			
			try {
				//session.sendMessage(new TextMessage(str));
				session.sendMessage(new BinaryMessage(str.getBytes()));
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
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
