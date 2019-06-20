//
//  XFViewProtocol.h
//  LingQianGuan
//
//  Created by yinxiangfu on 17/4/14.
//  Copyright © 2017年 wtjr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XFViewModelProtocol.h"

@protocol XFViewProtocol <NSObject>

@optional

- (instancetype)initWithViewModel:(id <XFViewModelProtocol>)viewModel;
- (void)xf_addSubViews;
- (void)xf_layoutSubViews;
- (void)xf_bindViewModel;
- (void)xf_fetchData;

@end
