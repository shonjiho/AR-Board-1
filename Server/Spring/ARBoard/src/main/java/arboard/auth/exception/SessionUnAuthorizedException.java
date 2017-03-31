package arboard.auth.exception;

@SuppressWarnings("serial")
public class SessionUnAuthorizedException extends RuntimeException {

	public SessionUnAuthorizedException(){
		super("SessionUnAuthorized");
	}
}
