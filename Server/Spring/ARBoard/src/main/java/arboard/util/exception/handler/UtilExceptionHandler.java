package arboard.util.exception.handler;

import java.util.HashMap;
import java.util.Map;

import org.apache.log4j.Logger;
import org.springframework.http.HttpStatus;
import org.springframework.web.bind.annotation.ControllerAdvice;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.util.exception.DuplicateIdExcpetion;
import arboard.util.exception.NotFoundParameterException;

@ControllerAdvice
public class UtilExceptionHandler {

	
	Logger log = Logger.getLogger(this.getClass());
	
	@ExceptionHandler(value = NotFoundParameterException.class)
	@ResponseBody
	@ResponseStatus(HttpStatus.BAD_REQUEST)//400 Bad Request
	public Map<String, Object> NotFoundParameterException(NotFoundParameterException e) { 
		Map<String, Object> body = new HashMap<String, Object>();
		Map<String, String> subJSONObject = new HashMap<String, String>();
		subJSONObject.put("message", "Not Found Parameter(\""+e.getParameterName() +"\")");
		subJSONObject.put("title", "NOT_FOUND_PARAMETER");
		body.put("error", subJSONObject);
		return body;
	}
	
	@ExceptionHandler(value = DuplicateIdExcpetion.class)
	@ResponseBody
	@ResponseStatus(HttpStatus.BAD_REQUEST)//400 Bad Request
	public Map<String, Object> DuplicateIdException() { 
		Map<String, Object> body = new HashMap<String, Object>();
		Map<String, String> subJSONObject = new HashMap<String, String>();
		subJSONObject.put("message", "Not allow to request me to me relationship");
		subJSONObject.put("title", "ABNORMAL_REQUEST");
		body.put("error", subJSONObject);
		return body;
	}
}
