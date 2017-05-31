//
//  ARBSearchViewController.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 14..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit

class ARBSearchViewController: UIViewController {

    @IBOutlet weak var searchBar: UISearchBar!
    @IBOutlet weak var userNameLabel: UILabel!
    @IBOutlet weak var userEmailLabel: UILabel!
    @IBOutlet weak var userStateMessageLabel: UILabel!
    @IBOutlet weak var requestButton: UIButton!
    @IBOutlet weak var userImageView: UIImageView!
    
    var searchedUserIdentifier:String?
    let dataManager:ARBDataManager = ARBDataManager.getInstance()
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.configureSearchBar()
        // Do any additional setup after loading the view.
    }
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        self.resetUI()
    }
    fileprivate func configureSearchBar(){
        self.searchBar.delegate = self
        
        self.searchBar.keyboardType = .emailAddress
        self.searchBar.spellCheckingType = .no
        self.searchBar.tintColor = UIColor.white
        self.searchBar.showsCancelButton = true
        
        
    }
    fileprivate func configureUI(_ user:User){
        
        DispatchQueue.main.async {
            self.userNameLabel.text = user.userName
            self.userEmailLabel.text = user.userEmail
            
            if let userIdentifier = user.identifier {
                self.searchedUserIdentifier = String.init(describing : userIdentifier)
            }
            if let userImageUrlString = user.userImageURL {
                let userImageUrl = URL.init(string: "\(userImageUrlString)?type=large")
                self.userImageView.kf.setImage(with: userImageUrl)
                self.userImageView.setRounded()
            } else {
                self.userImageView.image = UIImage.init(named: "OffProfile")
                self.userImageView.setRounded()
            }
            
            if let relationshipState = user.relationshipState, relationshipState == "N"{
                self.requestButton.isHidden = false
            } else {
                self.requestButton.isHidden = true
                self.userStateMessageLabel.text = "현재 친구 관계입니다."
            }
            self.view.layoutIfNeeded()
            self.view.updateConstraintsIfNeeded()
        }
    }
    fileprivate func resetUI(){
        self.userNameLabel.text = "결과가 없습니다."
        self.userEmailLabel.text = ""
        self.userStateMessageLabel.text = ""
        self.requestButton.isHidden = true
        self.view.layoutIfNeeded()
        self.view.updateConstraintsIfNeeded()
    }
    @IBAction func requestAction(_ sender: Any) {
        guard !self.requestButton.isHidden, let searchedUserIdentifier = self.searchedUserIdentifier else {
            return
        }
        self.dataManager.createRequest(self, requestType: RequestType.friend, identifier: searchedUserIdentifier) {
          self.dismiss(animated: true, completion: nil)
        }
    }
    @IBAction func cancelAction(_ sender: Any) {
        self.searchBar.endEditing(true)
        self.dismiss(animated: true, completion: nil)
    }

}
extension ARBSearchViewController:UISearchBarDelegate {
    func searchBarSearchButtonClicked(_ searchBar: UISearchBar) {
        self.searchBar.endEditing(true)
        dump(searchBar.text)
        self.dataManager.fetchRequest(self, requestType: .user, identifier: searchBar.text) { (user) in
            dump(user)
            if let user = user as? User {
                self.configureUI(user)
            } else {
                self.resetUI()
            }
        }
    }
    func searchBarTextDidBeginEditing(_ searchBar: UISearchBar) {
        self.resetUI()
        searchBar.text = ""
    }
}
