//
//  ViewController.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 3. 18..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    var test = 10;
    let shared = ARBDataManager.getInstance()
    override func viewDidLoad() {
        super.viewDidLoad()
        let one = UIBarButtonItem.init(title: "One", style: UIBarButtonItemStyle.plain, target: self, action: #selector(self.click(_:)))
        let two = UIBarButtonItem.init(title: "two", style: UIBarButtonItemStyle.plain, target: nil, action: nil)
        dump(one)
        dump(one.description)
        self.navigationItem.rightBarButtonItems = [one,two]
        
        // Do any additional setup after loading the view, typically from a nib.
    }
    func click(_ : UIBarButtonItem) {
        dump("CLICK")
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}
//extension ViewController : UITableViewDelegate {
//    table
//}
//extension ViewController : UITableViewDataSource {
//    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
//        
//    }
//    func numberOfSections(in tableView: UITableView) -> Int {
//        
//    }
//    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
//        
//
//    table
//}
