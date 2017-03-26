package arboard.auth.exception;

public class SessionUnAuthorizedException extends RuntimeException {

	public SessionUnAuthorizedException(){
		super("SessionUnAuthorized");
	}
}
