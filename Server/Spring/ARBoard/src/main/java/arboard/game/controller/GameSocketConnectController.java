package arboard.game.controller;

import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;

import arboard.game.websocket.GameSocketHandler;

@Controller
public class GameSocketConnectController {

	//@Autowired
	//GameSocketHandler websocketHandler;
	
	@RequestMapping(value="/game",method=RequestMethod.GET)
	public String connectSocket(HttpSession session){
		//System.out.println("Running Game COUNT : "+websocketHandler.gameList.size());
		return "/wsclient";
	}
}
