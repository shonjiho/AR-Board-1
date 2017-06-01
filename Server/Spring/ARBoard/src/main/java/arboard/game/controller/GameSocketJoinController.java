package arboard.game.controller;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.ResponseBody;

import arboard.game.model.Game;
import arboard.game.websocket.GameSocketHandler;

@Controller
public class GameSocketJoinController {

	@Autowired
	GameSocketHandler websocketHandler;

	// Get Game Room
	@RequestMapping(value = "/game/join", method = RequestMethod.GET)
	public @ResponseBody Object getGameRandomkey(HttpSession session) {
 
		Map<String, Object> jsonObject = new HashMap<String, Object>(); 
		String gameKey; 
		gameKey = websocketHandler.getRandomGame();//get random game key.
		
		jsonObject.put("gameKey", gameKey);
		session.setAttribute("gameKey", gameKey);
		return jsonObject;
	}
	
 
}
