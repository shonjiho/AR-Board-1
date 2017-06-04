package arboard.game.controller;

import java.util.HashMap;
import java.util.Map;

import javax.annotation.Resource;
import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.common.common.Apns;
import arboard.game.websocket.GameSocketHandler;
import arboard.util.service.UtilService;

@Controller
public class GameSocketJoinController {

	@Autowired
	GameSocketHandler websocketHandler;
	 
	@Resource(name="apns")
	private Apns apns;

	@Resource(name = "utilservice")
	private UtilService utilService;
	
	// Get Game Room
	@RequestMapping(value = "/game/join", method = RequestMethod.GET)
	public @ResponseBody Object getGameRandomkey(HttpSession session) {

		Map<String, Object> jsonObject = new HashMap<String, Object>();
		String gameKey;
		gameKey = websocketHandler.getRandomGame();// get random game key.

		jsonObject.put("gameKey", gameKey);

		session.setAttribute("gameKey", gameKey);

		return jsonObject;
	}

	// Invite friend in game
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/game/friend/{friend_id}", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object inviteFriend(@PathVariable String friend_id, HttpSession session) {
		
	
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile"); 
		
		Map<String, Object> result = new HashMap<String, Object>();
		String gameKey;
		
		gameKey = websocketHandler.getRandomGame();// get random game key.
		
		//APNS push to  firend 
		String deviceToken = utilService.getDeviceToken(friend_id);
		if(deviceToken == null){
			//exception!!
		}
		apns.push(deviceToken, getInviteString((String)userProfile.get("userName")));
		
		result.put("gameKey", gameKey); 
		session.setAttribute("gameKey", gameKey); 
		return result;
	}
	
	public String getInviteString(String inviter){
		return inviter+"님이 초대하셨습니다.";
	}

}
