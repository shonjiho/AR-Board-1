package arboard.game.model;

import java.util.ArrayList;
import java.util.List;

import arboard.game.websocket.GameSocketHandler;

public class Game extends Thread {
	public final static int GAME_STATE_ROOM = 0;
	public final static int GAME_STATE_READY = 1;
	public final static int GAME_STATE_RUNNING = 2;
	public final static int GAME_STATE_FINISH = 3;

	// hander
	private GameSocketHandler gameSockethandler;

	// Game Info var
	public String gameKey;

	public String getGameKey() {
		return gameKey;
	}

	public int MaxMember;
	public List<GameMember> gameMembers;
	public int gameState;
	public int gameCount = 5;

	public static Game init() {
		Game game = new Game();
		game.gameMembers = new ArrayList<GameMember>();
		game.gameState = GAME_STATE_ROOM;
		game.MaxMember = 4;// default;
		return game;
	}

	public Game setGameSocketHandler(GameSocketHandler handler) {
		this.gameSockethandler = handler;
		return this;
	}

	public Game setKey(String gameKey) {
		this.gameKey = gameKey;
		return this;
	}

	public Game addMember(GameMember member) {
		gameMembers.add(member);
		return this;
	}

	public synchronized void broadcast(String msg) {
		 
		for (GameMember m : gameMembers) {
			if (m.isInvalidSession()) {
				m.MessageSend(msg);
				//m.connect();
			} else {
				//m.disconnect();
				gameMembers.remove(m);
			}
		}
	}

	public void gameClose() {
		broadcast("NF");

		gameSockethandler.gameList.remove(this.gameKey);

		synchronized (gameMembers) {
			for (GameMember m : gameMembers) {
				try {
					m.closeSocket();
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
			gameMembers.clear();
		}
		System.out.println("[END_GAME]" + gameKey);
	}

	// Client Message Handler
	public void messagehandle(GameMember member, String msg) {

		if (!gameMembers.contains(member)) {
			System.out.println("no member Access");
			return;
		}
		String[] parsedMsg = msg.split(",");
		int num = parsedMsg.length;
		if (num == 0)
			return;

		// parsing
		String first = parsedMsg[0];
		if (first.equals("StartTurn") && gameState == GAME_STATE_ROOM) {
			// System.out.println("GAME START SIGNAL!!! - " + first);
			gameState = GAME_STATE_READY;

		}
		broadcast(msg);

	}

	@Override
	public void run() {
		long drainTime = 1000; // message term
		int turn = 0;
		long beforeTime = System.currentTimeMillis();
		while (true) {
			long currentTime = System.currentTimeMillis();
			if ((currentTime - beforeTime) < drainTime) {
				continue;
			}
			beforeTime = currentTime;

			switch (gameState) {

			case GAME_STATE_ROOM:
				broadcast(Game_readyInfo());// Game state broadcast.
				if (gameMembers.size() == 0) {
					gameClose();
				}
				break;

			case GAME_STATE_READY:

				if (gameCount > 0) {
					gameCount--;
					broadcast(gameCount + ".");
					break;
				}
				
				broadcast("Wait....(Setting Order)");
				// Game_makeRandomOrder();
				Game_sendOrderToEachMember();
				gameState = GAME_STATE_RUNNING;

				break;

			case GAME_STATE_RUNNING:
				if (turn == 0) {
					broadcast("GAME START");
				}
				turn++;
				if (turn == 60) {
					gameState = GAME_STATE_FINISH;
				}

				broadcast("[" + turn + "]Game State - " + gameState);
				break;

			case GAME_STATE_FINISH:
				// game exit
				broadcast("[" + turn + "]Game State - " + gameState);
				break;
			}

			if (gameState == GAME_STATE_FINISH) {
				gameClose();
				break;
			}

		}

	}

	/*
	 * GameMethod startInfo
	 *
	 */
	private String Game_startInfo(GameMember member) {
		// ex)GameStart,0,김민찬|손지호|최유태|홍길동
		// GameStart,[MYNUMBER],[USER1]|[USER2]|[USER3]|[USER4]
		String result = "GameStart";
		int n = gameMembers.indexOf(member);
		result += "," + n + ",";
		for (int i = 0; i < gameMembers.size(); i++) {
			if (i != 0)
				result += "|";
			result += gameMembers.get(i).getUserId();
		}
		return result;
	}

	/*
	 * GameMethod readyInfo
	 * 
	 */
	private String Game_readyInfo() {
		// GameReady,[USER1]|[USER2]|[USER3]|[USER4]
		String result = "GameRoom,";
		for (int i = 0; i < gameMembers.size(); i++) {
			if (i != 0)
				result += "|";
			result += gameMembers.get(i).getUserId();
		}
		return result;
	}

	/*
	 * GameMethod make random order.
	 * 
	 */
	private void Game_makeRandomOrder() {

	}

	private void Game_sendOrderToEachMember() {
		for (GameMember member : gameMembers) {
			String startInfo = Game_startInfo(member);
			member.MessageSend(startInfo);
		}
	}

}
