package arboard.auth.exception;

import javax.servlet.http.HttpSession;

@SuppressWarnings("serial")
public class AccessTokenInvalidException extends RuntimeException {

	private HttpSession session;
	public AccessTokenInvalidException(){
		super("AccessToken is invalid");
	}
	public HttpSession getSession() {
		return session;
	}
	public void setSession(HttpSession session) {
		this.session = session;
	}
	
}
