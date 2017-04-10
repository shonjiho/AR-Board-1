package arboard.util.service;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.annotation.Resource;

import org.springframework.stereotype.Service;

import arboard.util.dao.UtilDAO;

@Service("utilservice")
public class UtilServiceImpl implements UtilService {

	@Resource(name="utilDAO")
	private UtilDAO utilDAO;

	@Override
	public List<Map<String, Object>> getFriendList(String id) {
		
		Map<String,Object> param = new HashMap<String,Object>();
		param.put("id", id);
		
		return utilDAO.selectFriendList(param);
		 
	}
	
	
	
}
