//
//  NativeiOSPlugin.mm
//  Unity-iPhone
//
//  Created by Minchan on 13. 8. 27..
//
//
extern "C"
{
    void UnityPluginSetSession()
    {
        UnitySendMessage("GameManager", "SetSessionID", "");
    }

    void UnityPluginGameEnd()
    {
        
    }
}
