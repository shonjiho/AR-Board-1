//
//  ARBFriendListTableViewController.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 10..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit

class ARBFriendListTableViewController: UITableViewController {
    struct Section {
        static let headerTitles: [String] = ["친구 요청", "접속 중인 친구",  "접속 중이 아닌 친구"]
    }
    
    enum SectionType {
        case request, on, off
        var key:Int {
            switch self {
            case .request:
                return 0
            case .on:
                return 1
            case .off:
                return 2
            }
        }
    }
    
    let dataManager:ARBDataManager = ARBDataManager.getInstance()
    var pullUpRefreshControl:UIRefreshControl!
    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupFriendListView()
       
    }
    
    @IBAction func addAction(_ sender: Any) {
        guard dataManager.isCurrentUser else {
            return
        }
        self.performSegue(withIdentifier: SegueIdentifier.searchFromFriendList, sender: nil)
    }
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        self.fetchFriendList()
    }
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
    }
    private func fetchFriendList(showActivityIndicator:Bool=false, completion: ((Void) -> Void)? = nil){
        self.dataManager.getRequest(self, requestType: .friend, isShowActivityIndicator: showActivityIndicator) { (isSuccess) in
            if let completion = completion {
                completion()
            }
            if let isSuccess = isSuccess as? Bool, isSuccess {
                self.tableView.reloadData()
            }
        }
    }
    fileprivate func setupFriendListView(){
        self.navigationItem.backBarButtonItem = UIBarButtonItem.empty
        self.tableView.tableFooterView = UIView.init(frame: CGRect.zero)
        // Edit 버튼으로 지정.
        self.navigationItem.leftBarButtonItem = editButtonItem
        
        self.setupRefreshControl()
    }
    fileprivate func setupRefreshControl(){
        self.pullUpRefreshControl = UIRefreshControl.init()
        self.pullUpRefreshControl.attributedTitle = NSAttributedString.init(string: "Loading...", attributes: [NSForegroundColorAttributeName : UIColor.white])
        
        self.pullUpRefreshControl.addTarget(self, action: #selector(pullDownRefresh), for: UIControlEvents.valueChanged)
        self.pullUpRefreshControl.tintColor = UIColor.white
        self.pullUpRefreshControl.backgroundColor = UIColor.clear
        self.tableView.addSubview(self.pullUpRefreshControl)
    }
    func pullDownRefresh(){
        self.fetchFriendList(showActivityIndicator: true) {
            self.pullUpRefreshControl.endRefreshing()
        }
    }
    func showAlertController(identifier:String?){
        let title:String = "메시지 보내기"
        let message:String = "게임에 초대하시겠습니까?"
        let alertController:UIAlertController = UIAlertController.init(title: title, message: message, preferredStyle: .actionSheet)
        let inviteAction:UIAlertAction = UIAlertAction.init(title: "초대", style: .default) { (action) in
            
        }
        alertController.addAction(inviteAction)
        alertController.addAction(UIAlertAction.cancel)
        self.present(alertController, animated: true, completion: nil)
    }
}

extension ARBFriendListTableViewController {
    // MARK: - Table view data source
    override func tableView(_ tableView: UITableView, titleForHeaderInSection section: Int) -> String? {
        
        return Section.headerTitles[section]
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return Section.headerTitles.count
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        guard let friends = self.dataManager.friends else {
            return 0
        }
        switch section {
        case SectionType.request.key:
            return friends.friendRequests?.count ?? 0
        case SectionType.on.key:
            return friends.onFriends?.count ?? 0
        case SectionType.off.key:
            return friends.offFriends?.count ?? 0
        default:
            return 0
        }
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: CellIdentifier.friendList, for: indexPath) as! ARBFriendTableViewCell

        guard let friends = self.dataManager.friends else {
            return cell
        }

        switch indexPath.section {
        case SectionType.request.key:
            cell.selectionStyle = .none
            cell.topLabel.text = friends.friendRequests?[indexPath.row].userName
            cell.bottomLabel.text = friends.friendRequests?[indexPath.row].userEmail
            cell.requestButton.isHidden = false
        case SectionType.on.key:
            cell.topLabel.text = friends.onFriends?[indexPath.row].userName
            cell.bottomLabel.text = friends.onFriends?[indexPath.row].userEmail
//            cell.bottomLabel.text =  "TEST"
            cell.selectedBackgroundView = UIVisualEffectView.dark
        case SectionType.off.key:
            cell.selectionStyle = .none
            cell.topLabel.text =  friends.offFriends?[indexPath.row].userName
            cell.bottomLabel.text =  friends.offFriends?[indexPath.row].userEmail
//            cell.bottomLabel.text = "TEST"
        default:
            print("Error")
        }
        
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        guard indexPath.section == SectionType.on.key ,let friends = self.dataManager.friends, let onFriends = friends.onFriends else {
            return
        }
        self.showAlertController(identifier: onFriends[indexPath.row].identifier)
    }
}
