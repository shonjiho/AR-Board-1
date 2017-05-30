package arboard.auth.service;

import java.util.Map;
 

public interface AuthService {
 
	Map<String,Object> reqFacebookProfile(String accessToken) throws Exception;

	boolean valifyAccessToken(String accessToken) throws Exception;

	Map<String,Object> getUserInfo(Map<String, Object> map) throws Exception;

	void userDelete(Map<String, Object> profile);

	void changeUserName(Map<String, Object> profile);
	
	

}
