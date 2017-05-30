package arboard.util.service;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.annotation.Resource;
import javax.servlet.ServletContext;
import javax.servlet.http.HttpSession;

import org.apache.log4j.Logger;
import org.springframework.stereotype.Service;

import arboard.common.listener.ARBoardServletContextListener;
import arboard.util.dao.UtilDAO;

@Service("utilservice")
public class UtilServiceImpl implements UtilService {


	Logger log = Logger.getLogger(this.getClass());
	
	@Resource(name = "utilDAO")
	private UtilDAO utilDAO;

	//Get FriendList with id
	@Override
	public List<Map<String, Object>> getFriendList(String id) {

		Map<String, Object> param = new HashMap<String, Object>();
		param.put("id", id); 
		List<Map<String, Object>> resultList = utilDAO.selectFriendList(param);
		
		//for test, need refactoring!.
		for(Map<String,Object> userinfo:resultList){
			Dirty_addUserImagecolumn(userinfo);
		}
		
		return resultList;
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
			jsonObject.put("userImage", (userProfile.containsKey("userImage"))?userProfile.get("userImage"):null);
			jsonArray.add(jsonObject);
		}
		return jsonArray;
	}

	
	@Override
	public Map<String, Object> getUserProfile(String email,String id) {
		
		Map<String, Object> param = new HashMap<String, Object>();
		param.put("email", email);
		param.put("id", id);
		Map<String,Object> result =  utilDAO.selectUser(param);
		Dirty_addUserImagecolumn(result);
		return result;
	}

	@Override
	public boolean checkDuplicateRequest(String senderId ,String receiverId){

		Map<String, Object> param = new HashMap<String, Object>();
		param.put("senderId", senderId);
		param.put("receiverId", receiverId);
		
		//duplicate
		if( utilDAO.selectRequest(param) == null) {
			return false;
		}else{
			return true;
		}
	}
	
	@Override
	public void requestFriend(String senderId, String receiverId) {
		Map<String, Object> param = new HashMap<String, Object>();
		param.put("senderId", senderId);
		param.put("receiverId", receiverId);
		//if duplicate is true, not insert request
		if(checkDuplicateRequest(senderId,receiverId)){
			log.debug("Duplicate Request!! already exist senderId : "+senderId+", receiverId"+receiverId);
			return ;
		}
		utilDAO.insertFriendRequest(param);
	}

	@Override
	public List<Map<String, Object>> getFriendRequestList(String receiverId) {

		Map<String, Object> param = new HashMap<String, Object>();
		param.put("receiverId", receiverId);
		
		List<Map<String, Object>> resultList = utilDAO.selectFriendRequestList(param);
 
		for(Map<String,Object> userinfo:resultList){
			Dirty_addUserImagecolumn(userinfo);
		}
		return resultList;
	}

	
	//this method must be transaction SQL.
	@Override
	public void acceptFriendRequest(String receiverId, String senderId) {

		Map<String,Object> param = new HashMap<String, Object>();
		param.put("senderId", senderId);
		param.put("receiverId", receiverId); 
		if(checkDuplicateRequest(receiverId,senderId)){
			log.debug("Duplicate Response!! already exist senderId : "+senderId+", receiverId"+receiverId);
			return ;
		}
		utilDAO.insertFriendResponse(param);
		utilDAO.updateFriendRelationship(param);
	}

	@Override
	public void refuseFriendRequest(String receiverId, String senderId) { 
		Map<String,Object> param = new HashMap<String, Object>();
		param.put("senderId", senderId);
		param.put("receiverId", receiverId); 
		utilDAO.deleteFriendRequest(param);
	}

	@Override
	public void removeFriend(String receiverId, String senderId){
		Map<String,Object> param = new HashMap<String, Object>();
		param.put("senderId", senderId);
		param.put("receiverId", receiverId);  
		utilDAO.deleteFriend(param);
	}
	
	//---------------------------need refactoring method------
	public Map<String,Object> Dirty_addUserImagecolumn(Map<String,Object> map){
		if(!map.containsKey("userImage")){
			map.put("userImage", null);
		}
		return map;
	}

}
