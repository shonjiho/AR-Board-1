//
//  ARGameListViewController.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 6..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit


class ARBGameJoinViewController: UIViewController {
    @IBOutlet weak var currentStateLabel: UILabel!
    @IBOutlet weak var joinView: UIView!
    let dataManager:ARBDataManager = ARBDataManager.getInstance()
    enum JoinState {
        case search
        case ready
        var description:String {
            switch self {
            case .search:
                return "상대 찾는 중..."
            case .ready:
                return "게임 시작"
            }
        }
    }
    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupGameList()
        
    }
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
    }
    
    internal func setupGameList(){
        self.joinView.layer.cornerRadius = (self.joinView.frame.height / 2)
        self.joinView.backgroundColor = UIColor.redTintColor
        let tabGestureRecognizer : UITapGestureRecognizer = UITapGestureRecognizer.init(target: self, action: #selector(self.joinViewTouch(_:)))
        self.joinView.addGestureRecognizer(tabGestureRecognizer)
        
        self.currentStateLabel.text = JoinState.ready.description
    }
    func joinViewTouch(_ gestureRecognizer:UITapGestureRecognizer){
        self.joinView.startPulse(with: UIColor.redTintColor, scaleFrom: 1.0, to: 1.6, frequency: 1.5, opacity: 0.8, animation: .radarPulsing)
        self.currentStateLabel.text = JoinState.search.description
        dataManager.gameJoinRequest(self) { (isSuccess) in
            self.joinView.stopPulse()
            self.currentStateLabel.text = JoinState.ready.description
        }
    }
    @IBAction func addAction(_ sender: Any) {
        
    }
}

