//
//  XFBaseTableViewController.m
//  RunWork
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#import "XFBaseTableViewController.h"
#import "Masonry.h"
#import "XFDefineColor.h"

@interface XFBaseTableViewController () <UIGestureRecognizerDelegate>
{
    UITableViewStyle _style;
}
@property (nonatomic, strong) UITapGestureRecognizer *removeKeyboardTap;

@end

@implementation XFBaseTableViewController

- (instancetype)init{
    self = [super init];
    if (self) {
        _style = UITableViewStylePlain;
    }
    return self;
}

- (instancetype)initWithStyle:(UITableViewStyle)style{
    self = [super init];
    if (self) {
        _style = style;
    }
    return self;
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self addRemoveKeyboardTap];
}

#pragma mark - Private



#pragma mark - Public

- (void)addRemoveKeyboardTap{
    self.tableView.userInteractionEnabled = YES;
    [self.tableView addGestureRecognizer:self.removeKeyboardTap];
}

- (void)rmRemoveKeyboardTap{
    [self.tableView removeGestureRecognizer:self.removeKeyboardTap];
}

#pragma mark - Event

- (void)removeKeyboard{
    [[UIApplication sharedApplication].keyWindow endEditing:YES];
}

#pragma mark - UIGestureRecognizerDelegate

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldReceiveTouch:(UITouch *)touch{
    if ([NSStringFromClass([touch.view class]) isEqualToString:@"UITableViewCellContentView"]) {
        return NO;
    }
    return YES;
}
#pragma mark - lazyLoading

- (UITableView *)tableView{
    if (!_tableView) {
        _tableView = [[UITableView alloc] initWithFrame:CGRectZero style:_style];
        _tableView.delegate = self;
        _tableView.dataSource = self;
        _tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
        _tableView.backgroundColor = kCOLOR_tableViewBg;
        [self.view addSubview:_tableView];
        [_tableView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.edges.equalTo(self.view);
        }];
        _tableView.estimatedRowHeight = 0;
        _tableView.estimatedSectionFooterHeight = 0;
        _tableView.estimatedSectionHeaderHeight = 0;
    }
    return _tableView;
}

- (UITapGestureRecognizer *)removeKeyboardTap{
    if (!_removeKeyboardTap) {
        //移除键盘手势
        _removeKeyboardTap = [[UITapGestureRecognizer alloc] init];
        _removeKeyboardTap.delegate = self;
        [_removeKeyboardTap addTarget:self action:@selector(removeKeyboard)];
    }
    return _removeKeyboardTap;
}

#pragma mark - <UITableViewDelegate, UITableViewDataSource>

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 1;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    static NSString *cellID = @"cellID";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellID];
    }
    return cell;
}

@end
