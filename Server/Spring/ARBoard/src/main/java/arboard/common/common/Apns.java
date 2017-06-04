package arboard.common.common;

import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Component;

import javapns.Push;
import javapns.notification.PushNotificationPayload;
import javapns.notification.PushedNotifications;

@Component("apns")
public class Apns {
	// "#{props['hello.number']}"
	@Value("#{props['apns.ssl_certificate']}")
	public String APNS_SSL_CERTIFICATE;

	@Value("#{props['apns.ssl_certificate_pwd']}")
	public String APNS_SSL_CERTIFICATE_PWD;

	public void push(String devToken, String message) {

		try {
			PushNotificationPayload payload = PushNotificationPayload.complex();
			payload.addAlert(message);
			payload.addBadge(1);
			payload.addSound("default");

			System.out.println(payload);

			// payload, 인증서파일.p12, 인증서비빌번호, true/false, 디바이스 토큰값
			// true : 실서버 gateway.push.apple.com
			// false : 개발서버 gateway.sandbox.push.apple.com
			PushedNotifications notice = Push.payload(payload, APNS_SSL_CERTIFICATE, APNS_SSL_CERTIFICATE_PWD, true,
					devToken);

			System.out.println("push 실패건수 :: " + notice.getFailedNotifications().size());
			System.out.println("push 성공건수 :: " + notice.getSuccessfulNotifications().size());

		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
