package arboard.util.dao;

import java.util.List;
import java.util.Map;

import org.springframework.stereotype.Repository;

import arboard.common.dao.AbstractDAO;

@Repository("utilDAO")
public class UtilDAO extends AbstractDAO{

	
	@SuppressWarnings("unchecked")
	public List<Map<String,Object>> selectFriendList(Map<String, Object> params){
		return selectList("selectFriendList", params); 
	}
}
