package arboard.session.SessionListener;

import java.util.HashMap;
import java.util.Map;

import javax.servlet.ServletContext;
import javax.servlet.http.HttpSession;
import javax.servlet.http.HttpSessionEvent;
import javax.servlet.http.HttpSessionListener;

import org.springframework.beans.factory.annotation.Autowired;

import arboard.common.listener.ARBoardServletContextListener;

public class SessionMonitoring implements HttpSessionListener {


	@Autowired
	public ServletContext servletContext;

	@SuppressWarnings("unchecked")
	@Override
	public void sessionCreated(HttpSessionEvent event) {
		HttpSession session = event.getSession();
		
		//test
		session.setMaxInactiveInterval(30);
		
		ServletContext context = session.getServletContext();
		Map<String, HttpSession> activeUsers = (Map<String, HttpSession>) context
				.getAttribute(ARBoardServletContextListener.ACTIVEUSERS_ATTRIBUTE_NAME);

		System.out.println(String.format(" [ %s ] - Created.", session.getId()));
		activeUsers.put(session.getId(), session);
	}

	@SuppressWarnings("unchecked")
	@Override
	public void sessionDestroyed(HttpSessionEvent event) {

		HttpSession session = event.getSession();
		ServletContext context = session.getServletContext();

		Map<String, HttpSession> activeUsers = (Map<String, HttpSession>) context
				.getAttribute(ARBoardServletContextListener.ACTIVEUSERS_ATTRIBUTE_NAME);
		System.out.print(String.format(" [ %s ] - Destroyed.", session.getId()));

		activeUsers.remove(session.getId());

	}

}
