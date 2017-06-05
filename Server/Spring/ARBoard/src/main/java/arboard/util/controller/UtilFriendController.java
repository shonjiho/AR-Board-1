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
import org.springframework.beans.factory.annotation.Value;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.auth.exception.SessionUnAuthorizedException;
import arboard.util.exception.DuplicateIdExcpetion;
import arboard.util.exception.NotFoundParameterException;
import arboard.util.service.UtilService;
import javapns.Push;
import javapns.notification.PushNotificationPayload;
import javapns.notification.PushedNotifications;

@Controller
public class UtilFriendController {

	Logger log = Logger.getLogger(this.getClass());

	@Resource(name = "utilservice")
	private UtilService utilService;
	
	@Value("#{props['apns.ssl_certificate']}")
	public String APNS_SSL_CERTIFICATE_PATH;

	@Value("#{props['apns.ssl_certificate_pwd']}")
	public String APNS_SSL_CERTIFICATE_PWD;
	

	// list friend test method.
	// URI - GET /friend/list/{id}
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
	// URI - GET /friend/list
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
 
		// Active User List
		List<Map<String, Object>> activeUserList = utilService.getActiveUser(session);
 

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
		

		List<Map<String, Object>> requestlist = utilService.getFriendRequestList(id.toString());
		jsonObject.put("friendRequests", requestlist);

		return jsonObject;
	}

	// search friend
	// URI - GET /friend/search?email={email}
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/user", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object searchUser(@RequestParam(value = "email", required = false) String email,
			HttpServletResponse reponse, HttpSession session) {
		// if email empty
		if (email == null) {
			throw new NotFoundParameterException("email");
		}

		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		if (userProfile == null) {
			throw new SessionUnAuthorizedException(session);
		}
		BigInteger id = (BigInteger) userProfile.get("id");

		Map<String, Object> jsonObject = utilService.getUserProfile(email, id.toString());
		// testing whether user is my friends is checked mysql. 'Y' : friend.
		// 'N' : NOT friend.

		return jsonObject;
	}

	// request friend
	// URI - POST /friend/{id}/request
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/request/{receiver_id}", method = RequestMethod.POST)
	@ResponseStatus(HttpStatus.OK)
	public void requestFriend(@PathVariable String receiver_id, HttpServletResponse reponse, HttpSession session) {

		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		if (userProfile == null) {
			throw new SessionUnAuthorizedException(session);
		}
		BigInteger id = (BigInteger) userProfile.get("id");
		
		if(id.toString().equals(receiver_id)){
			throw new DuplicateIdExcpetion();
		}
		
		utilService.requestFriend(id.toString(), receiver_id);
		String deviceToken = utilService.getDeviceToken(receiver_id);
		if(deviceToken != null){
			String userName = (String) userProfile.get("userName"); 
			pushAPNS(deviceToken, userName+"님의 친구요청이 있습니다.", session); 
		}
		
		
	}
 
	// list request
	// URI - GET /friend/request/list
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/request/list", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object getFriendRequestList(HttpServletResponse reponse, HttpSession session) {
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		BigInteger id = (BigInteger) userProfile.get("id"); 

		Map<String, Object> jsonObject = new HashMap<String, Object>();
		List<Map<String, Object>> requestlist = utilService.getFriendRequestList(id.toString());
		jsonObject.put("friendRequests", requestlist);
		return jsonObject;
	}
 
	// Accept response about Friend request.
	// URI - PUT /friend/{id}/response 
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/response/{sender_id}", method = RequestMethod.PUT)
	@ResponseStatus(HttpStatus.OK)
	public void responseFriendRequest_accept(@PathVariable String sender_id, HttpServletResponse reponse,
			HttpSession session) {
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		BigInteger id = (BigInteger) userProfile.get("id");
		
		utilService.acceptFriendRequest(id.toString(),sender_id);
		
	}
 
	// Refuse response about Friend request.
	// URI - DELETE /friend/{id}/request
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/request/{sender_id}", method = RequestMethod.DELETE)
	@ResponseStatus(HttpStatus.OK)
	public void responseFriendRequest_refuse(@PathVariable String sender_id, HttpServletResponse reponse,
			HttpSession session) {
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		BigInteger id = (BigInteger) userProfile.get("id"); 
		
		utilService.refuseFriendRequest(id.toString(),sender_id);
	}
	
	//Remove Friend
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/friend/{friend_id}", method = RequestMethod.DELETE)
	@ResponseStatus(HttpStatus.OK)
	public void removeFriend(@PathVariable String friend_id,HttpSession session){
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");
		BigInteger id = (BigInteger) userProfile.get("id"); 
		utilService.removeFriend(id.toString(),friend_id);
	}
	
	
	
	public void pushAPNS(String devToken, String message,HttpSession session) {

		try {
			PushNotificationPayload payload = PushNotificationPayload.complex();
			payload.addAlert(message); 
			payload.addSound("default");
 

			String certificatePath = session.getServletContext().getRealPath(APNS_SSL_CERTIFICATE_PATH);
			System.out.println("path : "+certificatePath);
			 
			PushedNotifications notice = Push.payload(payload, certificatePath, APNS_SSL_CERTIFICATE_PWD, true,
					devToken);
  

		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
}
