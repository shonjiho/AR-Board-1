package arboard.util.service;
 
import java.util.List;
import java.util.Map;

import javax.servlet.http.HttpSession;

public interface UtilService {

	
	List<Map<String, Object>> getFriendList(String id);
	List<Map<String, Object>> getActiveUser(HttpSession session);
	Map<String, Object> getUserProfile(String email, String id);
	void requestFriend(String senderId, String receiverId); 
	boolean checkDuplicateRequest(String senderId,String receiverId);
	List<Map<String, Object>> getFriendRequestList(String string);
	void acceptFriendRequest(String receiverId, String senderId);
	void refuseFriendRequest(String receiverId, String senderId);
	
	
	
}


