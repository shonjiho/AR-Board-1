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

	public List<GameMember> gameMembers;
	public int gameState;

	public Game(GameSocketHandler handler, String gameKey) {
		gameMembers = new ArrayList<GameMember>();
		gameSockethandler = handler;
		this.gameState = GAME_STATE_ROOM;
		this.gameKey = gameKey;
	}

	public void addMember(GameMember member) {
		gameMembers.add(member);
	}

	public void broadcast(String msg) {
		for (GameMember m : gameMembers) {
			m.MessageSend(msg);
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
		if (first.equals("1") && gameState == GAME_STATE_ROOM) {
			System.out.println("GAME START SIGNAL!!! - " + first);
			gameState = GAME_STATE_READY;
		}

		// ... not yet implement.

	}

	@Override
	public void run() {
		long drainTime = 100; // message term
		int count = 0;
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
				break;

			case GAME_STATE_READY:
				broadcast("Wait....(Setting Order)");
				// Game_makeRandomOrder();
				Game_sendOrderToEachMember();
				gameState = GAME_STATE_RUNNING;
				break;

			case GAME_STATE_RUNNING:
				turn++;
				if (turn == 60) {
					gameState = GAME_STATE_FINISH;
				}
				break;

			case GAME_STATE_FINISH:
				// game exit

				break;
			}

			broadcast("[" + turn + "]Game State - " + gameState);

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
