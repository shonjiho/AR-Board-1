//
//  ARBFriendRequestTableViewCell.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 5. 29..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit

class ARBFriendTableViewCell: UITableViewCell {
    
    @IBOutlet weak var forSpacingView: UIView!
    @IBOutlet weak var topLabel: UILabel!
    @IBOutlet weak var bottomLabel: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.forSpacingView.backgroundColor = UIColor.white.withAlphaComponent(0.05)
        self.forSpacingView.layer.cornerRadius = 10.0
        self.bottomLabel.textColor = UIColor.withAlphaWhiteColor
        
    }
    
    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)
        
        // Configure the view for the selected state
    }

}
