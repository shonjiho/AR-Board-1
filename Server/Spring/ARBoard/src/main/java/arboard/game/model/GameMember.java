package arboard.game.model;

import java.io.IOException;

import org.springframework.web.socket.BinaryMessage;
import org.springframework.web.socket.WebSocketSession;

public class GameMember  {
 
	
	public String userId; 
	public String userName; 
	
	public String getUserId() {
		return userId;
	}

	public String getUserName() {
		return userName;
	}

	public boolean connected= false;
	public WebSocketSession session;
  
	
	public GameMember(WebSocketSession session){ 
		this.session = session;
		this.userId = "<undefine>";
		this.userName = "<undefine>";
		connected = true;
	}
	public GameMember setUserId(String userId){
		if(userId != null) this.userId = userId;
		return this;
	}
	public GameMember setUserName(String userName){
		if(userName != null) this.userName = userName;
		return this;
	}
	public GameMember(WebSocketSession session, String userId){
		this.userId = userId;
		this.session = session;   
	}
	public void connect(){
		connected = true;
	}
	public void disconnect(){
		connected = false;
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
