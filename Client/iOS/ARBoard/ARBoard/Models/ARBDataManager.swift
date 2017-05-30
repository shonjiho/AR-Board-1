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
import SVProgressHUD
import CircularSpinner
import FBSDKLoginKit

class ARBDataManager : NSObject {
//    static let shared = ARBDataManager()
    var currentUser: User?
    var isCurrentUser: Bool {
        get {
            return (self.currentUser != nil) ? true : false
        }
    }
    var friends:Friends?
    
    private struct StaticInstance {
        static var instance: ARBDataManager?
    }
    static func getInstance() -> ARBDataManager {
        if !(StaticInstance.instance != nil) {
            StaticInstance.instance = ARBDataManager()
        }
        return StaticInstance.instance!
    }
    
    // MARK: - Show Activity
    func showActivityIndicator(_ isUserInteractionEnabled:Bool=false){
        DispatchQueue.main.async {
            UIApplication.shared.isNetworkActivityIndicatorVisible = true
            SVProgressHUD.setBackgroundColor(UIColor.clear)
            SVProgressHUD.setDefaultAnimationType(.native)
            SVProgressHUD.setForegroundColor(UIColor.white)
            if isUserInteractionEnabled == false {
                SVProgressHUD.setDefaultMaskType(.clear)
            }
            SVProgressHUD.show()
        }
    }
    
    // MARK: - Show Hide
    func hideActivityIndicator(){
        DispatchQueue.main.async {
            UIApplication.shared.isNetworkActivityIndicatorVisible = false
            SVProgressHUD.dismiss()
        }
    }
    
    // MARK: - Show Success Indicator
    func showSuccessIndicator(_ status: String? = nil){
        DispatchQueue.main.async {
            SVProgressHUD.setMaximumDismissTimeInterval(TimeInterval.init(0.5))
            SVProgressHUD.setForegroundColor(UIColor.greenTintColor)
            SVProgressHUD.setSuccessImage(UIImage.init(named: "Done"))
            SVProgressHUD.setBackgroundColor(UIColor.black.withAlphaComponent(0.3))
            SVProgressHUD.showSuccess(withStatus: status)
        }
    }
    
