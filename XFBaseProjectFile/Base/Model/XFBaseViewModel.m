//
//  XFBaseViewModel.m
//  Demo
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#import "XFBaseViewModel.h"

@implementation XFBaseViewModel

- (instancetype)init{
    self = [super init];
    if (self) {
        [self xf_initialize];
    }
    return self;
}

- (void)xf_initialize{}

@end
