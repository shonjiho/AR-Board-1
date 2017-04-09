//
//  ARBDataManager.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 3. 22..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//
import Alamofire
import Foundation
import AlamofireObjectMapper
//import SVProgressHUD
import CircularSpinner

class ARBDataManager : NSObject {
//    static let shared = ARBDataManager()
    var currentUser: User?
    var isCurrentUser: Bool {
        get {
            return (self.currentUser != nil) ? true : false
        }
    }
    var friends:Friends?
    
    struct StaticInstance {
        static var instance: ARBDataManager?
    }
    static func getInstance() -> ARBDataManager {
        if !(StaticInstance.instance != nil) {
            StaticInstance.instance = ARBDataManager()
        }
        return StaticInstance.instance!
    }
    
    func showCircularSpinner(){
        DispatchQueue.main.async {
            CircularSpinner.trackBgColor = UIColor.black
            CircularSpinner.trackPgColor = UIColor.redTintColor
            CircularSpinner.show("Matching...", animated: true, type: .indeterminate, showDismissButton: true)
        }
    }
 
    func authRequest(_ viewController: UIViewController, domain:OAuthDomain, token:String, completion: @escaping ((Bool) -> Void)){
        let requestUrl:String = URL.auth(domain: domain.description, token: token)
        dump(requestUrl)
        Alamofire.request(requestUrl).responseObject { (dataResponse: DataResponse<User>) in
            guard dataResponse.result.isSuccess else {
                dump("Error Code \(dataResponse.response?.statusCode)")
                completion(false)
                return
            }
            self.currentUser = dataResponse.result.value
            completion(true)
        }
    }
    
    func gameJoinRequest(_ viewController: UIViewController, completion: @escaping ((Bool) -> Void)){
        self.showCircularSpinner()
        DispatchQueue.main.asyncAfter(deadline: .now() + 3.0) {
            CircularSpinner.hide({
                completion(true)
            })
        }
    }
}
