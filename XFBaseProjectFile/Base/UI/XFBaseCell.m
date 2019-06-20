//
//  XFBaseCell.m
//  RunWork
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#import "XFBaseCell.h"

@implementation XFBaseCell

- (instancetype)initWithCoder:(NSCoder *)aDecoder{
    self = [super initWithCoder:aDecoder];
    if (self) {
        [self base];
    }
    return self;
}
- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self base];
    }
    return self;
}

- (void)base{
    [self xf_addSubViews];
    [self xf_layoutSubViews];
    [self xf_bindViewModel];
    [self xf_fetchData];
}

#pragma mark - XFCellProtocol

- (void)xf_addSubViews{}
- (void)xf_layoutSubViews{}
- (void)xf_bindViewModel{}
- (void)xf_fetchData{}

@end
