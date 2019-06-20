//
//  UIButton+XFMethod.h
//  RunWork
//
//  Created by F on 2019/6/18.
//  Copyright © 2019 F. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, FAITHButtonImagePosition) {
    FAITHButtonImagePositionLeft = 0,              //图片在左，文字在右，默认
    FAITHButtonImagePositionRight = 1,             //图片在右，文字在左
    FAITHButtonImagePositionTop = 2,               //图片在上，文字在下
    FAITHButtonImagePositionBottom = 3,            //图片在下，文字在上
};

/*
 针对同时设置了Image和Title的场景时UIButton中的图片和文字的关系
 */
typedef NS_ENUM(NSInteger, ButtonImageTitleStyle ) {
    ButtonImageTitleStyleDefault = 0,       //图片在左，文字在右，整体居中。
    ButtonImageTitleStyleLeft  = 0,         //图片在左，文字在右，整体居中。
    ButtonImageTitleStyleRight     = 2,     //图片在右，文字在左，整体居中。
    ButtonImageTitleStyleTop  = 3,          //图片在上，文字在下，整体居中。
    ButtonImageTitleStyleBottom    = 4,     //图片在下，文字在上，整体居中。
    ButtonImageTitleStyleCenterTop = 5,     //图片居中，文字在上距离按钮顶部。
    ButtonImageTitleStyleCenterBottom = 6,  //图片居中，文字在下距离按钮底部。
    ButtonImageTitleStyleCenterUp = 7,      //图片居中，文字在图片上面。
    ButtonImageTitleStyleCenterDown = 8,    //图片居中，文字在图片下面。
    ButtonImageTitleStyleRightLeft = 9,     //图片在右，文字在左，距离按钮两边边距
    ButtonImageTitleStyleLeftRight = 10,    //图片在左，文字在右，距离按钮两边边距
};

@interface UIButton (XFMethod)

/** 是否可用 */
@property (nonatomic, assign) BOOL userEnabled;

- (void)setTextColor:(UIColor *)textColor font:(UIFont *)font title:(NSString *)title;

/**
 *  设置Button的背景色（颜色生成背景图）
 */
- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;

/**
 *  快捷设置两张状态下的属性
 */
- (void)setImage:(UIImage *)image imageHL:(UIImage *)imageHL;
- (void)setImage:(UIImage *)image imageSelect:(UIImage *)imageSelect;
- (void)setTitleColor:(UIColor *)color colorSelect:(UIColor *)colorSelect;

/**
 *  image和title图文混排
 *
 *  @param  position    图片的位置，默认left
 *  @param  spacing     图片和标题的间隔
 *
 *  @return     返回button最小的size
 *
 *  注意，需要先设置好image、title、font。网络图片需要下载完成后再调用此方法，或设置同大小的placeholder
 */
- (CGSize)setButtonImagePosition:(FAITHButtonImagePosition)position spacing:(CGFloat)spacing;

/**
 *  按钮样式
 *
 *  UIButtonTitleWithImageAlignment 样式
 *  @param padding               距离图片和标题,默认是5
 */
-(void)setButtonTitleWithImageAlignment:(ButtonImageTitleStyle)style imgTextDistance:(CGFloat)padding textFrame:(CGRect)textFrame imageFrame:(CGRect)imageFrame;


@end

NS_ASSUME_NONNULL_END
