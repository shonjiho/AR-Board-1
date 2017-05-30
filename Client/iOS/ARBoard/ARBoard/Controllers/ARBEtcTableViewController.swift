//
//  AREtcTableViewController.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 6..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit
import MessageUI

class ARBEtcTableViewController: UITableViewController {
    let dataManager:ARBDataManager = ARBDataManager.getInstance()
    enum SectionType:Int {
//        case userInformation = 0, support, pushService, appInformation, signature
        case userInformation = 0, support, appInformation, signature
    }
    
    enum Signature:Int {
        case logIn = 0, logOut, delete
    }
    
    enum AppInformation:Int {
        case provision = 0, homepage
    }
    
    
    struct Section {
//        static let headerTitles: [String] = ["개인정보", "지원", "알림 설정", "정보", " "]
//        static let rowTitles: [[String]] = [["닉네임 변경"], ["앱에 대해 의견 보내기"], ["알림 설정 하기"], ["이용약관 및 개인정보 취급 방침", "공식 홈페이지"], ["로그인", "로그아웃", "회원 탈퇴"]]
        static let headerTitles: [String] = ["개인정보", "지원", "정보", " "]
        static let rowTitles: [[String]] = [["닉네임 변경"], ["앱에 대해 의견 보내기"], ["이용약관 및 개인정보 취급 방침", "공식 홈페이지"], ["로그인", "로그아웃", "회원 탈퇴"]]
        static func numberOfRows(of section: Int) -> Int {
            return rowTitles[section].count
        }
        static func heightOfRows(of indexPath: IndexPath) -> CGFloat {
            if ARBDataManager.getInstance().isCurrentUser {
                if indexPath.section == SectionType.signature.rawValue, indexPath.row == Signature.logIn.rawValue {
                    return 0.0
                }
            } else {
                switch indexPath.section {
                case SectionType.userInformation.rawValue:
                    return 0.0
                case SectionType.signature.rawValue:
                    if indexPath.row != Signature.logIn.rawValue {
                        return 0.0
                    }
                default:
                    return 50.0
                }
            }
            return 50.0
        }
        static func cellIdentifier(of section:Int) -> String {
            var identifier:String
            switch section {
            case SectionType.userInformation.rawValue:
                identifier = CellIdentifier.etcDetail
//            case SectionType.pushService.rawValue:
//                identifier = CellIdentifier.etcSubtitle
            case SectionType.support.rawValue, SectionType.appInformation.rawValue, SectionType.signature.rawValue:
                identifier = CellIdentifier.etcBasic
            default:
                dump("Section Range Error!")
                fatalError()
            }
            return identifier
        }
    }
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupEtcTableView()
    }
    
   
    fileprivate func setupEtcTableView(){
        self.tableView.separatorInset.left = 30
        self.tableView.separatorInset.right = 30
        self.tableView.separatorColor = UIColor.lineColor
        self.tableView.tableFooterView = UIView.init(frame: CGRect.zero)
        
        self.navigationItem.backBarButtonItem = UIBarButtonItem.empty
        
        // User State Notification
        NotificationCenter.default.addObserver(self, selector: #selector(self.reloadUserInformationSignatureSections(notification:)), name: NotificationName.userStateChange, object: nil)
    }

    deinit {
        NotificationCenter.default.removeObserver(self)
    }
    
    
    @objc fileprivate func reloadUserInformationSignatureSections(notification: NSNotification) {
        self.tableView.beginUpdates()
        self.tableView.reloadSections(IndexSet([SectionType.userInformation.rawValue, SectionType.signature.rawValue]), with: UITableViewRowAnimation.automatic)
        self.tableView.endUpdates()
    }
    
    fileprivate func showSignatureAlertViewController(title:String?, message:String?, alertActionTitle:String?, requestType:RequestType){
        
        let alertAction:UIAlertAction = UIAlertAction.init(title: alertActionTitle, style: .destructive, handler: { (action) in
            self.dataManager.deleteRequest(self, requestType: requestType, completion: nil)
        })
        
        UIAlertController.showAlertViewController(self, title: title, message: message, alertActions: [alertAction, UIAlertAction.cancel])
    }
    
    fileprivate func editUserInformationAlertViewController(title:String?, message:String?, alertActionTitle:String?){
        
        let alertController:UIAlertController = UIAlertController.init(title: title, message: message, preferredStyle: .alert)
        
        let textFieldPlaceholder:String = "바꿀 닉네임을 적어주세요."
        
        alertController.addTextField { (textField) in
            textField.placeholder = textFieldPlaceholder
        }
        
        let alertAction:UIAlertAction = UIAlertAction.init(title: alertActionTitle, style: .default, handler: { (action) in
            let newUserName:String? = alertController.textFields?.first?.text
            self.dataManager.updateRequest(self, requestType: RequestType.user, isShowActivityIndicator: true, value: newUserName, completion: nil)
        })
        
        alertController.addAction(alertAction)
        alertController.addAction(UIAlertAction.cancel)
        
        self.present(alertController, animated: true, completion: nil)
    }
}

