package arboard.auth.service;

import java.util.Map;

import javax.annotation.Resource;

import org.apache.log4j.Logger;
import org.springframework.stereotype.Service;

import arboard.auth.common.FBGraph;
import arboard.auth.dao.AuthDAO;

@Service("authservice")
public class AuthServiceImpl implements AuthService {
	Logger log = Logger.getLogger(this.getClass());

	@Resource(name = "authDAO")
	private AuthDAO authDAO;

	@Override
	public boolean valifyAccessToken(String accessToken) throws Exception {
		Map<String, Object> result = FBGraph.isValified_AccessToken(accessToken);
		if (result.get("is_valid").equals(true)) {
			return true;
		} else {
			return false;
		}
	}

	@Override
	public Map<String, Object> reqFacebookProfile(String accessToken) throws Exception {

		Map<String, Object> resultMap = FBGraph.getFBGraphProfile(accessToken);
		log.debug(resultMap);
		return resultMap;
	}

	@Override
	public Map<String, Object> getUserInfo(Map<String, Object> map) throws Exception {
		 
		//map ->  name email oauthToken oauthType userId
		Map<String, Object> userProfile = authDAO.selectUserProfileToEmail(map);
		
		//if user is not found , generate user data and show profile
		if(userProfile == null){
			authDAO.insertUser(map);
		}else{ 
			authDAO.updateUserToken(map);
		}
		
		userProfile = authDAO.selectUserProfileToId(map);
		
		log.debug("user profile"+userProfile);
		return userProfile;

	}

}
