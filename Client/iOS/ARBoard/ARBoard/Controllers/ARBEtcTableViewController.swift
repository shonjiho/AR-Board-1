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
        /*
        static func heightOfRows(of indexPath: IndexPath) -> CGFloat {
            if dataManager.isCurrentUser {
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
         */
    }
    override func viewDidLoad() {
        super.viewDidLoad()

    }

    // MARK: - Table view data source
    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 0
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 0
    }

    /*
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "reuseIdentifier", for: indexPath)

        // Configure the cell...

        return cell
    }
    */

    /*
    // Override to support conditional editing of the table view.
    override func tableView(_ tableView: UITableView, canEditRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the specified item to be editable.
        return true
    }
    */

    /*
    // Override to support editing the table view.
    override func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCellEditingStyle, forRowAt indexPath: IndexPath) {
        if editingStyle == .delete {
            // Delete the row from the data source
            tableView.deleteRows(at: [indexPath], with: .fade)
        } else if editingStyle == .insert {
            // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
        }    
    }
    */

    /*
    // Override to support rearranging the table view.
    override func tableView(_ tableView: UITableView, moveRowAt fromIndexPath: IndexPath, to: IndexPath) {

    }
    */

    /*
    // Override to support conditional rearranging of the table view.
    override func tableView(_ tableView: UITableView, canMoveRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the item to be re-orderable.
        return true
    }
    */

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