extension ARBEtcTableViewController {
    // MARK: - Table view data source
    override func numberOfSections(in tableView: UITableView) -> Int {
        return Section.headerTitles.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let section:Int = indexPath.section
        let tableCell:UITableViewCell = tableView.dequeueReusableCell(withIdentifier: Section.cellIdentifier(of: section), for: indexPath)
        tableCell.textLabel?.text = Section.rowTitles[section][indexPath.row]
        // Selected Dark 효과
        tableCell.selectedBackgroundView = UIVisualEffectView.dark
        switch section {
        case SectionType.userInformation.rawValue:
            if let currentUser = dataManager.currentUser {
                switch indexPath.row {
                case 0:
                    tableCell.detailTextLabel?.text = currentUser.userName
                    //                case 1:
                //                    tableCell.detailTextLabel?.text = currentUser.userEmail
                default:
                    tableCell.detailTextLabel?.text = " "
                }
            }
            //        case SectionType.pushService.rawValue:
        //            tableCell.detailTextLabel?.text = "게임 초대 알림을 설정"
        case SectionType.signature.rawValue:
            if section == SectionType.signature.rawValue, indexPath.row == 2 {
                tableCell.textLabel?.textColor = UIColor.redTintColor
            } else {
                tableCell.textLabel?.textColor = UIColor.white
            }
        default:
            return tableCell
        }
        return tableCell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        let section:Int = indexPath.section
        switch section {
        case SectionType.userInformation.rawValue:
            switch indexPath.row {
            case 0:
                dump("닉네임 수정")
                let alertTitle:String = "닉네임 변경"
                let alertActionTitle:String = "수정"
                self.editUserInformationAlertViewController(title: alertTitle, message: nil, alertActionTitle: alertActionTitle)
            default:
                return
            }
        case SectionType.support.rawValue:
            self.supportMailService()
        case SectionType.appInformation.rawValue:
            dump("appInformation")
        case SectionType.signature.rawValue:
            switch indexPath.row {
            case Signature.logIn.rawValue:
                NotificationCenter.default.post(name: NotificationName.shouldShowSignInViewController, object: nil)
            case Signature.logOut.rawValue:
                let alertControllerTitle:String = "정말 로그아웃 하시겠습니까?"
                let alertActionTitle:String = "로그아웃"
               self.showSignatureAlertViewController(title: alertControllerTitle, message: nil, alertActionTitle: alertActionTitle, requestType: RequestType.logout)
            case Signature.delete.rawValue:
                let alertControllerTitle:String = "정말 회원 탈퇴 하시겠습니까?"
                let alertControllerMessage:String = "회원 탈퇴시 모든 정보가 삭제됩니다."
                let alertActionTitle:String = "탈퇴"
                self.showSignatureAlertViewController(title: alertControllerTitle, message: alertControllerMessage, alertActionTitle: alertActionTitle, requestType: RequestType.logout)
            default:
                return
            }
        default:
            return
        }
        
    }
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return Section.numberOfRows(of: section)
    }
    override func tableView(_ tableView: UITableView, titleForHeaderInSection section: Int) -> String? {
        return Section.headerTitles[section]
    }
    override func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return Section.heightOfRows(of: indexPath)
    }
    override func tableView(_ tableView: UITableView, willDisplayHeaderView view: UIView, forSection section: Int) {
        if let headerView = view as? UITableViewHeaderFooterView {
            headerView.textLabel?.textColor = UIColor.lightGray
        }
    }
}
// MARK: - MFMailComposeViewControllerDelegate
extension ARBEtcTableViewController:MFMailComposeViewControllerDelegate {
    
    // MARK: - MFMailComposeViewController
    fileprivate func supportMailService(){
        if MFMailComposeViewController.canSendMail() {
            let mailComposeViewController:MFMailComposeViewController = MFMailComposeViewController()
            mailComposeViewController.navigationBar.tintColor = UIColor.white
            mailComposeViewController.mailComposeDelegate = self
            mailComposeViewController.setToRecipients(["93yutaechoi@gmail.com"])
            mailComposeViewController.setSubject("[AR 부루마블] ")
            mailComposeViewController.setMessageBody(" ", isHTML: false)
            self.present(mailComposeViewController, animated: true, completion: nil)
        } else {
            let title:String = "Mail을 활성화 해주세요."
            let message:String = "소중한 의견 감사히 듣겠습니다. 메일을 활성화하고 다시 이용 해주세요."
            UIAlertController.showAlertViewController(self, title: title, message: message, alertActions: [UIAlertAction.cancel])
        }
    }
    
    func mailComposeController(_ controller: MFMailComposeViewController, didFinishWith result: MFMailComposeResult, error: Error?) {
        controller.dismiss(animated: true, completion: nil)
    }
}
