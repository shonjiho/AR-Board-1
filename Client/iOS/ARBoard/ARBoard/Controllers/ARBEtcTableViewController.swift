//
//  AREtcTableViewController.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 6..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit

class ARBEtcTableViewController: UITableViewController {
    let dataManager:ARBDataManager = ARBDataManager.getInstance()
    enum SectionType:Int {
        case userInformation = 0, support, pushService, appInformation, signature
    }
    
    enum Signature:Int {
        case logIn = 0, logOut, delete
    }
    
    enum AppInformation:Int {
        case provision = 0, homepage
    }
    
    struct Section {
        static let headerTitles: [String] = ["개인정보", "지원", "알림 설정", "정보", " "]
        static let rowTitles: [[String]] = [["닉네임 변경", "이메일 변경", "비밀번호 변경"], ["앱에 대해 의견 보내기"], ["알림 설정 하기"], ["이용약관 및 개인정보 취급 방침", "공식 홈페이지"], ["로그인", "로그아웃", "회원 탈퇴"]]
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
            case SectionType.pushService.rawValue:
                identifier = CellIdentifier.etcSubtitle
            case SectionType.support.rawValue, SectionType.appInformation.rawValue, SectionType.signature.rawValue:
                identifier = CellIdentifier.etcBasic
            default:
                dump("Section Range Error!")
                return ""
            }
            return identifier
        }
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let tableCell:UITableViewCell = tableView.dequeueReusableCell(withIdentifier: Section.cellIdentifier(of: indexPath.section), for: indexPath)
        tableCell.textLabel?.text = Section.rowTitles[indexPath.section][indexPath.row]
        // Selected Dark 효과
        tableCell.selectedBackgroundView = UIVisualEffectView.dark
        switch indexPath.section {
        case SectionType.userInformation.rawValue:
            if let currentUser = dataManager.currentUser {
                switch indexPath.row {
                case 0:
                    tableCell.detailTextLabel?.text = currentUser.userName
                case 1:
                    tableCell.detailTextLabel?.text = currentUser.userEmail
                default:
                    tableCell.detailTextLabel?.text = " "
                }
            }
        case SectionType.pushService.rawValue:
            tableCell.detailTextLabel?.text = "게임 초대 알림을 설정"
        case SectionType.signature.rawValue:
            if indexPath.section == SectionType.signature.rawValue, indexPath.row == 2 {
                tableCell.textLabel?.textColor = UIColor.redTintColor
            } else {
                tableCell.textLabel?.textColor = UIColor.white
            }
        default:
            return tableCell
        }
        return tableCell
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        setupEtcTableView()
    }
    
    fileprivate func setupEtcTableView(){
        self.tableView.separatorInset.left = 30
        self.tableView.separatorInset.right = 30
        self.tableView.separatorColor = UIColor.lineColor
        self.tableView.tableFooterView = UIView.init(frame: CGRect.zero)
        
        self.navigationItem.backBarButtonItem = UIBarButtonItem.empty
    }

    // MARK: - Table view data source
    override func numberOfSections(in tableView: UITableView) -> Int {
        return Section.headerTitles.count
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
