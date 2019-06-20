//
//  XFBaseViewController.m
//  RunWork
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#import "XFBaseViewController.h"

@interface XFBaseViewController ()

@end

@implementation XFBaseViewController

- (void)dealloc{
#if DEBUG
    NSLog(@"Running %@ '%@'", self.class, NSStringFromSelector(_cmd));
#endif
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    [self xf_configurationNavigation];
    [self xf_addSubViews];
    [self xf_layoutSubViews];
    [self xf_bindViewModel];
    [self xf_fetchData];
}

#pragma mark - XFViewControllerProtocol

- (void)xf_configurationNavigation{}
- (void)xf_addSubViews{}
- (void)xf_layoutSubViews{}
- (void)xf_bindViewModel{}
- (void)xf_fetchData{}

@end
