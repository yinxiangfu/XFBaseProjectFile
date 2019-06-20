//
//  XFViewControllerProtocol.h
//  LingQianGuan
//
//  Created by yinxiangfu on 17/4/17.
//  Copyright © 2017年 wtjr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XFViewModelProtocol.h"

@protocol XFViewControllerProtocol <NSObject>

@optional

- (instancetype)initWithViewModel:(id <XFViewModelProtocol>)viewModel;
- (void)xf_configurationNavigation;
- (void)xf_addSubViews;
- (void)xf_layoutSubViews;
- (void)xf_bindViewModel;
- (void)xf_fetchData;
 
@end
