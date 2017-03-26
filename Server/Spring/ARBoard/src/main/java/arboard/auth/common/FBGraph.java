package arboard.auth.common;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.util.HashMap;
import java.util.Map;

import org.json.JSONObject;

public class FBGraph {

	private final static String appId = "194444031052556";
	private final static String appSecretCode = "7594f921230e8523c3475182a5bb1311";

	// HTTP request to Facebook Graph API for getting AppAccessToken
	public static String getAppAccessToken() {
		String graph = null;
		String urltext = "https://graph.facebook.com/oauth/access_token?client_id=" + appId + "&client_secret="
				+ appSecretCode + "&grant_type=client_credentials";
		try {
			URL url = new URL(urltext);
			URLConnection urlConnection = url.openConnection();
			BufferedReader inputStream = new BufferedReader(
					new InputStreamReader(urlConnection.getInputStream(), "UTF-8"));
			String inputLine;
			StringBuffer buffer = new StringBuffer();
			while ((inputLine = inputStream.readLine()) != null) {
				buffer.append(inputLine + "\n");
			}
			inputStream.close();
			graph = buffer.toString();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return graph;
	}

	// HTTP request to Facebook Graph API for checking AccessToken(User)
	public static String req_debugAccessCode(String accessToken) {
		String graph = null;
		try {
			String urltext = "https://graph.facebook.com/debug_token?input_token=" + accessToken + "&"
					+ getAppAccessToken();

			URL url = new URL(urltext);

			// Connection debug_token
			HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
			urlConnection.setRequestMethod("GET");
			urlConnection.connect();

			BufferedReader inputStream = new BufferedReader(new InputStreamReader(urlConnection.getInputStream()));

			String inputLine;
			StringBuffer buffer = new StringBuffer();
			while ((inputLine = inputStream.readLine()) != null) {
				buffer.append(inputLine + "\n");
			}
			inputStream.close();
			graph = buffer.toString();

		} catch (Exception e) {
			e.printStackTrace();
			throw new RuntimeException("ERROR in getting FB graph debugAccessToken" + e);
		}
		return graph;
	}

	public static String req_getFBGraphProfile(String accessToken) {
		String graph = null;
		try {
			String urltext = "https://graph.facebook.com/me?fields=name,email,id&access_token=" + accessToken;
			URL url = new URL(urltext);
			URLConnection urlConnection = url.openConnection();
			BufferedReader inputStream = new BufferedReader(
					new InputStreamReader(urlConnection.getInputStream(), "UTF-8"));
			String inputLine;
			StringBuffer buffer = new StringBuffer();
			while ((inputLine = inputStream.readLine()) != null) {
				buffer.append(inputLine + "\n");
			}
			inputStream.close();
			graph = buffer.toString();
		} catch (Exception e) {
			e.printStackTrace();
			throw new RuntimeException("ERROR in getting FB graph data" + e);
		}
		return graph;
	}

	public static Map<String, Object> isValified_AccessToken(String accessToken) {
		Map<String, Object> resultMap = new HashMap<String, Object>();
		String result = FBGraph.req_debugAccessCode(accessToken);
		JSONObject json = new JSONObject(result);

		if (json.has("data")) {
			JSONObject data = json.getJSONObject("data");
			resultMap.put("is_valid", data.get("is_valid"));
			//resultMap.put("expires_at", data.get("expires_at"));
			//resultMap.put("user_id", data.get("user_id"));
			//resultMap.put("application", data.get("application"));
			return resultMap;
		}
		return resultMap;
	}

	public static Map<String, Object> getFBGraphProfile(String accessToken) {
		String result = req_getFBGraphProfile(accessToken);
		Map<String, Object> fbProfile = new HashMap<String, Object>();
		try {
			JSONObject json = new JSONObject(result);

			fbProfile.put("userId", json.get("id"));

			fbProfile.put("userName", json.get("name"));

			fbProfile.put("userEmail", json.get("email"));

		} catch (Exception e) {
			e.printStackTrace();
			throw new RuntimeException("ERROR in parsing FB graph data." + e);
		}

		System.out.println(fbProfile);
		return fbProfile;

	}
	 
}