    // MARK: - Show Error Indicator
    func showFailIndicator(_ status: String? = nil){
        DispatchQueue.main.async {
            SVProgressHUD.setMaximumDismissTimeInterval(TimeInterval.init(0.5))
            SVProgressHUD.setForegroundColor(UIColor.redTintColor)
            SVProgressHUD.setErrorImage(UIImage.init(named: "Cancel"))
            SVProgressHUD.setBackgroundColor(UIColor.black.withAlphaComponent(0.3))
            SVProgressHUD.showError(withStatus: status)
        }
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
            dump("--------UESR---------")
            dump(dataResponse.result.value)
            dump("---------------------")
            self.currentUser = dataResponse.result.value
            // KeyChain에 OAuth Token 없을 경우 저장
            if KeychainService.loadOauthToken() == nil {
                KeychainService.saveOauthToken(token: token)
            }
            NotificationCenter.default.post(name: NotificationName.userStateChange, object: nil)
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
    func createRequest(_ viewController: UIViewController, requestType: RequestType, identifier:String?, completion: ((Any?) -> Void)?){
        
        guard let identifier = identifier else {
            return
        }
        
        var requestUrl:String = ""
        switch requestType {
        case .friend:
//            "http://125.130.223.88/arboard/friend/\(identifier)/request"
            requestUrl = URL.base.appendingPathComponent(path: requestType.description)
                                 .appendingPathComponent(path: identifier)
                                 .appendingPathComponent(path: URL.request)
        case .user:
//            "http://125.130.223.88/arboard/friend/user?email=\(identifier)"
            requestUrl = URL.base.appendingPathComponent(path: URL.friend)
                                 .appendingPathComponent(path: requestType.description)
                                 .appendingPathQuery(key: URL.User.email, value: identifier)
        default:
            return
        }
        dump("Request URL : \(requestUrl)")
        
        let requestCloser = Alamofire.request(requestUrl)
        requestCloser.response { (dataResponse) in
            guard dataResponse.response?.statusCode == 200 else {
                dump("Error Status Code : \(dataResponse.response?.statusCode)")
                return
            }
            dump(dataResponse.response?.statusCode)
        }
    }
    
    func fetchRequest(_ viewController: UIViewController, requestType: RequestType, isShowActivityIndicator: Bool = false,identifier:String?=nil, completion: @escaping ((Any?) -> Void)){
        if isShowActivityIndicator {
            self.showActivityIndicator()
        }
        var requestUrl:String = ""
        switch requestType {
        case .friend:
//            requestUrl = "http://125.130.223.88/arboard/friend/list"
            requestUrl = URL.base.appendingPathComponent(path: requestType.description)
                                 .appendingPathComponent(path: URL.list)
        case .user:
            guard let identifier = identifier else {
                return
            }
//            requestUrl = "http://125.130.223.88/arboard/friend/user?email=\(identifier)"
            requestUrl = URL.base.appendingPathComponent(path: URL.friend)
                                 .appendingPathComponent(path: requestType.description)
                                 .appendingPathQuery(key: URL.User.email, value: identifier)
        default:
            return
        }
        
        let requestCloser = Alamofire.request(requestUrl)
        
        switch requestType {
        case .friend:
            requestCloser.responseObject { (dataResponse: DataResponse<Friends>) in
                if isShowActivityIndicator {
                    self.hideActivityIndicator()
                }
                guard dataResponse.response?.statusCode == 200 else {
                    // Example
                    let error = NetworkError(title: "로그인", message: "로그인 하세요")
                    UIAlertController.errorShowAlerViewController(viewController, statusCode: (dataResponse.response?.statusCode)!, error: error)
                    
                    completion(false)
                    return
                }
                self.friends = dataResponse.result.value
                completion(true)
            }
        case .user:
            requestCloser.responseObject { (dataResponse: DataResponse<User>) in
                
                if isShowActivityIndicator {
                    self.hideActivityIndicator()
                }
                completion(dataResponse.result.value)
            }
        default:
            return
        }
        
    }
    
    func updateRequest(_ viewController: UIViewController, requestType: RequestType, isShowActivityIndicator: Bool = false, key:String?=nil, value:Any?=nil, completion: ((Any?) -> Void)?){
        if isShowActivityIndicator {
            self.showActivityIndicator()
        }
        var requestUrl:String = ""
        switch requestType {
        case .friend:
            requestUrl = URL.base.appendingPathComponent(path: requestType.description)
                .appendingPathComponent(path: URL.list)
        case .user:
            guard let value = value as? String else {
                return
            }
            //http://125.130.223.88/arboard/user?userName=Yutae
            
            requestUrl = URL.base.appendingPathComponent(path: requestType.description)
                                 .appendingPathQuery(key: URL.User.userName, value: value)
        default:
            return
        }
        dump("Request URL : \(requestUrl)")
        let requestCloser = Alamofire.request(requestUrl, method: .put)
        
        switch requestType {
        case .user:
            requestCloser.responseObject { (dataResponse: DataResponse<User>) in
                if isShowActivityIndicator {
                    self.hideActivityIndicator()
                }
                guard dataResponse.response?.statusCode == 200 else {
                    self.showFailIndicator()
                    dump("Error Status Code : \(dataResponse.response?.statusCode)")
                    return
                }
                self.showSuccessIndicator()
                
                self.currentUser = dataResponse.result.value
                NotificationCenter.default.post(name: NotificationName.userStateChange, object: nil)
            }
        default:
            return
        }
    }
    
    func deleteRequest(_ viewController: UIViewController, requestType: RequestType, identifier: String? = nil, completion: ((Any?) -> Void)?){
        guard self.isCurrentUser else {
            
            return
        }
        self.showActivityIndicator()
        var requestUrl:String = ""
        switch requestType {
        case .friend:
            //            requestUrl = "http://125.130.223.88/arboard/friend/list"
            requestUrl = URL.base.appendingPathComponent(path: requestType.description)
                .appendingPathComponent(path: URL.list)
        case .user, .logout:
            requestUrl = URL.base.appendingPathComponent(path: requestType.description)
        default:
            return
        }
        
//        let requestCloser = Alamofire.request(requestUrl, method: .delete)
        
        Alamofire.request(requestUrl, method: .delete).response(completionHandler: { (dataResponse) in
            self.hideActivityIndicator()
            guard dataResponse.response?.statusCode == 200 else {
                self.showFailIndicator()
                return
            }
            self.showSuccessIndicator()
            switch requestType {
            case .user:
                self.currentUser = nil
                self.friends = nil
                KeychainService.authenticatedUserReset()
                FBSDKLoginManager().logOut()
                NotificationCenter.default.post(name: NotificationName.userStateChange, object: nil)
            case .logout:
                self.currentUser = nil
                self.friends = nil
                FBSDKLoginManager().logOut()
                NotificationCenter.default.post(name: NotificationName.userStateChange, object: nil)
            default:
                return
            }
        })
    }
   
}
