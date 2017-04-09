package arboard.util.controller;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.apache.log4j.Logger;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

@Controller
public class UtilFriendController {

	Logger log = Logger.getLogger(this.getClass());

	@RequestMapping(value = "/friendList", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK)
	public @ResponseBody Object getFriendList(HttpServletResponse reponse, HttpSession session) {

		Map<String, Object> jsonObject = new HashMap<String, Object>(); 
		ArrayList<HashMap<String, Object>> OnFriendArray = new ArrayList<HashMap<String, Object>>();
		ArrayList<HashMap<String, Object>> OffFriendArray = new ArrayList<HashMap<String, Object>>();
		
		jsonObject.put("onFriends", OnFriendArray);
		jsonObject.put("offFriends", OffFriendArray);
		 
		
		/* logic how to get connected user*/
		
		
		
		
		for (int i = 0; i < 2; i++) {

			Map<String, Object> object = new HashMap<String, Object>();
			object.put("id", 100);
			object.put("userName", "test"+i);
			object.put("userEmail", "test"+i+"@gmail.com");
			object.put("state", "yet");
			if (i == 0) {
				OnFriendArray.add((HashMap<String, Object>) object);
			}else{
				OffFriendArray.add((HashMap<String, Object>) object);
			}
		}
		

		return jsonObject;
	}
}
