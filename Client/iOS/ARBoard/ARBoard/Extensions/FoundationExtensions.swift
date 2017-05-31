//
//  FoundationExtensions.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 6..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import Foundation

extension URL {
    static let base:String = "http://125.130.223.88/arboard"
    static let list:String = "list"
    
    struct User {
        static let userName:String = "userName"
        static let email:String = "email"
    }
    
    struct friend {
        static let value:String = "friend"
        static let request:String = "request"
        static let response:String = "response"
    }
    static func auth(domain:String, token:String)->String {
        return "\(base)/auth/\(domain)/login?access_token=\(token)"
    }
}

extension String {
    func appendingPathComponent(path: String) -> String {
        let NSString:NSString = self as NSString
        return NSString.appendingPathComponent(path)
    }
    
    func appendingPathQuery(key:String, value: String) -> String {
        return "\(self)?\(key)=\(value)"
    }
}
