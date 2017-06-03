package arboard.game.controller;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.ResponseBody;

import arboard.game.model.Game;
import arboard.game.model.GameMember;
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
	
	@RequestMapping(value = "/game/list", method = RequestMethod.GET)
	public @ResponseBody Object getGameList(HttpSession session) {

		Map<String, Game> gameMapObject = websocketHandler.gameList; 
		Map<String, Object> resultObject = new HashMap<String, Object>();
		ArrayList<Game> gameList= new ArrayList<Game>(gameMapObject.values());
		ArrayList<Map<String,Object>> gameObjectList = new ArrayList<Map<String,Object>>();
		resultObject.put("games", gameObjectList);
		for(Game game:gameList){
			Map<String,Object> bufObject = new HashMap<String, Object>();
			bufObject.put("gameKey", game.gameKey);
			ArrayList<Object> memberlist = new ArrayList<Object>();
			bufObject.put("member", memberlist); 
			for(GameMember member: game.gameMembers){
				 
				memberlist.add(member.userName);
			}  
			bufObject.put("gameState", game.gameState);
			gameObjectList.add(bufObject);
		} 
		resultObject.put("count", gameList.size());
		return resultObject;
	}
	
	//test api
	@RequestMapping(value="/wstest",method=RequestMethod.GET)
	public String TestEchoSocket(HttpSession session){ 
		return "/wsTest";
		
	} 
	//tester
	@RequestMapping(value = "/game/testReady/{count}", method = RequestMethod.GET)
	public @ResponseBody Object changeGameMember(@PathVariable int count,HttpSession session) {
		Map<String, Object> resultObject = new HashMap<String,Object>();
		
		Game.readyMemberCount = count;
		resultObject.put("ReadyNumber", Game.readyMemberCount);
		return resultObject;
		
	}
	 
	
}
