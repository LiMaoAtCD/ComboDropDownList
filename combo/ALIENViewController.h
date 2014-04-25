//
//  ALIENViewController.h
//  combo
//
//  Created by AlienLi on 14-4-24.
//  Copyright (c) 2014年 AlienLi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UITableView+DataSourceBlocks.h"
@class TableViewWithBlock;

@interface ALIENViewController : UIViewController
{
    BOOL isOpened;
}

@property (strong, nonatomic) IBOutlet UIButton *openButton;
@property (strong, nonatomic) IBOutlet UITextField *inputTextField;
@property (strong, nonatomic) IBOutlet TableViewWithBlock *tb;
- (IBAction)changeOpenStatus:(id)sender;


@end
