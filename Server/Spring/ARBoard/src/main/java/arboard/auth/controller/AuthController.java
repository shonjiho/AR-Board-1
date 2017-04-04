package arboard.auth.controller;

import java.util.HashMap;
import java.util.Map;

import javax.annotation.Resource;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.apache.log4j.Logger;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.auth.exception.AccessTokenInvalidException;
import arboard.auth.exception.AccessTokenNotFoundException;
import arboard.auth.service.AuthService;
import arboard.common.common.CommandMap;
 

@Controller
public class AuthController {
	Logger log = Logger.getLogger(this.getClass());

	@Resource(name = "authservice")
	private AuthService authService;

	@RequestMapping(value = "/auth/facebook/login", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object FaceBooklogin(Map commandMap,  HttpSession session) throws Exception {
		
		Object accessToken = commandMap.get("access_token");
		if (accessToken == null) { 
			throw new AccessTokenNotFoundException();
		}
		
		//valify token
		String oauthToken = accessToken.toString();
		if (authService.valifyAccessToken(oauthToken) == false) { 
			throw new AccessTokenInvalidException();
		}

		//Login profile generate (userName +userEmail + oauthToken + oauthType)
		Map<String, Object> profile = authService.reqFacebookProfile(oauthToken);
		profile.put("oauthToken", oauthToken);
		profile.put("oauthType", "FACEBOOK");

		//Login recently information update or insert.
		Map<String, Object> userProfile = authService.selectUser(profile);
 
		session.setAttribute("status", true);
		
		return userProfile;
	}
	@RequestMapping(value = "/auth/test", method = RequestMethod.GET )
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object session(HttpServletResponse reponse, HttpSession session) {
		Map<String,Object> jsonObject = new HashMap<String, Object>();
		jsonObject.put("status", session.getAttribute("status"));
	
		return jsonObject;
	}
	// ----------------------------test---------------------------------------

	@RequestMapping(value = "/auth/test/session", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object sessionTest(HttpServletResponse reponse, HttpSession session) {
		Map<String,Object> jsonObject = new HashMap<String, Object>();
		jsonObject.put("status", session.getAttribute("status"));
		return jsonObject;
	}
}
