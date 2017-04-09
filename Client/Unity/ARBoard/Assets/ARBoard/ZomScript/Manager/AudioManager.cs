using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

[System.Serializable]
public class EffectBgm{
	GameObject go = null;
 	AudioSource audioSource = null;
	AudioManager.E_SoundType mSoundType = AudioManager.E_SoundType.FX;

	public EffectBgm(AudioClip _audioClip, bool _loop, AudioManager.E_SoundType _soundType = AudioManager.E_SoundType.FX)
	{
		go = new GameObject ();
		audioSource = go.AddComponent<AudioSource> ();

		//setting 2d sound
		audioSource.spatialBlend = 0.0f;
		audioSource.playOnAwake = false;
		go.name = "EffectBgm_" + _audioClip.name;

		if (go != null) {
			AudioManager audioManager = GameObject.FindObjectOfType(typeof(AudioManager)) as AudioManager;

			if(audioManager != null)
			{
				go.transform.parent = audioManager.transform;
			}
		}

		mSoundType = _soundType;
		audioSource.loop = _loop;
		audioSource.clip = _audioClip;
	}

	public AudioManager.E_SoundType GetSoundType()
	{
		return mSoundType;
	}

	public void SetVolume(float value)
	{
		if (audioSource == null)
			return;

		audioSource.volume = value;
	}

	public float GetVolume()
	{
		if (audioSource == null)
			return 0;

		return audioSource.volume;
	}

	public bool IsPlaying()
	{
		if (audioSource == null)
			return false;

		return audioSource.isPlaying;
	}

	public void Destroy()
	{
		GameObject.Destroy (go);
	}

	public AudioClip GetAudioClip()
	{
		if (audioSource == null)
			return null;

		return audioSource.clip;
	}

	public bool Play()
	{
		try{
			audioSource.Play ();
		}
		catch (UnityException e)
		{
			Debug.LogError(e.ToString());
			return false;
		}
		return true;
	}

	public bool Stop()
	{
		try{
			if(audioSource != null)
			{
				audioSource.Stop ();
			}

		}
		catch (UnityException e)
		{
			Debug.LogError(e.ToString());
			return false;
		}
		return true;
	}
}

public class AudioManager : MonoBehaviour {

  	[SerializeField] AudioSource audioSourceBgm;
	[SerializeField] AudioSource audioSourceEffect;

	[SerializeField] AudioClip[] fxAudioArray;

	[SerializeField] List<EffectBgm> effectBgmList = new List<EffectBgm>();

	List<string> FadeOutEffectClipNameList = new List<string>();

	public enum E_FxSound{
		NONE             = -1,
		TAP              = 0

	}

	public enum E_SoundType{
		BGM,
		FX
	}


	static AudioManager instance_;
	static void Load(GameObject go)
	{
		instance_ = go.GetComponent<AudioManager> ();
	}

	public static AudioManager Instance
	{
		get{
			return instance_;
		}
	}

	public bool IsPlayingEffectBgm(E_FxSound eFxSound)
	{
		if (effectBgmList == null)
			return false;

		AudioClip audioClip = fxAudioArray [(int)eFxSound];

		EffectBgm effectBgm = effectBgmList.FirstOrDefault(t=>(audioClip.Equals(t.GetAudioClip())));

		if (effectBgm == null)
			return false;

		return effectBgm.IsPlaying();
	}

	public void ResetEffectBgmVolume(float fxVolume, float bgmVolume)
	{
		if (effectBgmList == null)
			return;

		for (int i = 0; i < effectBgmList.Count; i++) {
			if(effectBgmList[i].GetSoundType() == E_SoundType.BGM)
			{
				effectBgmList[i].SetVolume(bgmVolume);
			}
			else if(effectBgmList[i].GetSoundType() == E_SoundType.FX)
			{
				effectBgmList[i].SetVolume(fxVolume);
			}

		}
	}

