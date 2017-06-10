package arboard.auth.service;

import java.util.Map;
 

public interface AuthService {
 
	//from Facebook Graph API.
	Map<String,Object> reqFacebookProfile(String accessToken) throws Exception; 
	boolean valifyAccessToken(String accessToken) throws Exception;
	
	//Get User Information from Database.
	Map<String,Object> getUserInfo(Map<String, Object> map) throws Exception;
	
	//Change User Database.
	void userDelete(Map<String, Object> profile); 
	void changeUserName(Map<String, Object> profile);
	
	

}
