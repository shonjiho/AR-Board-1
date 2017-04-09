package arboard.session.SessionListener;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import javax.servlet.ServletContext;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.apache.log4j.Logger;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.common.listener.ARBoardServletContextListener;

@Controller
public class SessionChecker {

	Logger log = Logger.getLogger(this.getClass());

	@RequestMapping(value = "/userList", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	@SuppressWarnings("unchecked")
	public @ResponseBody Object getUserList(HttpServletResponse reponse, HttpSession session) {

		ServletContext sevletContext = session.getServletContext();

		Map<String, HttpSession> map = (Map<String, HttpSession>) sevletContext
				.getAttribute(ARBoardServletContextListener.ACTIVEUSERS_ATTRIBUTE_NAME);
		ArrayList<HashMap<String, Object>> jsonArray = new ArrayList<HashMap<String, Object>>();

		log.debug("<<<<<Active User  List>>>>>");

		for (Map.Entry<String, HttpSession> elem : map.entrySet()) {
			HttpSession httpSession = elem.getValue();
			if (httpSession.getAttribute("status") == null) {
				// not login user
				continue;
			}
			Map<String, Object> userProfile = (Map<String, Object>) httpSession.getAttribute("userProfile");
			log.debug("ID:" + userProfile.get("id") + ", Name:" + userProfile.get("userName") + ", Emale:"
					+ userProfile.get("userEmail"));

			HashMap<String, Object> jsonObject = new HashMap<String, Object>();
			jsonObject.put("id", userProfile.get("id"));
			jsonObject.put("name", userProfile.get("userName"));
			jsonObject.put("email", userProfile.get("userEmail"));
			jsonArray.add(jsonObject);
		}

		return jsonArray;
	}

	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/sessionRemove", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object removeSession(@RequestParam(value = "id", required = false) String id,
			HttpSession session) {

		ServletContext sevletContext = session.getServletContext();

		Map<String, HttpSession> map = (Map<String, HttpSession>) sevletContext
				.getAttribute(ARBoardServletContextListener.ACTIVEUSERS_ATTRIBUTE_NAME);

		HttpSession sessionSelected = map.get(id);
		sessionSelected.invalidate();

		HashMap<String, Object> jsonObject = new HashMap<String, Object>();
		jsonObject.put("message", "remove " + sessionSelected.getId());
		return jsonObject;
	}

	@RequestMapping(value = "/sessionList", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	@SuppressWarnings("unchecked")
	public @ResponseBody Object getSessionList(HttpServletResponse reponse, HttpSession session) {

		ServletContext sevletContext = session.getServletContext();

		Map<String, HttpSession> map = (Map<String, HttpSession>) sevletContext
				.getAttribute(ARBoardServletContextListener.ACTIVEUSERS_ATTRIBUTE_NAME);
		ArrayList<HashMap<String, Object>> jsonArray = new ArrayList<HashMap<String, Object>>();

		log.debug("<<<<<Session  List>>>>>");
  
		for (Map.Entry<String, HttpSession> elem : map.entrySet()) {
			HttpSession httpSession = elem.getValue();
			System.out.println(String.format(" [ %s ]  %d %d", httpSession.getId(), httpSession.getLastAccessedTime(),
					httpSession.getMaxInactiveInterval()));

			HashMap<String, Object> jsonObject = new HashMap<String, Object>();
			jsonObject.put("id", httpSession.getId()); 
			jsonArray.add(jsonObject);
		}

		return jsonArray;
	}
}
