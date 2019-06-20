//
//  UIImage+XFMethod.h
//  RunWork
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (XFMethod)

/**
 根据颜色生成一张尺寸为1*1的相同颜色图片
 
 @param color 颜色
 @return 图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
