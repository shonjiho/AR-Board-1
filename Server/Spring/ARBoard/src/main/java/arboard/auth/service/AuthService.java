package arboard.auth.service;

import java.util.Map;
 

public interface AuthService {
 
	Map<String,Object> reqFacebookProfile(String accessToken);

	boolean valifyAccessToken(String accessToken);

	Map<String,Object> selectUser(Map<String, Object> map) throws Exception;

}
