//
//  KeyChain.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 14..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import Foundation
import Security

public class KeychainService: NSObject {
    // Arguments for the keychain queries
    struct Arguments {
        static let kSecClassValue = NSString(format: kSecClass)
        static let kSecAttrAccountValue = NSString(format: kSecAttrAccount)
        static let kSecValueDataValue = NSString(format: kSecValueData)
        static let kSecClassGenericPasswordValue = NSString(format: kSecClassGenericPassword)
        static let kSecAttrServiceValue = NSString(format: kSecAttrService)
        static let kSecMatchLimitValue = NSString(format: kSecMatchLimit)
        static let kSecReturnDataValue = NSString(format: kSecReturnData)
        static let kSecMatchLimitOneValue = NSString(format: kSecMatchLimitOne)
    }
    
    // Constant Identifiers
    struct Identifiers {
        static let userAccount:String = "AuthenticatedUser"
        static let accessGroup:String = "SecuritySerivice"
    }
    
    // Constant Key
    struct Key {
        static let oauthToken:NSString = "KeyForOauthToken"
        static let deviceToken:NSString = "KeyForDeviceToken"
    }
    
    public class func saveDeviceToken(token: String) {
        self.save(Key.deviceToken, data: token as NSString)
    }
    
    public class func loadDeviceToken() -> String? {
        guard let token = self.load(Key.deviceToken) as String? else {
            return nil
        }
        return token
    }
    
    public class func saveOauthToken(token: String) {
        self.save(Key.oauthToken, data: token as NSString)
    }
    
    public class func loadOauthToken() -> String? {
        guard let token = self.load(Key.oauthToken) as? String else {
            return nil
        }
        return token
    }
    
    // MARK: - KeyChain Data Reset
    public class func authenticatedUserReset() {
        let keychainQuery: NSMutableDictionary = NSMutableDictionary.init()
        keychainQuery.setObject(Arguments.kSecClassGenericPasswordValue, forKey: Arguments.kSecClassValue)
        SecItemDelete(keychainQuery)
    }
    
    // MARK: - KeyChain Data Save
    private class func save(_ service: NSString, data: NSString) {
        if let dataFromString: Data = data.data(using: String.Encoding.utf8.rawValue, allowLossyConversion: false) {
            let keychainQuery: NSMutableDictionary = NSMutableDictionary(objects: [Arguments.kSecClassGenericPasswordValue, service, Identifiers.userAccount, dataFromString], forKeys: [Arguments.kSecClassValue, Arguments.kSecAttrServiceValue, Arguments.kSecAttrAccountValue, Arguments.kSecValueDataValue])
            
            // existing items 삭제
            SecItemDelete(keychainQuery as CFDictionary)
            // item 추가
            SecItemAdd(keychainQuery as CFDictionary, nil)
        }
    }
    
    // MARK: - KeyChain Data Load
    private class func load(_ service: NSString) -> NSString? {
        let keychainQuery: NSMutableDictionary = NSMutableDictionary(objects: [Arguments.kSecClassGenericPasswordValue, service, Identifiers.userAccount, kCFBooleanTrue, Arguments.kSecMatchLimitOneValue], forKeys: [Arguments.kSecClassValue, Arguments.kSecAttrServiceValue, Arguments.kSecAttrAccountValue, Arguments.kSecReturnDataValue, Arguments.kSecMatchLimitValue])
        var dataTypeRef :AnyObject?
        let status: OSStatus = SecItemCopyMatching(keychainQuery, &dataTypeRef)
        // nil로 초기화해서 값 없을 경우 nil return
        var contentsOfKeychain: NSString? = nil
        
        if status == errSecSuccess {
            if let retrievedData = dataTypeRef as? Data {
                contentsOfKeychain = NSString.init(data: retrievedData, encoding: String.Encoding.utf8.rawValue)
            }
        }
        return contentsOfKeychain
    }
}
