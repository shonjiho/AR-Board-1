package arboard.auth.exception;

@SuppressWarnings("serial")
public class SessionExpireExcpetion extends RuntimeException {

	public SessionExpireExcpetion(){
		super("SessionExpire");
	}
}
