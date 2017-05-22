package arboard.game.websocket;

import java.util.Map;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.apache.log4j.Logger;
import org.springframework.http.server.ServerHttpRequest;
import org.springframework.http.server.ServerHttpResponse;
import org.springframework.http.server.ServletServerHttpRequest;
import org.springframework.web.socket.WebSocketHandler;
import org.springframework.web.socket.server.support.HttpSessionHandshakeInterceptor;

import arboard.common.logger.LoggerInterceptor;

public class HandShakeInterceptor extends HttpSessionHandshakeInterceptor {

	protected Logger log = Logger.getLogger(this.getClass());

	// before Handshake
	// copy Session attribute 
	//( HttpSession`s attribute ----> WebSocketSession`s attribute)
	@Override
	public boolean beforeHandshake(ServerHttpRequest request, ServerHttpResponse response, WebSocketHandler wsHandler,
			Map<String, Object> attributes) throws Exception {

		log.debug("Before Handshake"); 

		ServletServerHttpRequest ssreq = (ServletServerHttpRequest) request;
		log.debug("URI:" + request.getURI());  

		HttpServletRequest req = ssreq.getServletRequest(); 
		HttpSession httpSession = req.getSession(); 
		String SessionId = httpSession.getId(); 
		log.debug("Connected JSESSION ID :" + SessionId); 

		@SuppressWarnings("unchecked")
		Map<String, Object> userProfile = (Map<String, Object>) httpSession.getAttribute("userProfile");
		attributes.put("userProfile", userProfile);

		Object status = httpSession.getAttribute("status");
		attributes.put("status", status);

		Object gameKey = httpSession.getAttribute("gameKey"); 
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
