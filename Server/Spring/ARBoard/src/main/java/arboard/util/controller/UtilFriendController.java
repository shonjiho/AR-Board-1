package arboard.util.controller;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.annotation.Resource;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.apache.log4j.Logger;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.auth.exception.SessionUnAuthorizedException;
import arboard.util.exception.NotFoundParameterException;
import arboard.util.service.UtilService;

@Controller
public class UtilFriendController {

	Logger log = Logger.getLogger(this.getClass());

	@Resource(name = "utilservice")
	private UtilService utilService;

	// list friend test method.
	// URI - /friend/list/{id}
	// f
	@RequestMapping(value = "/friend/list/{id}", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)

	public @ResponseBody Object getFriendList_test(@PathVariable String id, HttpServletResponse reponse,
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
		List<Map<String, Object>> activeUserList = utilService.getActiveUser(session);

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

	// with session,list friends
	// URI - /friend/list
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/list", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object getFriendList(HttpServletResponse reponse, HttpSession session) {

		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		BigInteger id = (BigInteger) userProfile.get("id");

		Map<String, Object> jsonObject = new HashMap<String, Object>();
		ArrayList<HashMap<String, Object>> OnFriendArray = new ArrayList<HashMap<String, Object>>();
		ArrayList<HashMap<String, Object>> OffFriendArray = new ArrayList<HashMap<String, Object>>();

		jsonObject.put("onFriends", OnFriendArray);
		jsonObject.put("offFriends", OffFriendArray);

		// All Friend List
		List<Map<String, Object>> friendList = utilService.getFriendList(id.toString());

		//for test 
		jsonObject.put("allFriends", friendList);

		// Active User List
		List<Map<String, Object>> activeUserList = utilService.getActiveUser(session);

		//for test
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
	 
	
	// search friend
	// URI - /friend/search?email={email}
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/search", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object searchUser(@RequestParam(value = "email", required = false) String email,
			HttpServletResponse reponse, HttpSession session) {
		//if email empty
		if(email == null){
			throw new NotFoundParameterException("email");
		} 
		
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		if(userProfile == null){
			throw new SessionUnAuthorizedException();
		}
		BigInteger id = (BigInteger) userProfile.get("id");
		
		Map<String, Object> jsonObject = utilService.getUserProfile(email,id.toString());
		//testing whether user is my friends is checked mysql. 'Y' : friend. 'N' : NOT friend.  
		
		return jsonObject;
	}
 
	// request friend
	// URI - /friend/{id}/request
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/{receiver_id}/request", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public void requestFriend(@PathVariable String receiver_id, HttpServletResponse reponse, HttpSession session) {

		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		if(userProfile == null){
			throw new SessionUnAuthorizedException();
		}
		BigInteger id = (BigInteger) userProfile.get("id");
		
		utilService.requestFriend(id.toString(),receiver_id);
	}

	// NOT IMPLEMENT.
	// list request
	// URI - /friend/request/list
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/request/list", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object getFriendRequestList(HttpServletResponse reponse, HttpSession session) {
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		BigInteger id = (BigInteger) userProfile.get("id");
		// 친구 요청 리스트 검색

		return new Object();
	}

	// NOT IMPLEMENT.
	// Accept response about Friend request.
	// URI - /friend/{id}/response/accept
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/{sender_id}/response/accept", method = RequestMethod.POST)
	@ResponseStatus(HttpStatus.OK)
	public void responseFriendRequest_accept(@PathVariable String sender_id, HttpServletResponse reponse,
			HttpSession session) {
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		BigInteger id = (BigInteger) userProfile.get("id");
		// 친구 요청에 대한 응답
	}

	// NOT IMPLEMENT.
	// Refuse response about Friend request.
	// URI - /friend/{id}/response/refuse
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/{sender_id}/response/refuse", method = RequestMethod.POST)
	@ResponseStatus(HttpStatus.OK)
	public void responseFriendRequest_refuse(@PathVariable String sender_id, HttpServletResponse reponse,
			HttpSession session) {
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		BigInteger id = (BigInteger) userProfile.get("id");
		// 친구 요청에 대한 응답
	}

}
