package arboard.auth.service;

import java.util.Map;
 

public interface AuthService {
 
	Map<String,Object> reqFacebookProfile(String accessToken) throws Exception;

	boolean valifyAccessToken(String accessToken) throws Exception;

	Map<String,Object> selectUser(Map<String, Object> map) throws Exception;

}
