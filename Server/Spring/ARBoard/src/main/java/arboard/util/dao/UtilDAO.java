package arboard.util.dao;

import java.util.List;
import java.util.Map;

import org.springframework.stereotype.Repository;

import arboard.common.dao.AbstractDAO;

@SuppressWarnings("unchecked")
@Repository("utilDAO")
public class UtilDAO extends AbstractDAO{

	 
	public List<Map<String,Object>> selectFriendList(Map<String, Object> params){
		return selectList("selectFriendList", params); 
	}

	public Map<String, Object> selectUser(Map<String, Object> params) { 
		return (Map<String, Object>) selectOne("selectUserToEmail", params);
	}
}
