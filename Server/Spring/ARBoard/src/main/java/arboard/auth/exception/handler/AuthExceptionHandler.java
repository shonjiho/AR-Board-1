package arboard.auth.exception.handler;

import java.util.HashMap;
import java.util.Map;

import org.apache.log4j.Logger;
import org.springframework.http.HttpStatus;
import org.springframework.web.bind.annotation.ControllerAdvice;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.auth.exception.AccessTokenInvalidException;
import arboard.auth.exception.AccessTokenNotFoundException;
import arboard.auth.exception.SessionUnAuthorizedException;
import arboard.auth.exception.UnKnownException;

@ControllerAdvice
public class AuthExceptionHandler {

	Logger log = Logger.getLogger(this.getClass());
	
	@ExceptionHandler(value = AccessTokenInvalidException.class)
	@ResponseBody
	@ResponseStatus(HttpStatus.NOT_ACCEPTABLE)
	public Map<String, Object> AccessTokenInvalidException() { 
		Map<String, Object> body = new HashMap<String, Object>();
		Map<String, String> subJSONObject = new HashMap<String, String>();
		subJSONObject.put("message", "access token is invalid");
		body.put("error", subJSONObject);
		return body;
	}

	@ExceptionHandler(value = AccessTokenNotFoundException.class)
	@ResponseBody
	@ResponseStatus(HttpStatus.BAD_REQUEST)
	public Map<String, Object> AccessTokenNotFoundException() { 
		Map<String, Object> body = new HashMap<String, Object>();
		Map<String, String> subJSONObject = new HashMap<String, String>();
		subJSONObject.put("message", "access token Not Found");
		body.put("error", subJSONObject);
		return body;
		
	}
	
	@ExceptionHandler(value = SessionUnAuthorizedException.class)
	@ResponseBody
	@ResponseStatus(HttpStatus.BAD_REQUEST)
	public Map<String, Object> SessionUnAuthorizedException() { 
		Map<String, Object> body = new HashMap<String, Object>();
		Map<String, String> subJSONObject = new HashMap<String, String>();
		subJSONObject.put("message", "denial request (Unauthorized)");
		body.put("error", subJSONObject);
		return body;
	}
	
	@ExceptionHandler(value= UnKnownException.class)
	@ResponseBody
	@ResponseStatus(HttpStatus.INTERNAL_SERVER_ERROR)
	public Map<String,Object> UnKnownException(){
		
		Map<String,Object> body = new HashMap<String,Object>();
		Map<String,String> subJSONObject = new HashMap<String,String>();
		subJSONObject.put("message", "Server Internal Error");
		body.put("error", subJSONObject);
		return body;
	}
	

}
