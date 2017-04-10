package arboard.util.controller;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.annotation.Resource;
import javax.servlet.ServletContext;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.apache.log4j.Logger;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.common.listener.ARBoardServletContextListener;
import arboard.util.service.UtilService;
import sun.security.x509.FreshestCRLExtension;

@Controller
public class UtilFriendController {

	Logger log = Logger.getLogger(this.getClass());

	@Resource(name = "utilservice")
	private UtilService utilService;

	@RequestMapping(value = "/{id}/friendList", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object getFriendList(@PathVariable String id, HttpServletResponse reponse,
			HttpSession session) {

		Map<String, Object> jsonObject = new HashMap<String, Object>();
		ArrayList<HashMap<String, Object>> OnFriendArray = new ArrayList<HashMap<String, Object>>();
		ArrayList<HashMap<String, Object>> OffFriendArray = new ArrayList<HashMap<String, Object>>();

		jsonObject.put("onFriends", OnFriendArray);
		jsonObject.put("offFriends", OffFriendArray);

		// All Friend List
		List<Map<String, Object>> friendList = utilService.getFriendList(id);

		jsonObject.put("allFriends", friendList);

		// Active User List
		List<Map<String, Object>> activeUserList = getActiveUser(session);

		jsonObject.put("allUsers", activeUserList);

		for (int i = 0; i < friendList.size(); i++) {
			Map<String, Object> friendMap = friendList.get(i);
			boolean flag = false;
			for (int j = 0; j < activeUserList.size(); j++) {
				Map<String, Object> activeUserMap = activeUserList.get(j);
				if (activeUserMap.get("id") == friendMap.get("id")) {
					friendMap.put("status", "On");// On
					OnFriendArray.add((HashMap<String, Object>) friendMap);
					flag = true;
					break;
				}
			}
			if (!flag) {
				friendMap.put("status", "Off");// Off
				OffFriendArray.add((HashMap<String, Object>) friendMap);
			}
		}

		return jsonObject;
	}

	@SuppressWarnings("unchecked")
	public List<Map<String, Object>> getActiveUser(HttpSession session) {
		ServletContext sevletContext = session.getServletContext();

		Map<String, HttpSession> map = (Map<String, HttpSession>) sevletContext
				.getAttribute(ARBoardServletContextListener.ACTIVEUSERS_ATTRIBUTE_NAME);
		List<Map<String, Object>> jsonArray = new ArrayList<Map<String, Object>>();

		for (Map.Entry<String, HttpSession> elem : map.entrySet()) {
			HttpSession httpSession = elem.getValue();
			if (httpSession.getAttribute("status") == null) {
				continue;
			}
			Map<String, Object> userProfile = (Map<String, Object>) httpSession.getAttribute("userProfile");

			HashMap<String, Object> jsonObject = new HashMap<String, Object>();
			jsonObject.put("id", userProfile.get("id"));
			jsonObject.put("userName", userProfile.get("userName"));
			jsonObject.put("userEmail", userProfile.get("userEmail"));
			jsonArray.add(jsonObject);
		}
		return jsonArray;
	}
}
