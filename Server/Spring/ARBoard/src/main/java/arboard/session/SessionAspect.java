package arboard.session;

import javax.servlet.http.HttpSession;

import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.aspectj.lang.ProceedingJoinPoint;
import org.aspectj.lang.annotation.Around;
import org.aspectj.lang.annotation.Aspect;

import arboard.auth.exception.SessionUnAuthorizedException;
import arboard.common.logger.LoggerAspect;

@Aspect
public class SessionAspect {

	protected Log log = LogFactory.getLog(LoggerAspect.class);
	

	//session test Aspect advice 
	 @Around("execution(* arboard.util.controller.UtilFriendController.*(..))")
	 public Object Test(ProceedingJoinPoint joinPoint) throws Throwable{
		 HttpSession session = null;
		 for(Object obj : joinPoint.getArgs()){
			 if(obj instanceof HttpSession){
				 session = (HttpSession)obj;
			 }
		 } 
		  
		 if(session.getAttribute("status") == null){ 
			 //not session
			 throw new SessionUnAuthorizedException(session);
 		 }else{   
			 return joinPoint.proceed();
		 }
	 }

	 /*
	//list authication.
	 @Around("execution(* arboard.session.SessionListener.SessionChecker.getSessionList(..))")
	 public Object SessionListTest(ProceedingJoinPoint joinPoint) throws Throwable{
		 HttpSession session = null;
		 for(Object obj : joinPoint.getArgs()){
			 if(obj instanceof HttpSession){
				 session = (HttpSession)obj;
			 }
		 } 
		  
		 if((session.getAttribute("oauthToken")) == null){ 
			 
			 throw new SessionUnAuthorizedException();
		 }else{   
			 
			 return joinPoint.proceed();
		 }
	 }
	 */
	 
	 /*
	  @Around("execution(* arboard..controller.*Controller.*(..)) or execution(* arboard..service.*Impl.*(..)) or execution(* arboard..dao.*DAO.*(..))")
	  
	 public Object logPrint(ProceedingJoinPoint joinPoint) throws Throwable {
		return joinPoint;
	 }
	 */
}
