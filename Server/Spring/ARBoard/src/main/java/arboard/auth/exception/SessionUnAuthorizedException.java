package arboard.auth.exception;

import javax.servlet.http.HttpSession;

@SuppressWarnings("serial")
public class SessionUnAuthorizedException extends RuntimeException {

	private HttpSession session = null;
	public SessionUnAuthorizedException(HttpSession session){
		super("SessionUnAuthorized");
		this.session = session;
	}
	public HttpSession getSession(){
		return session;
	}
	
}
