package arboard.auth.dao;
 

import java.util.Map;

import org.springframework.stereotype.Repository;

import arboard.common.dao.AbstractDAO;

@Repository("authDAO")
public class AuthDAO extends AbstractDAO {
	
	@SuppressWarnings("unchecked")
	public Map<String, Object> selectUserProfileToEmail(Map<String, Object> map) throws Exception{
	    return (Map<String, Object>) selectOne("auth.selectUserProfileToEmail", map);
	}

	
	@SuppressWarnings("unchecked")
	public Map<String, Object> selectUserProfileToId(Map<String, Object> map) {
		// TODO Auto-generated method stub
		return (Map<String, Object>) selectOne("auth.selectUserProfileToId", map);
	}
	public void insertUser(Map<String, Object> map) throws Exception {
		 insert("auth.insertUser", map);
	}
	 
}
