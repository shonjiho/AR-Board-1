package arboard.util.service;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.annotation.Resource;
import javax.servlet.ServletContext;
import javax.servlet.http.HttpSession;

import org.springframework.stereotype.Service;

import arboard.common.listener.ARBoardServletContextListener;
import arboard.util.dao.UtilDAO;

@Service("utilservice")
public class UtilServiceImpl implements UtilService {

	@Resource(name = "utilDAO")
	private UtilDAO utilDAO;

	//Get FriendList with id
	@Override
	public List<Map<String, Object>> getFriendList(String id) {

		Map<String, Object> param = new HashMap<String, Object>();
		param.put("id", id);

		return utilDAO.selectFriendList(param);

	}

	// Get Active User method.
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

	
	@Override
	public Map<String, Object> getUserProfile(String email,String id) {
		
		Map<String, Object> param = new HashMap<String, Object>();
		param.put("email", email);
		param.put("id", id);
		return utilDAO.selectUser(param);
		 
	}

}
