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
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.forSpacingView.backgroundColor = UIColor.white.withAlphaComponent(0.05)
        self.forSpacingView.layer.cornerRadius = 10.0
        self.bottomLabel.textColor = UIColor.withAlphaWhiteColor
        self.requestButton.isHidden = true
    }

    @IBAction func requestAction(_ sender: Any) {
        
    }
    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
