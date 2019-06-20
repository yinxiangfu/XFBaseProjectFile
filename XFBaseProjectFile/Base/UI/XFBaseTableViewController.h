//
//  XFBaseTableViewController.h
//  RunWork
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#import "XFBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface XFBaseTableViewController : XFBaseViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;
- (instancetype)initWithStyle:(UITableViewStyle)style;

- (void)addRemoveKeyboardTap;
- (void)rmRemoveKeyboardTap;

@end

NS_ASSUME_NONNULL_END
