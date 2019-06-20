//
//  XFCellProtocol.h
//  LingQianGuan
//
//  Created by yinxiangfu on 17/4/17.
//  Copyright © 2017年 wtjr. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol XFCellProtocol <NSObject>

@optional

- (void)xf_addSubViews;
- (void)xf_layoutSubViews;
- (void)xf_bindViewModel;

@end
