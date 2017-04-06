//
//  File.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 6..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import Foundation

//struct URL {
//    
//}

enum OAuthDomain {
    case facebook
    case kakao
    var description:String {
        switch self {
        case .facebook:
            return "facebook"
        case .kakao:
            return "kakao"
        }
    }
}
