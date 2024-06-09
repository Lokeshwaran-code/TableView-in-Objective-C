//
//  ViewController.h
//  ObjCTableView
//
//  Created by LOKESH on 09/06/24.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>



@property (nonatomic, strong) NSArray *dataArray;

@end

