package arboard.game.websocket;

import java.util.Map;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.springframework.http.server.ServerHttpRequest;
import org.springframework.http.server.ServerHttpResponse;
import org.springframework.http.server.ServletServerHttpRequest;
import org.springframework.web.socket.WebSocketHandler;
import org.springframework.web.socket.server.support.HttpSessionHandshakeInterceptor;

public class HandShakeInterceptor extends HttpSessionHandshakeInterceptor {
	
	
		//before Handshake
		//copy Session attribute ( HttpSession`s attribute ----> WebSocketSession`s attribute)
	 	@Override
	    public boolean beforeHandshake(ServerHttpRequest request,ServerHttpResponse response, WebSocketHandler wsHandler,
	         Map<String, Object> attributes) throws Exception {    
	     
	        System.out.println("Before Handshake");
	          
	        ServletServerHttpRequest ssreq = (ServletServerHttpRequest) request;
	        System.out.println("URI:"+request.getURI());
	  
	        HttpServletRequest req =  ssreq.getServletRequest();
	  
	        HttpSession httpSession = req.getSession();
	        
	        String SessionId = httpSession.getId(); 
	        System.out.println("Connected JSESSIONID :"+SessionId);
	        
	        @SuppressWarnings("unchecked")
			Map<String, Object> userProfile = (Map<String, Object>) httpSession.getAttribute("userProfile");
	         
	        if(userProfile == null){
	        	System.out.println("userProfile null");
	        	return false;
	        }
	        
	        attributes.put("userProfile", userProfile);//userProfile
	        
	        Object status = httpSession.getAttribute("status");
	        
//	        if(status == null){  
//	        	return false;
//	        }
	        attributes.put("status",status);
	        
	        Object gameKey = httpSession.getAttribute("gameKey");
//	        if(gameKey ==  null){
//	        	return false;
//	        }
	        attributes.put("gameKey", gameKey);//gameKey
	  
	        return super.beforeHandshake(request, response, wsHandler, attributes);
	    }
	  
	    @Override
	    public void afterHandshake(ServerHttpRequest request,
	            ServerHttpResponse response, WebSocketHandler wsHandler,
	            Exception ex) {
	        System.out.println("After Handshake");
	  
	        super.afterHandshake(request, response, wsHandler, ex);
	    }
	  
 

}