	public bool AddEffectBgmAndPlay(E_FxSound eFxSound, E_SoundType eSoundType = E_SoundType.FX)
	{
		try{
			AudioClip audioClip = fxAudioArray[(int)eFxSound];
			
			EffectBgm effectBgm = null;

			if(effectBgmList != null)
			{
				effectBgm = effectBgmList.FirstOrDefault(t=>audioClip.Equals(t.GetAudioClip()));
			}

			if(effectBgm == null)
			{
				effectBgm = new EffectBgm (audioClip,true,eSoundType);
			}
			else {
				return false;
			}

			string fadeOutEventClipName = FadeOutEffectClipNameList.FirstOrDefault(t=>t.Equals(audioClip.name));

			if(fadeOutEventClipName != null)
			{
				FadeOutEffectClipNameList.Remove(fadeOutEventClipName);
			}

			effectBgmList.Add (effectBgm);

			if(eSoundType == E_SoundType.FX)
			{
				effectBgm.SetVolume(audioSourceEffect.volume);
			}
			else if(eSoundType == E_SoundType.BGM)
			{
				effectBgm.SetVolume(audioSourceBgm.volume);
			}

			effectBgm.Play ();

			Debug.Log("Play EffectSound : " + eFxSound.ToString());
		}
		catch (UnityException e)
		{
			Debug.LogError(e.ToString());
			return false;
		}

		return true;
	}

	public bool StopAllEffectBgm()
	{
		if (effectBgmList == null)
			return false;
		
		for (int i = 0; i < effectBgmList.Count; i++) {
			if(effectBgmList[i] != null)
			{
				effectBgmList[i].Stop();
			}
		}
		
		return true;
	}

	public bool PlayAllEffectBgm()
	{
		if (effectBgmList == null)
			return false;
		
		for (int i = 0; i < effectBgmList.Count; i++) {
			if(effectBgmList[i] != null)
			{
				if(effectBgmList[i].IsPlaying() == false)
					effectBgmList[i].Play();
			}
		}
		
		return true;
	}


	public bool RemoveAllEffectBgm()
	{
		if (effectBgmList == null)
			return false;

		for (int i = 0; i < effectBgmList.Count; i++) {
			if(effectBgmList[i] != null)
			{
				effectBgmList[i].Stop();
				effectBgmList[i].Destroy();
			}
		}

		effectBgmList.Clear ();

		return true;
	}

	Dictionary<string, IEnumerator> dicfadeOutEffect = new Dictionary<string, IEnumerator> ();
	public bool FadeOutEffectBgm(E_FxSound eFxSound, float delay)
	{
		EffectBgm effectBgm = GetEffectBgm (eFxSound);

		if (effectBgm == null)
			return false;

		if (FadeOutEffectClipNameList != null) {
			string fadeOutClipPlayingName = 
				FadeOutEffectClipNameList.FirstOrDefault(t=>t.Equals(effectBgm.GetAudioClip().name));

			if(!string.IsNullOrEmpty(fadeOutClipPlayingName))
			{//이미 페이드 아웃중인 사운드가 있으므로 리턴처리
				return false;
			}
		}

		if (IsPlayingEffectBgm (eFxSound) == false)
			return false;

		IEnumerator iE_FadeOutEffectCoroutine = FadeOutEffectBgmCoroutine (effectBgm, delay);

		if (dicfadeOutEffect == null) {
			dicfadeOutEffect = new Dictionary<string, IEnumerator>();
		}

		if (dicfadeOutEffect.ContainsKey (effectBgm.GetAudioClip ().name) == false) {
			dicfadeOutEffect.Add (effectBgm.GetAudioClip ().name, iE_FadeOutEffectCoroutine);
		}

		StartCoroutine (iE_FadeOutEffectCoroutine);
		return true;
	}

