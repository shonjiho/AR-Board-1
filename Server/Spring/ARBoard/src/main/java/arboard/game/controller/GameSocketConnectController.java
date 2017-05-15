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
public class GameSocketConnectController {

	@Autowired
	GameSocketHandler websocketHandler;
	
	@RequestMapping(value="/game",method=RequestMethod.GET)
	public String connectSocket(HttpSession session){
		System.out.println("Running Game COUNT : "+websocketHandler.gameList.size()); 
		return "/wsclient";
	}
	
	@RequestMapping(value="/game/list",method=RequestMethod.GET)
	public @ResponseBody Object getGameList(HttpSession session){
		
		Map<String,Object> jsonObject = new HashMap<String, Object>();
		jsonObject.put("gameCount", websocketHandler.gameList.size());
		
		return jsonObject;
	}
 
	@RequestMapping(value="/wstest",method=RequestMethod.GET)
	public String TestEchoSocket(HttpSession session){ 
		return "/wsTest";
	}
	//Get Game Room
	@RequestMapping(value="/game/join",method=RequestMethod.GET)
	public @ResponseBody Object getGameRandomkey(HttpSession session){
		
		Map<String,Game> gameSet = websocketHandler.gameList;
		Map<String,Object> jsonObject = new HashMap<String, Object>();
		ArrayList<Game> list = new ArrayList<Game>(gameSet.values());
		if(list.size() ==0){
			jsonObject.put("no", "game");
			return jsonObject;
		}
		int random = (int) (Math.random()/list.size());
		String gameKey = ((Game) list.get(random)).getGameKey();
		jsonObject.put("gameKey", gameKey);
		session.setAttribute("gameKey", gameKey); 
		return jsonObject;
	}
	
	
	@RequestMapping(value="/game/make",method=RequestMethod.GET)
	public @ResponseBody Object makeGame(HttpSession session){
		Map<String,Game> gameSet = websocketHandler.gameList;
		
		long timeStamp = System.currentTimeMillis();
		String generatedKey = Long.toString(timeStamp);
		
//		while(!gameSet.containsKey(generatedKey)){
//			timeStamp--;
//			generatedKey = Long.toString(timeStamp);
//			
//		}

//		Game game = new Game(websocketHandler,generatedKey);
//    	game.start(); 
//    	websocketHandler.gameList.put(generatedKey, game);
//		//websocketHandler.insertGame(generatedKey, game);
		//System.out.println("game count : "+gameSet.size());
		Map<String,Object> jsonObject = new HashMap<String, Object>();
		jsonObject.put("gameKey",generatedKey);
		session.setAttribute("gameKey", generatedKey);
		return jsonObject;
	}
	
	
}
