//
//  Friends.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 10..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import Foundation
import ObjectMapper

class Friends : Mappable {
    var requestFriends: [User]?
    var onFriends: [User]?
    var offFriends: [User]?
    required init?(map: Map){
        
    }
    func mapping(map: Map) {
        self.requestFriends <- map["requestFriends"]
        self.onFriends <- map["onFriends"]
        self.offFriends <- map["offFriends"]
    }
}
