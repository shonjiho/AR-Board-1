package arboard.session;

import static org.hamcrest.CoreMatchers.instanceOf;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.aspectj.lang.JoinPoint;
import org.aspectj.lang.ProceedingJoinPoint;
import org.aspectj.lang.annotation.Around;
import org.aspectj.lang.annotation.Aspect; 
import org.springframework.stereotype.Component;

import arboard.auth.exception.AccessTokenInvalidException;
import arboard.auth.exception.SessionUnAuthorizedException;
import arboard.common.logger.LoggerAspect;

@Component
@Aspect
public class SessionAspect {

	protected Log log = LogFactory.getLog(LoggerAspect.class);
	

	//session test Aspect advice 
	 @Around("execution(* arboard.auth.controller.AuthController.sessionTest(..))")
	 public Object Test(ProceedingJoinPoint joinPoint) throws Throwable{
		 HttpSession session = null;
		 for(Object obj : joinPoint.getArgs()){
			 if(obj instanceof HttpSession){
				 session = (HttpSession)obj;
			 }
		 } 
		 Object status = null;
		 
		 if((status = session.getAttribute("status")) == null){ 
			 throw new SessionUnAuthorizedException();
		 }else{  
			  
			 return joinPoint.proceed();
		 }
		 
		 
	 }
	 
	 /*
	  @Around("execution(* arboard..controller.*Controller.*(..)) or execution(* arboard..service.*Impl.*(..)) or execution(* arboard..dao.*DAO.*(..))")
	  
	 public Object logPrint(ProceedingJoinPoint joinPoint) throws Throwable {
		return joinPoint;
	 }
	 */
}
