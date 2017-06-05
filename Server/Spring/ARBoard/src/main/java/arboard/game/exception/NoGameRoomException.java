package arboard.game.exception;

public class NoGameRoomException extends RuntimeException {
	public String gameKey;
	public NoGameRoomException(String gameKey){
		this.gameKey = gameKey;
	}
}
