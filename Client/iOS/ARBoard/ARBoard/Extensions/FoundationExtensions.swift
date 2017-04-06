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
    static func auth(domain:String, token:String)->String {
        return "\(base)/auth/\(domain)/login?access_token=\(token)"
    }
}
