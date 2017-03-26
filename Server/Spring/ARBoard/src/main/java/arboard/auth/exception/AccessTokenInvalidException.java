package arboard.auth.exception;

@SuppressWarnings("serial")
public class AccessTokenInvalidException extends RuntimeException {

	public AccessTokenInvalidException(){
		super("AccessToken is invalid");
	}
}
