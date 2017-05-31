//
//  ARBFriendTableViewCell.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 10..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit

class ARBFriendRequestTableViewCell: UITableViewCell {

    @IBOutlet weak var requestButton: UIButton!
    @IBOutlet weak var forSpacingView: UIView!
    @IBOutlet weak var topLabel: UILabel!
    @IBOutlet weak var bottomLabel: UILabel!
    @IBOutlet weak var thumbnailImageView: UIImageView!
    var userIdentifier:String?
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.forSpacingView.backgroundColor = UIColor.white.withAlphaComponent(0.05)
        self.forSpacingView.layer.cornerRadius = 10.0
        self.bottomLabel.textColor = UIColor.withAlphaWhiteColor
        
        self.thumbnailImageView.setRounded()
    }

    @IBAction func requestAction(_ sender: Any) {
        guard let userIdentifier = userIdentifier else {
            return
        }
        ARBDataManager.getInstance().updateRequest(.friend, key: userIdentifier, completion: nil)
    }
    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
