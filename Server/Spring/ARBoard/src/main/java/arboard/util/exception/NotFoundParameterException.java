package arboard.util.exception;

public class NotFoundParameterException extends RuntimeException {
 
	private static final long serialVersionUID = 1L;
	private String parameterName= null;
	public NotFoundParameterException(String parameterName){
		super("NotFoundParameterException");
		this.parameterName = parameterName;
	}
	public String getParameterName(){
		return this.parameterName;
	}
}
