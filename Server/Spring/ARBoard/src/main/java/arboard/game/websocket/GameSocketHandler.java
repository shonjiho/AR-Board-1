package arboard.game.websocket;

import java.util.HashMap;
import java.util.Map;

import org.springframework.web.socket.CloseStatus;
import org.springframework.web.socket.WebSocketMessage;
import org.springframework.web.socket.WebSocketSession;
import org.springframework.web.socket.handler.TextWebSocketHandler;

import arboard.game.model.Game;
 
public class GameSocketHandler extends TextWebSocketHandler{

	//game(Thread) list
	public Map<String,Game> gameList  =  new HashMap<String,Game>(); 
	
	public GameSocketHandler(){
		System.out.println("WebSocket Handler Generated.");
	}
	
	
	//multiplexing handler
    @SuppressWarnings("unchecked")
	@Override
    public void handleMessage(WebSocketSession session, WebSocketMessage<?> message) throws Exception {
        String payloadMessage = (String) message.getPayload(); 
        
        String userId = getUserId(session);
        String gameKey = getGameKey(session); 
		 
        Game game = gameList.get(gameKey); 
        if(game!= null) {
        	game.messagehandle(userId,payloadMessage);
        }
         
    }
  
    //after connection
    @Override
    public void afterConnectionEstablished(WebSocketSession session) throws Exception {
    	 String userId = getUserId(session);
         String userName = getUserName(session);
         System.out.println("Connect User. [ userId :"+userId+", userName :"+userName+"]");
         String gameKey = getGameKey(session);
        super.afterConnectionEstablished(session);
        
        
       
        /*
        if((gameKey == null) || !getStatus(session)){
        	session.close();
        }
        
        if(gameList.containsKey(gameKey)){
        	Game game = gameList.get(gameKey);
        	game.addMember(session,userId);
        }else{
        	Game game = new Game(this,gameKey);
        	gameList.put(gameKey,game);
        	game.addMember(session,userId);
        }
        System.out.println("Attend Game ( key - " + gameKey+" )");
        */
    }
  
    @Override
    public void afterConnectionClosed(WebSocketSession session, CloseStatus status) throws Exception {
        super.afterConnectionClosed(session, status);
        
        System.out.println("DisConnect User. [ userId :"+getUserId(session)+", userName :"+getUserName(session)+"]");
        
    }
  
    @Override
    public void handleTransportError(WebSocketSession session,
            Throwable exception) throws Exception {
        super.handleTransportError(session, exception);
        System.out.println("websocket error");
    }
  
    
    @SuppressWarnings("unchecked")
	public Map<String,Object> getUserProfile(WebSocketSession session){
    	Map<String, Object> map = session.getAttributes();
		 return (Map<String, Object>) map.get("userProfile");
    }
    public String getUserId(WebSocketSession session){
    	Map<String,Object> userProfile = getUserProfile(session);
		return (String) userProfile.get("id");
    }
    public String getUserName(WebSocketSession session){
    	Map<String,Object> userProfile = getUserProfile(session);
		return (String) userProfile.get("userName");
    } 
    //from WebSocketSession , get gamekey
    public String getGameKey(WebSocketSession session){
    	Map<String, Object> map = session.getAttributes();
		 return (String) map.get("gameKey");
    }
    public boolean getStatus(WebSocketSession session){
    	Map<String, Object> map = session.getAttributes();
    	return (Boolean) map.get("status");
    }
    
}
