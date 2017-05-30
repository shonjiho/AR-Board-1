package arboard.auth.common;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.Map;

import org.json.JSONObject;

import arboard.auth.exception.AccessTokenInvalidException;
import arboard.auth.exception.UnKnownException;

public class FBGraph {

	private final static String appId = "194444031052556";
	private final static String appSecretCode = "7594f921230e8523c3475182a5bb1311";

	
	//This method is converting from InputStream to String. (add try ... catch)
	public static String convertStreamToString(InputStream inputStream) {

		StringBuffer buffer = new StringBuffer();
		BufferedReader bufferedReader;
		try {
			bufferedReader = new BufferedReader(new InputStreamReader(inputStream, "UTF-8"));

			String inputLine;
			while ((inputLine = bufferedReader.readLine()) != null) {
				buffer.append(inputLine + "\n");
			}
			inputStream.close();
			  
		} catch (UnsupportedEncodingException e) { 
			
			e.printStackTrace();
			
		} catch (IOException e) { 
			
			e.printStackTrace();
		}
		return buffer.toString();
	}

	// HTTP Request for getting AppAccessToken.
	public static String getAppAccessToken() {
		String graph = null,AppAccessToken = null;
		String urltext = "https://graph.facebook.com/oauth/access_token?client_id=" + appId + "&client_secret="
				+ appSecretCode + "&grant_type=client_credentials";
		try {
			URL url = new URL(urltext);
			
			HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
			urlConnection.setRequestMethod("GET");
			urlConnection.connect();
			
			switch (urlConnection.getResponseCode()) {
			
			case HttpURLConnection.HTTP_OK:
				graph = convertStreamToString(urlConnection.getInputStream());
				JSONObject json = new JSONObject(graph);
				AppAccessToken =  json.get("access_token").toString();
				break;
				
			case HttpURLConnection.HTTP_BAD_REQUEST:
				System.out.println("AppAccess Request bad request"); 
			default:
				throw new UnKnownException();
			}
		}catch( UnKnownException e) {
			throw e;
		} catch (IOException e) { 
			e.printStackTrace();
			// APP register problem
			System.out.println("APPLICATION APPID and APPSECRETCODE hava PROBLEMS.!!! -----JIHO---");
		} 
		return AppAccessToken;
	}

	// HTTP request to Facebook Graph API for checking AccessToken(User)
	public static String req_debugAccessCode(String accessToken) throws Exception{

		String graph = null;
		try {
			String urltext = "https://graph.facebook.com/debug_token?input_token=" + accessToken +"&access_token="+ getAppAccessToken();

			URL url = new URL(urltext);
			// Connection debug_token
			HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
			urlConnection.setRequestMethod("GET");
			urlConnection.connect();
			
			switch (urlConnection.getResponseCode()) {
			//Normal Response.
			case HttpURLConnection.HTTP_OK:
				graph = convertStreamToString(urlConnection.getInputStream()); 
				break;
				
			// Facebook Graph API response(accessToken is invalid). 
			case HttpURLConnection.HTTP_BAD_REQUEST:  
				
				graph = convertStreamToString(urlConnection.getErrorStream()); 
				
				JSONObject json = new JSONObject(graph);
				
				if(json.has("error")) 
					throw new AccessTokenInvalidException();
					//other case is UnkownException.
			default:
				//UnkownException!!
				throw new UnKnownException();
			}
		}catch (AccessTokenInvalidException e){
			throw e;
		}catch(UnKnownException e){
			throw e;
		} 
		
		return graph;
	}
	
	//HTTP request to Graph API request Profile
	public static String req_getFBGraphProfile(String accessToken)  throws Exception{
		String graph = null;
		try {
			String urltext = "https://graph.facebook.com/me?fields=name,email,id&access_token=" + accessToken;
			URL url = new URL(urltext);
			HttpURLConnection urlConnection = (HttpURLConnection)url.openConnection();
			
			switch (urlConnection.getResponseCode()) {
			//normal response.
			case HttpURLConnection.HTTP_OK:
				graph = convertStreamToString(urlConnection.getInputStream()); 
				break;
				
			//abnormal resposne.
			case HttpURLConnection.HTTP_BAD_REQUEST:  
			default:
				throw new UnKnownException();
			} 
		 
		} catch (UnKnownException e){
			throw e;
		} catch (Exception e) {
			e.printStackTrace();
			throw new RuntimeException("ERROR in getting FB graph data " + e);
		}
		return graph;
	}
	
	//AccessToken Valify.
	public static Map<String, Object> isValified_AccessToken(String accessToken) throws Exception{
		Map<String, Object> resultMap = new HashMap<String, Object>();
		String result = FBGraph.req_debugAccessCode(accessToken);
		JSONObject json = new JSONObject(result);

		if (json.has("data")) {
			JSONObject data = json.getJSONObject("data");
			resultMap.put("is_valid", data.get("is_valid"));
			// resultMap.put("expires_at", data.get("expires_at"));
			// resultMap.put("user_id", data.get("user_id"));
			// resultMap.put("application", data.get("application"));
			return resultMap;
		} 
		
		throw new UnKnownException();
		
	}

	public static Map<String, Object> getFBGraphProfile(String accessToken) throws Exception {
		//call API method 
		String result = req_getFBGraphProfile(accessToken);
		Map<String, Object> fbProfile = new HashMap<String, Object>();
		
		try {
			JSONObject json = new JSONObject(result);

			fbProfile.put("userId", json.get("id"));

			fbProfile.put("userName", json.get("name"));

			fbProfile.put("userEmail", json.get("email"));  
			
			fbProfile.put("userImage", getUserImageUrl(json.getString("id")));
			/*
			 *  id , name , email
			 * 
			 */
			
		} catch (Exception e) {
			e.printStackTrace();
			throw new RuntimeException("ERROR in parsing FB graph data. " + e);
		}
 
		return fbProfile;

	}
	
	public static String getUserImageUrl(String id){
		//http://graph.facebook.com/%3C%3E/picture
		String urlFormat = "http://graph.facebook.com/"+id+"/picture"; 
		return urlFormat;
	}

}
