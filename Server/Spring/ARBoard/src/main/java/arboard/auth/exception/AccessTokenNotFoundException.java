package arboard.auth.exception;
 

@SuppressWarnings("serial") 
public class AccessTokenNotFoundException extends RuntimeException{
	public AccessTokenNotFoundException(){
		
		super("AccessCode is not found.");
	}

}
