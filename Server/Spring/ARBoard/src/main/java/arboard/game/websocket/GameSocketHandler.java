package arboard.game.websocket;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;

import org.springframework.stereotype.Component;
import org.springframework.web.socket.CloseStatus;
import org.springframework.web.socket.TextMessage;
import org.springframework.web.socket.WebSocketMessage;
import org.springframework.web.socket.WebSocketSession;
import org.springframework.web.socket.handler.TextWebSocketHandler;
 
public class GameSocketHandler extends TextWebSocketHandler{
	
	public GameSocketHandler(){
		System.out.println("WebSocket Handler Generated.");
	}
	
	public List<WebSocketSession> sessionList = new ArrayList<WebSocketSession>();
	
	public void broadcast(TextMessage msg) throws Exception{
		for(WebSocketSession s:sessionList){
			s.sendMessage(msg);
		}
	}
	
    @Override
    public void handleMessage(WebSocketSession session, WebSocketMessage<?> message) throws Exception {
        String payloadMessage = (String) message.getPayload();
        Map<String, Object> map = session.getAttributes();
        String userId = (String)map.get("id");
        //session.sendMessage(new TextMessage("ECHO : " + payloadMessage));
        broadcast(new TextMessage(userId + " : " + payloadMessage));
        
        System.out.println("전송자 JSESSIONID : "+userId);
        System.out.println("서버에 도착한 메시지:"+payloadMessage);
    }
 
    // 웹소켓 서버에 클라이언트가 접속하면 호출되는 메소드
    @Override
    public void afterConnectionEstablished(WebSocketSession session) throws Exception {
         
        super.afterConnectionEstablished(session);
        //user add
        sessionList.add(session);
        
        System.out.println("클라이언트 접속됨");
        Map<String, Object> map = session.getAttributes();
        String id = (String)map.get("id");
        System.out.println("Connect JSESSIONID : "+id);
        
    }
 
    // 클라이언트가 접속을 종료하면 호출되는 메소드
    @Override
    public void afterConnectionClosed(WebSocketSession session, CloseStatus status) throws Exception {
        super.afterConnectionClosed(session, status);

        sessionList.remove(session);
        System.out.println("클라이언트 접속해제");
    }
 
    // 메시지 전송시나 접속해제시 오류가 발생할 때 호출되는 메소드
    @Override
    public void handleTransportError(WebSocketSession session,
            Throwable exception) throws Exception {
        super.handleTransportError(session, exception);
        System.out.println("전송오류 발생");
    }
  
}
