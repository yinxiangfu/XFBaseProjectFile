
//  UILabel+XFMethod.m
//  RunWork
//
//  Created by F on 2019/6/18.
//  Copyright © 2019 F. All rights reserved.
//

#import "UILabel+XFMethod.h"

@implementation UILabel (XFMethod)

- (void)setTextColor:(UIColor *)textColor font:(UIFont *)font text:(NSString *)text
{
    self.text = text;
    self.textColor = textColor;
    self.font = font;
}

@end
