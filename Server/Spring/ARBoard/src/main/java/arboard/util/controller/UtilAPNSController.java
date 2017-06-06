package arboard.util.controller;

import java.util.HashMap;
import java.util.Map;

import javax.annotation.Resource;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.apache.log4j.Logger;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.ResponseStatus;

import arboard.common.common.Apns;
import arboard.util.service.UtilService;
import javapns.Push;
import javapns.notification.PushNotificationPayload;
import javapns.notification.PushedNotifications;

@Controller
public class UtilAPNSController {

	Logger log = Logger.getLogger(this.getClass()); 
	
	@Resource(name = "utilservice")
	private UtilService utilService;

	@Resource(name="apns")
	private Apns apns;
	
	
	@RequestMapping(value = "/test/push", method = RequestMethod.GET)
	@ResponseStatus(HttpStatus.OK) 
	public @ResponseBody Object pushMessage( HttpSession session) {
		Map<String,Object> result = new HashMap<String,Object>();
		result.put("APNS_SSL_CERTIFICATE", apns.APNS_SSL_CERTIFICATE);
		result.put("APNS_SSL_CERTIFICATE_PWD", apns.APNS_SSL_CERTIFICATE_PWD);
		//logic
		
		return result;
	}
	
	public void push(String devToken,String message) { 
		
		try {
			PushNotificationPayload payload = PushNotificationPayload.complex();
			payload.addAlert(message);
			payload.addBadge(1);
			payload.addSound("default");

			System.out.println(payload);

			// payload, 인증서파일.p12, 인증서비빌번호, true/false, 디바이스 토큰값
			// true : 실서버 gateway.push.apple.com
			// false : 개발서버 gateway.sandbox.push.apple.com
			PushedNotifications notice = Push.payload(payload, apns.APNS_SSL_CERTIFICATE, apns.APNS_SSL_CERTIFICATE_PWD, false,
					devToken);

			System.out.println("push 실패건수 :: " + notice.getFailedNotifications().size());
			System.out.println("push 성공건수 :: " + notice.getSuccessfulNotifications().size());

		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
