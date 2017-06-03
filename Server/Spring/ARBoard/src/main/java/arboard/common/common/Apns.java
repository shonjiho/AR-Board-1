package arboard.common.common;

import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Component;

@Component("apns")
public class Apns { 
	//"#{props['hello.number']}"
	@Value("#{props['apns.ssl_certificate']}")
	public String APNS_SSL_CERTIFICATE;
	
	@Value("#{props['apns.ssl_certificate_pwd']}")
	public String APNS_SSL_CERTIFICATE_PWD; 
	
}
