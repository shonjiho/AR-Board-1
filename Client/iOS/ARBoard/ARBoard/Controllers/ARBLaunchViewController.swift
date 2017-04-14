//
//  ARBLaunchViewController.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 14..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit
import FBSDKLoginKit

class ARBLaunchViewController: UIViewController {
    let dataManager:ARBDataManager = ARBDataManager.getInstance()
    let userDefaults:UserDefaults = UserDefaults.standard
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        self.autoUserSignIn()

        /*
        let nonFirst:Bool = userDefaults.bool(forKey: Constants.UserDefaultsKey.nonFirst)
        if nonFirst {
            self.autoUserLogIn()
        } else {
            self.performSegue(withIdentifier: Constants.SegueIdentifier.previewFromAll, sender: nil)
        }
         */
    }
    fileprivate func autoUserSignIn(){
        // facebook Login 되어있을때
        if let accessToken = FBSDKAccessToken.current() {
            guard let accessTokenString = accessToken.tokenString else {
                self.performSegue(withIdentifier: SegueIdentifier.mainFromLaunch, sender: nil)
                return
            }
            dataManager.authRequest(self, domain: .facebook, token: accessTokenString, completion: { (isSuccess:Bool) in
                self.performSegue(withIdentifier: SegueIdentifier.mainFromLaunch, sender: nil)
            })
        }
        else {
            guard let oauthToken = KeychainService.loadOauthToken() else {
                dump("No oauthToken")
                self.performSegue(withIdentifier: SegueIdentifier.mainFromLaunch, sender: nil)
                return
            }
            dump(oauthToken)
            dataManager.authRequest(domain: .facebook, token: oauthToken, completion: { (isSuccess:Bool) in
                self.performSegue(withIdentifier: SegueIdentifier.mainFromLaunch, sender: nil)
            })
        }
    }


}
