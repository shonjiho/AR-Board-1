package arboard.auth.exception;

@SuppressWarnings("serial")
public class UnKnownException extends RuntimeException{

	public UnKnownException(){
		super("unknown Exception");
	}
}
