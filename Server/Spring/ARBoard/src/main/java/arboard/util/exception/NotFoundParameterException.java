package arboard.util.exception;

public class NotFoundParameterException extends RuntimeException {
 
	public String parameterName= null;
	private static final long serialVersionUID = 1L;
	public NotFoundParameterException(String parameterName){
		super("NotFoundParameterException");
		this.parameterName = parameterName;
	}
}
