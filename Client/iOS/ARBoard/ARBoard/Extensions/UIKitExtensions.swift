//
//  UIKitExtensions.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 6..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import Foundation
import UIKit


// App Theme 색상 지정.
extension UIColor {
    static func easyInit(red:CGFloat, green:CGFloat, blue: CGFloat, alpha: CGFloat = 1.0) -> UIColor{
        return UIColor.init(red: red/255, green: green/255, blue: blue/255, alpha: alpha)
    }
    static let barTintColor:UIColor = easyInit(red: 21, green: 21, blue: 21)
    static let redTintColor:UIColor = easyInit(red:255, green: 0, blue: 68)
    static let greenTintColor:UIColor = easyInit(red:0, green: 216, blue: 72)
    static let lineColor:UIColor = easyInit(red: 255, green: 255, blue: 255, alpha: 0.1)
    static let withAlphaWhiteColor:UIColor = UIColor.white.withAlphaComponent(0.4)
}

// AlertViewController 쉽게 Show & UIAlertController 계속 생성하지 않고 alertController 하나만 계속 재사용
extension UIAlertController {
    static func showAlertViewController(_ viewController:UIViewController, title: String?, message: String?, alertActions: [UIAlertAction], preferredStyle:UIAlertControllerStyle = UIAlertControllerStyle.alert){
        let alertController:UIAlertController = UIAlertController.init(title: title, message: message, preferredStyle: preferredStyle)
        for alertAction in alertActions{
            alertController.addAction(alertAction)
        }
        viewController.present(alertController, animated: true, completion: nil)
    }
    static func errorShowAlerViewController(_ viewController: UIViewController, statusCode:Int, error:NetworkError){
        switch statusCode {
        case 200:
            print(statusCode)
        default:
            
            self.showAlertViewController(viewController, title: error.title, message: error.message, alertActions: [UIAlertAction.signInAlertAction, UIAlertAction.cancel])
        }
    
    }
}

extension UIBarButtonItem {
    static let empty:UIBarButtonItem = UIBarButtonItem.init(title: "", style: .plain, target: nil, action: nil)
}

extension UIVisualEffectView {
    static let dark = UIVisualEffectView.init(effect: UIBlurEffect.init(style: UIBlurEffectStyle.dark))
}

extension UIAlertAction {
    static let cancel:UIAlertAction = UIAlertAction.init(title: "취소", style: .cancel, handler: nil)
    static let done:UIAlertAction = UIAlertAction.init(title: "확인", style: .cancel, handler: nil)
    
    static let signInAlertAction: UIAlertAction = UIAlertAction.init(title: "로그인", style: .default, handler: { (action) in
        NotificationCenter.default.post(name: NotificationName.shouldShowSignInViewController, object: nil)
    })
}

extension UIApplication {
    func openSettings() {
        if let settingsUrl = URL(string: UIApplicationOpenSettingsURLString) {
            if #available(iOS 10.0, *) {
                UIApplication.shared.open(settingsUrl, options: [:], completionHandler: nil)
            } else {
                UIApplication.shared.openURL(settingsUrl)
            }
        }
    }
}

extension UINavigationController {
    open override var supportedInterfaceOrientations: UIInterfaceOrientationMask {
        return visibleViewController?.supportedInterfaceOrientations ?? super.supportedInterfaceOrientations
    }
    
    open override var shouldAutorotate: Bool {
        return visibleViewController?.shouldAutorotate ?? super.shouldAutorotate
    }
}

extension UITabBarController {
    open override var supportedInterfaceOrientations: UIInterfaceOrientationMask {
        if let selected = selectedViewController {
            return selected.supportedInterfaceOrientations
        }
        return super.supportedInterfaceOrientations
    }
    
    open override var shouldAutorotate: Bool {
        if let selected = selectedViewController {
            return selected.shouldAutorotate
        }
        return super.shouldAutorotate
    }
}
