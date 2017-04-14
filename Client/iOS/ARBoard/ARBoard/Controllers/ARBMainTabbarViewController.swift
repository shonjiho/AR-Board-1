//
//  ARBMainTabbarViewController.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 14..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit

class ARBMainTabbarViewController: UITabBarController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Login Observer 등록
        NotificationCenter.default.addObserver(self, selector: #selector(showLoginViewController(notification:)), name: NotificationName.shouldShowSignInViewController, object: nil)
    }
    
    // 로그인 Segue
    func showLoginViewController(notification: NSNotification) {
        self.performSegue(withIdentifier: SegueIdentifier.signInFromAll, sender: nil)
    }
    
    // 메모리 해제시 Observer 제거
    deinit {
        NotificationCenter.default.removeObserver(self)
    }

}