	public void StopMonsterAppearSoundFadeOut(AudioManager.E_FxSound efxSound)
	{
		EffectBgm effectBgm = GetEffectBgm (efxSound);

		if (effectBgm == null)
			return;

		string fadeOutClipPlayingName = 
			FadeOutEffectClipNameList.FirstOrDefault(t=>t.Equals(effectBgm.GetAudioClip().name));

		if(string.IsNullOrEmpty(fadeOutClipPlayingName))
		{//이미 페이드 아웃중인 사운드가 있으므로 리턴처리
			return;
		}

		if (dicfadeOutEffect == null) {
			dicfadeOutEffect = new Dictionary<string, IEnumerator>();
		}

		if (dicfadeOutEffect.ContainsKey (effectBgm.GetAudioClip ().name) == false)
			return;

		IEnumerator fadeCoroutine = dicfadeOutEffect[effectBgm.GetAudioClip().name];

		if (fadeCoroutine == null)
			return;

		StopCoroutine (fadeCoroutine);

		dicfadeOutEffect.Remove (effectBgm.GetAudioClip ().name);
		RemoveEffectBgm (effectBgm);
		FadeOutEffectClipNameList.Remove (effectBgm.GetAudioClip().name);
		
	}

	IEnumerator FadeOutEffectBgmCoroutine(EffectBgm effectBgm, float delaySecond)
	{
		//ex delay 2
		float bgmVolume = effectBgm.GetVolume ();
		float fadeOutValue = 10.0f;
		float delayValue = (delaySecond * fadeOutValue);
		float reduceVolumeValue = bgmVolume / delayValue;
		float waitFadeOutValue = 1 / fadeOutValue;

		bool isExit = false;
		float waitTime = 0;
		string effctClipName = effectBgm.GetAudioClip ().name;
		string findEffectClipName = null;
		FadeOutEffectClipNameList.Add (effctClipName);

		while (!isExit) {
			yield return new WaitForSeconds(waitFadeOutValue);
			findEffectClipName = FadeOutEffectClipNameList.FirstOrDefault(t=>t.Equals(effctClipName));

			if(findEffectClipName != null)
			{
				waitTime += waitFadeOutValue;
				
				bgmVolume -= reduceVolumeValue;
				
				if(effectBgm != null && bgmVolume > 0)
				{
					effectBgm.SetVolume(bgmVolume);
				}
				
				if(waitTime >= delaySecond)
					isExit = true;
			}
			else 
			{
				isExit = true;
			}


		}
		if (findEffectClipName != null) {
			RemoveEffectBgm (effectBgm);
		}

		FadeOutEffectClipNameList.Remove (effctClipName);
		yield return 0;
	}

	EffectBgm GetEffectBgm(E_FxSound eFxSound)
	{
		if (effectBgmList == null)
			return null;

		AudioClip audioClip = fxAudioArray[(int)eFxSound];

		return effectBgmList.FirstOrDefault(t=>(audioClip.Equals(t.GetAudioClip())));
	}

	void RemoveEffectBgm(EffectBgm effectBgm)
	{
		effectBgmList.Remove (effectBgm);
		effectBgm.Stop();
		effectBgm.Destroy();
		effectBgm = null;
	}

	public bool RemoveEffectBgmAndStop(E_FxSound eFxSound)
	{
		try{
			EffectBgm effectBgm = GetEffectBgm(eFxSound);

			if(effectBgm == null)
				return false;

			RemoveEffectBgm(effectBgm);

//			effectBgmList.Remove (effectBgm);
//			effectBgm.Stop();
//			effectBgm.Destroy();
//			effectBgm = null;
		
			Debug.Log("End EffectSound : " + eFxSound.ToString());
		}
		catch (UnityException e)
		{
			Debug.LogError(e.ToString());
			return false;
		}
		
		return true;
	}

	public void BgmMuteOn(bool on)
	{
		if (ApplicationManager.forceBgmMute == true)
			on = true;

		if (audioSourceBgm != null)
			audioSourceBgm.mute = on;
	}

	public void BgmVolume(float value)
	{
		if (audioSourceBgm != null)
			audioSourceBgm.volume = value;
	}

	public void FxVolume(float value)
	{
		if (audioSourceEffect != null)
			audioSourceEffect.volume = value;
	}

	public void FxMuteOn(bool on)
	{
		if (ApplicationManager.forceFxMute == true)
			on = true;

		if (audioSourceEffect != null)
			audioSourceEffect.mute = on;
	}


