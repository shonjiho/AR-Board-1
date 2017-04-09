package arboard.session.SessionListener;

import java.util.HashMap;
import java.util.Map;

import javax.servlet.ServletContext;
import javax.servlet.http.HttpSession;
import javax.servlet.http.HttpSessionEvent;
import javax.servlet.http.HttpSessionListener;

public class SessionMonitoring implements HttpSessionListener {
 
	public static final String activeKey =  "activeUsers";
	@Override
	public void sessionCreated(HttpSessionEvent event) {
		HttpSession session = event.getSession();
		 
		
		ServletContext context = session.getServletContext();
		Map<String, HttpSession> activeUsers = (Map<String, HttpSession>) context.getAttribute(activeKey);	
		if(activeUsers == null){
			context.setAttribute(activeKey, new HashMap<String, HttpSession>());
			activeUsers = (Map<String, HttpSession>)context.getAttribute(activeKey);
		} 
		activeUsers.put(session.getId(), session);
		 
	}

	@Override
	public void sessionDestroyed(HttpSessionEvent event) {
		
		HttpSession session = event.getSession();
		ServletContext context = session.getServletContext();
		Map activeUsers = (Map) context.getAttribute(activeKey);
		if(activeUsers == null){
			context.setAttribute(activeKey, new HashMap<String, HttpSession>());
			activeUsers = (Map<String, HttpSession>)context.getAttribute(activeKey);
		} 
		System.out.print(String.format(" [ %s ] ",session.getId()));
		System.out.println(session.toString() + " Destroyed.");
		
		activeUsers.remove(session.getId());
		
		
	}

}
