package arboard.game.websocket;

import java.util.HashMap;
import java.util.Map;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.apache.log4j.Logger;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.server.ServerHttpRequest;
import org.springframework.http.server.ServerHttpResponse;
import org.springframework.http.server.ServletServerHttpRequest;
import org.springframework.stereotype.Component;
import org.springframework.web.socket.WebSocketHandler;
import org.springframework.web.socket.WebSocketSession;
import org.springframework.web.socket.server.support.HttpSessionHandshakeInterceptor;

@Component
public class HandShakeInterceptor extends HttpSessionHandshakeInterceptor {

	@Autowired
	GameSocketHandler websocketHandler;
	
	protected Logger log = Logger.getLogger(this.getClass());

	// before Handshake
	// copy Session attribute 
	//( HttpSession`s attribute ----> WebSocketSession`s attribute)
	//  Game interconnection TEST 
	@Override
	public boolean beforeHandshake(ServerHttpRequest request, ServerHttpResponse response, WebSocketHandler wsHandler,
			Map<String, Object> attributes) throws Exception {

		log.debug("Before Handshake");  
		ServletServerHttpRequest ssreq = (ServletServerHttpRequest) request;
		log.debug("URI:" + request.getURI());  
		
		HttpServletRequest req = ssreq.getServletRequest(); 
		HttpSession httpSession = req.getSession(); 
		String SessionID = httpSession.getId(); 
		log.debug("Connected JSESSION ID :" + SessionID); 

		@SuppressWarnings("unchecked")
		Map<String, Object> userProfile = (Map<String, Object>) httpSession.getAttribute("userProfile");
		
		//TEST
		if(userProfile == null){
			userProfile = new HashMap<String,Object>(); 
			String ip = request.getLocalAddress().getHostName().toString();  
			//FOR TEST id - > currentTime
			userProfile.put("id", "testid$"+String.valueOf((System.currentTimeMillis()/1000)%60));
			userProfile.put("userName","TestUser"); 
		} 
		
		attributes.put("userProfile", userProfile);

		Object status = httpSession.getAttribute("status");
		
		//TEST
		if(status == null){
			status = new Boolean(true);
		}  
		attributes.put("status", status);

		Object gameKey = httpSession.getAttribute("gameKey");  
		 
		//TEST
		if(gameKey ==  null){
			gameKey = websocketHandler.getRandomGame();
		}
		
		attributes.put("gameKey", gameKey); 
		return super.beforeHandshake(request, response, wsHandler, attributes);
	}
 
	@Override
	public void afterHandshake(ServerHttpRequest request, ServerHttpResponse response, WebSocketHandler wsHandler,
			Exception ex) {
		System.out.println("After Handshake");

		super.afterHandshake(request, response, wsHandler, ex);
	}

}
