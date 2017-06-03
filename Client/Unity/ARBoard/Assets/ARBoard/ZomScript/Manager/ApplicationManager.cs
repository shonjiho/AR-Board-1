using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ApplicationManager : MonoBehaviour {

	[SerializeField] ScriptManager scriptManager;

	static public bool forceBgmMute = false;
	static public bool forceFxMute = false;
	public bool bgmMute = false;
	public bool fxMute = false;

	void Start () {

		DontDestroyOnLoad(gameObject);

		// if (AudioManager.Instance != null) {
		// 	AudioManager.Instance.BgmMuteOn(bgmMute);
		// 	AudioManager.Instance.BgmVolume(DataManager.Instance.GetMusicVolumeValue());
		// 	AudioManager.Instance.FxMuteOn(fxMute);
		// 	AudioManager.Instance.FxVolume(DataManager.Instance.GetFxVolumeValue());
		// }

		if (scriptManager != null) {
			scriptManager.Init();
		}
	}
}
