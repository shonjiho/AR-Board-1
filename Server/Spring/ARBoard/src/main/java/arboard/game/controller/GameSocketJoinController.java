package arboard.game.controller;

import java.io.File;
import java.util.HashMap;
import java.util.Map;

import javax.annotation.Resource;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.http.HttpRequest;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.common.common.Apns;
import arboard.game.exception.NoDeviceTokenException;
import arboard.game.exception.NoGameRoomException;
import arboard.game.websocket.GameSocketHandler;
import arboard.util.service.UtilService;
import javapns.Push;
import javapns.notification.PushNotificationPayload;
import javapns.notification.PushedNotifications;

@Controller
public class GameSocketJoinController {

	@Autowired
	GameSocketHandler websocketHandler;
 

	@Resource(name = "utilservice")
	private UtilService utilService;

	// "#{props['hello.number']}"
	@Value("#{props['apns.ssl_certificate']}")
	public String APNS_SSL_CERTIFICATE_PATH;

	@Value("#{props['apns.ssl_certificate_pwd']}")
	public String APNS_SSL_CERTIFICATE_PWD;

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

	//attend room
	//PUT /game/attend/{gameKey}
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/game/join/{gameKey}", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object receiveInvitation(@PathVariable String gameKey, HttpSession session) {
		if(!websocketHandler.gameList.containsKey(gameKey)){
			throw new NoGameRoomException(gameKey);
		}
		Map<String, Object> result = new HashMap<String, Object>(); 
		session.setAttribute("gameKey", gameKey); 
		result.put("gameKey", gameKey);
		return gameKey;
	}
	// Invite friend in game
	// GET 
	// /game/friend/{id}
	@SuppressWarnings("unchecked")
	@RequestMapping(value = "/game/friend/{friend_id}", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object inviteFriend(@PathVariable String friend_id, HttpSession session) {
		Map<String, Object> userProfile = (Map<String, Object>) session.getAttribute("userProfile");

		Map<String, Object> result = new HashMap<String, Object>();
		String gameKey;

		gameKey = websocketHandler.makeGame();// get random game key.

		// APNS push to firend
		String deviceToken = utilService.getDeviceToken(friend_id);
		if (deviceToken == null) {
			throw new NoDeviceTokenException();
		}
		String userName = getInviteString((String) userProfile.get("userName"));

		session.setAttribute("gameKey", gameKey);
		//push APNS
		pushAPNS(deviceToken, userName, session); 
		
		result.put("gameKey", gameKey);
		return result;
	}

	public String getInviteString(String inviter) {
		return inviter + "님이 초대하셨습니다.";
	}
 
//	@RequestMapping(value = "/game/certificatefile/exist", method = RequestMethod.GET)
//	@ResponseStatus(HttpStatus.OK)
//	public @ResponseBody Object testFilePath(HttpServletRequest request, HttpSession session) {
//		Map<String, Object> result = new HashMap<String, Object>();
//		String certificatePath = request.getSession().getServletContext().getRealPath("/cert.p12");
//		result.put("path", certificatePath);
//		result.put("exist", new File(certificatePath).exists());
//		return result;
//	}
	
//	@RequestMapping(value = "/game/test/push", method = RequestMethod.GET)
//	@ResponseStatus(HttpStatus.OK)
//	public @ResponseBody Object testPush(HttpServletRequest request, HttpSession session) { 
//		Map<String, Object> result = new HashMap<String, Object>(); 
//		pushAPNS("7A64867DE409B0B4AFE92A2D293FC5F25BC26ADD470A88D7C66C03AA7332CEA8","이거 왓으면 카톡점",session); 
//		result.put("push", "true");
//		return result;
//	}
	@RequestMapping(value = "/game/test/make", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object makeGameTEST(HttpServletRequest request, HttpSession session) { 
		Map<String, Object> result = new HashMap<String, Object>(); 
		String gameKey = websocketHandler.makeGame();
		result.put("key", gameKey);
		return result;
	} 
	
	public void pushAPNS(String devToken, String message,HttpSession session) {

		try {
			PushNotificationPayload payload = PushNotificationPayload.complex();
			payload.addAlert(message); 
			payload.addCustomDictionary("gameKey", session.getAttribute("gameKey")); 
			payload.addCustomDictionary("type", "game"); 
			payload.addSound("default");
 

			String certificatePath = session.getServletContext().getRealPath(APNS_SSL_CERTIFICATE_PATH); 
			
			// payload, 인증서파일.p12, 인증서비빌번호, true/false, 디바이스 토큰값
			// true : 실서버 gateway.push.apple.com
			// false : 개발서버 gateway.sandbox.push.apple.com
			PushedNotifications notice = Push.payload(payload, certificatePath, APNS_SSL_CERTIFICATE_PWD, false,
					devToken); 
			System.out.println("Success : "+notice.getSuccessfulNotifications().size());
			

		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
