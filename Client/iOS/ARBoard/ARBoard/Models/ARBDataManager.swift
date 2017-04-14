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
 
    func authRequest(_ viewController: UIViewController? = nil, domain:OAuthDomain, token:String, completion: @escaping ((Bool) -> Void)){
        let requestUrl:String = URL.auth(domain: domain.description, token: token)
        
        Alamofire.request(requestUrl).responseObject { (dataResponse: DataResponse<User>) in
            guard dataResponse.result.isSuccess else {
                dump("Error Code \(dataResponse.response?.statusCode)")
                completion(false)
                return
            }
            self.currentUser = dataResponse.result.value
            // KeyChain에 OAuth Token 없을 경우 저장
            if KeychainService.loadOauthToken() == nil {
                KeychainService.saveOauthToken(token: token)
            }
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

    func getRequest(_ viewController: UIViewController, identifier:String?=nil, completion: @escaping ((Bool) -> Void)){
        let requestUrl:String = "http://125.130.223.88/arboard/friend/list"
        let requestCloser = Alamofire.request(requestUrl)
        
        requestCloser.responseObject { (dataResponse: DataResponse<Friends>) in
            guard dataResponse.response?.statusCode == 200 else {
                dump("Error Code \(dataResponse.response?.statusCode)")
                dump(dataResponse.response?.allHeaderFields)
                dump(dataResponse.result)
                
                // Example
                let error = NetworkError(title: "로그인", message: "로그인 하세요")
                UIAlertController.errorShowAlerViewController(viewController, statusCode: (dataResponse.response?.statusCode)!, error: error)
                
                completion(false)
                return
            }
            self.friends = dataResponse.result.value
            completion(true)
        }
    }
    
}
