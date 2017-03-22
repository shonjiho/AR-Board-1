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

import Foundation
class ARBDataManager : NSObject {
    static let shared = ARBDataManager()
    var currentUser: User?
    var isCurrentUser: Bool {
        get {
            return (self.currentUser != nil) ? true : false
        }
    }
    /*
    struct StaticInstance {
        static var instance: ARBDataManager?
    }
    var shared:ARBDataManager? {
        get {
            if !(StaticInstance.instance != nil) {
                StaticInstance.instance = ARBDataManager()
            }
            return StaticInstance.instance!
        }
    }
    */
    func authRequest(_ viewController: UIViewController, token:String, completion: @escaping ((Bool) -> Void)){
        // ifconfig 로 ipv4 쓰면됨. (시뮬레이션으로 돌릴땐 localhost)
        // 시뮬은 OAuth가 안될거임.
        // ex : 192.168.0.30
//        let requestUrl:String = "http://192.168.0.30:3000/auth/facebook/token?access_token=\(token)"
        let requestUrl:String = "http://dev-yutae.me/auth/facebook/token?access_token=\(token)"
        dump(requestUrl)
        Alamofire.request(requestUrl).responseJSON { (dataResponse) in
            dump(dataResponse.response?.statusCode)
            dump(dataResponse.result.value)
            if let json = dataResponse.result.value as? [String:Any] {
                dump(json)
            }
        }
        /*
        Alamofire.request(requestUrl).responseObject { (dataResponse: DataResponse<User>) in
            guard dataResponse.result.isSuccess else {
                dump("Error Code \(dataResponse.response?.statusCode)")
                completion(false)
                return
            }
            self.currentUser = dataResponse.result.value
            completion(true)
        }
         */
    }
}
