//
//  XFBaseView.m
//  RunWork
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#import "XFBaseView.h"

@implementation XFBaseView

- (instancetype)initWithCoder:(NSCoder *)aDecoder{
    self = [super initWithCoder:aDecoder];
    if (self) {
        [self xf_addSubViews];
        [self xf_layoutSubViews];
        [self xf_bindViewModel];
        [self xf_fetchData];
    }
    return self;
}

- (instancetype)init{
    self = [super init];
    if (self) {
        [self xf_addSubViews];
        [self xf_layoutSubViews];
        [self xf_bindViewModel];
        [self xf_fetchData];
    }
    return self;
}

#pragma mark - XFViewProtocol

- (void)xf_addSubViews{}
- (void)xf_layoutSubViews{}
- (void)xf_bindViewModel{}
- (void)xf_fetchData{}

@end
