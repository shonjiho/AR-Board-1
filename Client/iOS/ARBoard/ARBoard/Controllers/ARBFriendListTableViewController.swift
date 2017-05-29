//
//  ARBFriendListTableViewController.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 10..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit

class ARBFriendListTableViewController: UITableViewController {
    
    enum SectionType {
        case request, on, off
        var value:Int {
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
    
    struct Section {
        static let headerTitles: [String] = ["친구 요청", "접속 중인 친구",  "접속 중이 아닌 친구"]
        
        static func cellIdentifier(of section:Int) -> String {
            switch section {
            case SectionType.request.value:
                return CellIdentifier.requestFriendList
            case SectionType.on.value, SectionType.off.value:
                return CellIdentifier.friendList
            default:
                fatalError()
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
        self.dataManager.fetchRequest(self, requestType: .friend, isShowActivityIndicator: showActivityIndicator) { (isSuccess) in
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
        
        // User State Notification
        NotificationCenter.default.addObserver(self, selector: #selector(self.userStateChange(notification:)), name: NotificationName.userStateChange, object: nil)
    }
    
    deinit {
        NotificationCenter.default.removeObserver(self)
    }
    
    
    @objc fileprivate func userStateChange(notification: NSNotification) {
        self.tableView.reloadData()
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
        case SectionType.request.value:
            return friends.friendRequests?.count ?? 0
        case SectionType.on.value:
            return friends.onFriends?.count ?? 0
        case SectionType.off.value:
            return friends.offFriends?.count ?? 0
        default:
            return 0
        }
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let section:Int = indexPath.section
        
        
        guard let friends = self.dataManager.friends else {
            return UITableViewCell.init()
        }

        switch section {
        case SectionType.request.value:
            let requestFriendCell = tableView.dequeueReusableCell(withIdentifier: Section.cellIdentifier(of: section), for: indexPath) as! ARBFriendRequestTableViewCell
            requestFriendCell.selectionStyle = .none
            requestFriendCell.topLabel.text = friends.friendRequests?[indexPath.row].userName
            requestFriendCell.bottomLabel.text = friends.friendRequests?[indexPath.row].userEmail
            requestFriendCell.requestButton.isHidden = false
            return requestFriendCell
        case SectionType.on.value:
            let onFriendCell = tableView.dequeueReusableCell(withIdentifier: Section.cellIdentifier(of: section), for: indexPath) as! ARBFriendTableViewCell
            onFriendCell.topLabel.text = friends.onFriends?[indexPath.row].userName
            onFriendCell.bottomLabel.text = friends.onFriends?[indexPath.row].userEmail
            onFriendCell.selectedBackgroundView = UIVisualEffectView.dark
            return onFriendCell
        case SectionType.off.value:
            let offFriendcell = tableView.dequeueReusableCell(withIdentifier: Section.cellIdentifier(of: section), for: indexPath) as! ARBFriendTableViewCell
            offFriendcell.selectionStyle = .none
            offFriendcell.topLabel.text =  friends.offFriends?[indexPath.row].userName
            offFriendcell.bottomLabel.text =  friends.offFriends?[indexPath.row].userEmail
            return offFriendcell
        default:
            print("Error")
            return UITableViewCell.init()
        }
        
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        guard indexPath.section == SectionType.on.value ,let friends = self.dataManager.friends, let onFriends = friends.onFriends else {
            return
        }
        self.showAlertController(identifier: onFriends[indexPath.row].identifier)
    }
}
