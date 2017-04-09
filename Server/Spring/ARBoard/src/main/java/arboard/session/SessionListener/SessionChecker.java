package arboard.session.SessionListener;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import javax.servlet.ServletContext;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

@Controller
public class SessionChecker {

	@RequestMapping(value = "/sessionList", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	@SuppressWarnings("unchecked")
	public @ResponseBody Object getSessionList(HttpServletResponse reponse, HttpSession session) {

		ServletContext sevletContext = session.getServletContext();
		
		Map<String, HttpSession> map = (Map<String, HttpSession>) sevletContext
				.getAttribute(SessionMonitoring.activeKey);
		ArrayList<HashMap<String,Object>> jsonArray = new ArrayList<HashMap<String,Object>>();

		System.out.println("<<<<<Current Session List>>>>>");
		System.out.println("[          SessionID         ]  LastAccessed_Time  MaxInactiveInterval_Time");
		for (Map.Entry<String, HttpSession> elem : map.entrySet()) {
			HttpSession httpSession = elem.getValue();
			System.out.println(String.format(" [ %s ]  %d %d", httpSession.getId(), httpSession.getLastAccessedTime(),
					httpSession.getMaxInactiveInterval()));

			HashMap<String,Object> jsonObject = new HashMap<String,Object>();
			jsonObject.put("id", httpSession.getId());
			jsonObject.put("session", httpSession.getId());
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
				.getAttribute(SessionMonitoring.activeKey);

		HttpSession sessionSelected = map.get(id);
		sessionSelected.invalidate();

		HashMap<String,Object> jsonObject = new HashMap<String,Object>();
		jsonObject.put("message", "remove " + sessionSelected.getId());
		return jsonObject;
	}

}
