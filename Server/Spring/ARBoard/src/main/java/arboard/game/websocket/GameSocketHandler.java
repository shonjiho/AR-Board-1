package arboard.game.websocket;

import java.util.HashMap;
import java.util.Map;

import org.springframework.web.socket.CloseStatus;
import org.springframework.web.socket.TextMessage;
import org.springframework.web.socket.WebSocketMessage;
import org.springframework.web.socket.WebSocketSession;
import org.springframework.web.socket.handler.TextWebSocketHandler;

import arboard.game.model.Game;

public class GameSocketHandler extends TextWebSocketHandler {

	// Game List
	public Map<String, Game> gameList = new HashMap<String, Game>();
	// Ready Game List
	// public Map<String,Game> readyGameList = new HashMap<String,Game>();
	// Running Game List
	// public Map<String,Game> runningGameList = new HashMap<String,Game>();

	// Initialization
	public GameSocketHandler() {
		System.out.println("WebSocket Handler Generated.");
	}

	// multiplexing handler
	@Override
	public void handleMessage(WebSocketSession session, WebSocketMessage<?> message) throws Exception {
		String payloadMessage = (String) message.getPayload();

		String userId = getUserId(session);
		String gameKey = getGameKey(session);

		Game game = gameList.get(gameKey);
		if (game != null) {
			game.messagehandle(userId, payloadMessage);
		} else {
			System.out.println("game is null");
		}

	}

	// after connection
	// game Generation
	@Override
	public void afterConnectionEstablished(WebSocketSession session) throws Exception {

		super.afterConnectionEstablished(session);

		String userId = getUserId(session);
		String userName = getUserName(session);
		String gameKey = getGameKey(session);
		System.out.println("Connect User. [ userId :" + userId + ", userName :" + userName + "]");

		if (gameKey == null || !hasStatus(session)) {
			session.sendMessage(new TextMessage("invalid connection"));
			session.close();
		}

		Game game;
		if (gameList.containsKey(gameKey)) {
			  game = gameList.get(gameKey);
			game.addMember(session, userId);
			
		} else {
			 game = new Game(this,gameKey);
			 gameList.put(gameKey, game); 
			 game.gameState = Game.GAME_STATE_RUNNING;
			 game.start();
			 game.addMember(session, userId);
		}
		System.out.println("Attend Game ( key - " + gameKey + " )");

	}

	// afterConnectClose
	@Override
	public void afterConnectionClosed(WebSocketSession session, CloseStatus status) throws Exception {
		super.afterConnectionClosed(session, status);

		System.out.println(
				"DisConnect User. [ userId :" + getUserId(session) + ", userName :" + getUserName(session) + "]");

	}

	@Override
	public void handleTransportError(WebSocketSession session, Throwable exception) throws Exception {
		super.handleTransportError(session, exception);
		System.out.println("websocket error");
	}

	//game put
	public void insertGame(String key,Game game){
		gameList.put(key, game);
	}
	
	
	/*
	 * Getter Method
	 * 
	 */

	@SuppressWarnings("unchecked")
	public Map<String, Object> getUserProfile(WebSocketSession session) {
		Map<String, Object> map = session.getAttributes();
		return (Map<String, Object>) map.get("userProfile");
	}

	public String getUserId(WebSocketSession session) {
		Map<String, Object> userProfile = getUserProfile(session);
		return userProfile.get("id").toString();
	}

	public String getUserName(WebSocketSession session) {
		Map<String, Object> userProfile = getUserProfile(session);
		return userProfile.get("userName").toString();
	}

	// from WebSocketSession , get gamekey
	public String getGameKey(WebSocketSession session) {
		Map<String, Object> map = session.getAttributes();
		return (String) map.get("gameKey").toString();
	}

	public boolean hasStatus(WebSocketSession session) {
		Map<String, Object> map = session.getAttributes();
		return (Boolean) map.get("status");
	}

}
