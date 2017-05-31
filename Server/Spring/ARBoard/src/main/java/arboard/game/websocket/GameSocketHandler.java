package arboard.game.websocket;

import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import org.apache.log4j.Logger;
import org.springframework.web.socket.CloseStatus;
import org.springframework.web.socket.TextMessage;
import org.springframework.web.socket.WebSocketMessage;
import org.springframework.web.socket.WebSocketSession;
import org.springframework.web.socket.handler.TextWebSocketHandler;

import arboard.game.model.Game;
import arboard.game.model.GameMember;

public class GameSocketHandler extends TextWebSocketHandler {

	protected Logger log = Logger.getLogger(this.getClass());

	// Game List
	public Map<String, Game> gameList = new HashMap<String, Game>(); // <GameKey,Game>
	public Map<WebSocketSession, GameMember> gameUsers = new HashMap<WebSocketSession, GameMember>();

	public GameSocketHandler() {
		log.debug("WebSocket Handler Generated.");
	}

	// send Message method.
	public void sendString(WebSocketSession webSocketSession, String msg) {
		try {
			webSocketSession.sendMessage(new TextMessage(msg.getBytes()));
		} catch (IOException e) {
			log.debug("SendMessage method is problem.");
			e.printStackTrace();
		}
	}

	public String convertByteBuffertoString(ByteBuffer b) {
		return new String(b.array());
	}

	// Message handler
	@Override
	public void handleMessage(WebSocketSession session, WebSocketMessage<?> message) throws Exception {

		// System.out.print("[DEBUG] Message Type : "+message.getClass());
		String payloadMessage;

		if (message instanceof TextMessage) {
			payloadMessage = message.getPayload().toString();
		} else {
			// Binary Type
			ByteBuffer byteBuffer = (ByteBuffer) message.getPayload();
			payloadMessage = new String(byteBuffer.array());
		}

		// String userId = getUserId(session);
		String gameKey = getGameKey(session);
		GameMember gameMember = gameUsers.get(session);

		Game game = gameList.get(gameKey);
		if (game != null) {
			game.messagehandle(gameMember, payloadMessage);
		} else {
			log.debug("[" + gameKey + "]" + "empty.");
			sendString(session, "[" + gameKey + "]" + "empty.");
			session.close();
		}
	}

	// After connection
	@Override
	public void afterConnectionEstablished(WebSocketSession session) throws Exception {

		super.afterConnectionEstablished(session);

		Game game;
		GameMember member;
		
		String userId = getUserId(session);
		String userName = getUserName(session);
		String gameKey = getGameKey(session);

		log.debug("Connect User. [ userId :" + userId + ", userName :" + userName + "]");
		if (gameKey == null || !hasStatus(session)) {
			sendString(session, "Invalid connection");
			session.close();
		}


		member = new GameMember(session)
				.setUserId(userId)
				.setUserName(userName); 
		
		if (gameList.containsKey(gameKey)) {
			game = gameList.get(gameKey);
		} else { 
			// game generate.
			game = Game.init().setGameSocketHandler(this)
					.setKey(gameKey);
			// game list put
			gameList.put(gameKey, game);
			// game thread start.
			game.start();  
		}

		game.addMember(member);
		gameUsers.put(session, member);

		log.debug("Attend Game ( key - " + gameKey + " )");

	}

	// After Connect Close
	@Override
	public void afterConnectionClosed(WebSocketSession session, CloseStatus status) throws Exception {
		super.afterConnectionClosed(session, status); 
		
		gameUsers.get(session).disconnect();
		
		System.out.println(
				"DisConnect User. [ userId :" + getUserId(session) + ", userName :" + getUserName(session) + "]");

	}

	@Override
	public void handleTransportError(WebSocketSession session, Throwable exception) throws Exception {
		super.handleTransportError(session, exception);
		System.out.println("websocket error");
	}

	// game put
	public void insertGame(String key, Game game) {
		gameList.put(key, game);
	}

	// getRandomGameKey.
	public String getRandomGame() {
		String gameKey;
		Map<String, Game> gameSet = this.gameList;
		ArrayList<Game> allGameList = new ArrayList<Game>(gameSet.values());
		ArrayList<Game> idleGameList = new ArrayList<Game>(); 
		for(Game game :allGameList){
			//Check whether can attend this game. 
			if(game.gameMembers.size() >= game.MaxMember)  continue; // Check Max count of member 
			if(game.gameState > Game.GAME_STATE_ROOM)  continue;		// Check game state 
			idleGameList.add(game); 
		}
		while(true){
			if (idleGameList.size() != 0) { 
				int random = (int) (Math.random() / idleGameList.size());
				Game game = idleGameList.get(random);   
				
				// Check game state
				if((game.gameMembers.size() >= game.MaxMember)|| (game.gameState > Game.GAME_STATE_ROOM))  { 		 
					idleGameList.remove(game);
					continue;
				} 
				gameKey = game.getGameKey();
				break; 
			} else{
				long timeStamp = System.currentTimeMillis();
				gameKey = Long.toString(timeStamp);
				log.debug("Gernerate Game : "+gameKey); 
				break;
			}
		}	 
		return gameKey;
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