	public void Init()
	{
		AudioManager.Load (gameObject);

		audioSourceEffect.gameObject.SetActive (true);
		audioSourceBgm.gameObject.SetActive (true);
		audioSourceBgm.clip = null;
		audioSourceEffect.clip = null;

		StopBGM ();
		StopEffect ();
	}

	public AudioClip GetClip(E_FxSound eFxSound)
	{
		AudioClip audioClip = fxAudioArray[(int)eFxSound];
		return audioClip;
	}

	public void StopBGM()
	{
		if (audioSourceBgm == null) {
			Debug.LogError("Not Found Bgm");
			return;
		}

		audioSourceBgm.Stop ();
	}
	
	public void RePlayBGM()
	{
		if (audioSourceBgm == null) {
			Debug.LogError("Not Found Bgm");
			return;
		}
		
		audioSourceBgm.Play ();
	}

	public bool IsPlayBGM()
	{
		if (audioSourceBgm == null) {
			return false;
		}
		
		return audioSourceBgm.isPlaying;
	}

	public bool Play2dBGM(string bgmFileName, ulong delay = 0)
	{
		if (audioSourceBgm == null) {
			Debug.LogError("Not Found Bgm");
			return false;
		}

		if (string.IsNullOrEmpty(bgmFileName)) {
			Debug.LogError("Empty fileName");
			return false;
		}

		string[] splitName = bgmFileName.Split ('.');
		bgmFileName = splitName [0];

		string path = "Coma/Sounds/Bgm/" + bgmFileName;
		AudioClip audioClip = Resources.Load<AudioClip>(path);

		if (audioClip == null) {

			Debug.LogError("Not Found AudioClip filePath:" + path);
			return false;
		}
		Debug.Log ("SoundBGM Play Name :" + bgmFileName);

		Play2dBGM (audioClip, delay);

		return true;
	}

	public void Play2dBGM(AudioClip audioClip, ulong delay = 0)
	{
		if(audioSourceBgm.clip != null)
		{
			if(audioSourceBgm.clip.name.Equals(audioClip.name) && audioSourceBgm.isPlaying == true)
				return;
		}

		audioSourceBgm.clip = audioClip;
		audioSourceBgm.Play (delay);
		audioSourceBgm.loop = true;
	}

	public string Get2dBGM_Name()
	{
		if (audioSourceBgm.clip == null)
			return string.Empty;
	
		if(audioSourceBgm.isPlaying == false)
			return string.Empty;

		return audioSourceBgm.clip.name;
	}

	public void StopEffect()
	{
		if (audioSourceEffect == null) {
			Debug.LogError("Not Found SoundEffect");
			return;
		}
		
		audioSourceEffect.Stop ();
	}

	public bool Play2dEffect(E_FxSound fxSound)
	{
		try{
			AudioClip audioClip = fxAudioArray[(int)fxSound];

			return Play2dEffect(audioClip);
		}
		catch(UnityException e)
		{
			Debug.LogError(e.ToString());
		}

		return false;
	}

	public bool Play2dEffect(string effectFileName)
	{
		if (string.IsNullOrEmpty(effectFileName)) {
			Debug.LogError("Empty fileName");
			return false;
		}

		string[] splitName = effectFileName.Split ('.');
		effectFileName = splitName [0];

		string path = "Coma/Sounds/Fx/" + effectFileName;
		AudioClip audioClip = Resources.Load<AudioClip>(path);

		if (audioClip == null) 
		{
			Debug.LogError("Not Found filePath: " + path);
			return false;
		}

		return Play2dEffect(audioClip);
	}

	public bool Play2dEffect(AudioClip audioClip)
	{
		if (audioSourceEffect == null) {
			Debug.LogError("Not Found SoundEffect");
			return false;
		}

		if (audioClip == null) 
		{
			Debug.LogError("Not Found AudioClip " + audioClip.name);
			return false;
		}

		Debug.Log ("SoundEffect Play Name :" + audioClip.name);
		//audioSourceEffect.clip = audioClip;
		audioSourceEffect.PlayOneShot (audioClip);

		return true;
	}
}
