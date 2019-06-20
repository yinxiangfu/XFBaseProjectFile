//
//  XFDefineUI.h
//  Demo
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#ifndef XFDefineUI_h
#define XFDefineUI_h

//屏幕尺寸
#define kUI_WIDTH     [UIScreen mainScreen].bounds.size.width
#define kUI_HEIGHT    [UIScreen mainScreen].bounds.size.height

//配置
#define kUI_Status_HEIGHT           (kUI_is_FullScrenn ? 44.0 : 20.0)
#define kUI_NavBar_HEIGHT           (kUI_is_FullScrenn ? 88.0 : 64.0)
#define kUI_TabBar_HEIGHT           (kUI_is_FullScrenn ? 83.0 : 49.0)
#define kUI_HomeIndicator_HEIGHT    (kUI_is_FullScrenn ? 34.0 : 0.0)

#pragma mark - 机型

//全面屏
#define kUI_is_FullScrenn     (kUI_is_IphoneX_XS || kUI_is_IphoneXSMax_XR)
#define kUI_is_IphoneX_XS     ([[UIScreen mainScreen] bounds].size.width  == 375.f && \
[UIScreen mainScreen].bounds.size.height   == 812.f)
#define kUI_is_IphoneXSMax_XR ([[UIScreen mainScreen] bounds].size.width  == 414.f && \
[UIScreen mainScreen].bounds.size.height   == 896.f)

#define kUI_is_Iphone6p ([[UIScreen mainScreen] bounds].size.height == 736.0f )
#define kUI_is_Iphone6p ([[UIScreen mainScreen] bounds].size.height == 736.0f )

#define kUI_is_Iphone6p ([[UIScreen mainScreen] bounds].size.height == 736.0f )
#define kUI_is_Iphone6  ([[UIScreen mainScreen] bounds].size.height == 667.0f )
#define kUI_is_Iphone5  ([[UIScreen mainScreen] bounds].size.height == 568.0f )
#define kUI_is_Iphone4  ([[UIScreen mainScreen] bounds].size.height == 480.0f )


#pragma mark - 系统

#define kUI_is_IOS11_Later   ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11)
#define kUI_is_IOS10_Later   ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10)
#define kUI_is_IOS9_Later    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9)
#define kUI_is_IOS8_Later    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8)
#define kUI_is_IOS7_Later    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7)

#define kUI_is_IOS10    ([[[UIDevice currentDevice] systemVersion] intValue] == 10)
#define kUI_is_IOS9     ([[[UIDevice currentDevice] systemVersion] intValue] == 9)
#define kUI_is_IOS8     ([[[UIDevice currentDevice] systemVersion] intValue] == 8)
#define kUI_is_IOS7     ([[[UIDevice currentDevice] systemVersion] intValue] == 7)
#define kUI_is_IOS6     ([[[UIDevice currentDevice] systemVersion] intValue] == 6)
#define kUI_is_IOS5     ([[[UIDevice currentDevice] systemVersion] intValue] == 5)
#define kUI_is_IOS4     ([[[UIDevice currentDevice] systemVersion] intValue] == 4)

//获取frame尺寸
#define kUI_Width(frame)    CGRectGetWidth(frame)
#define kUI_Height(frame)   CGRectGetHeight(frame)
#define kUI_MinX(frame)     CGRectGetMinX(frame)
#define kUI_MaxX(frame)     CGRectGetMaxX(frame)
#define kUI_MinY(frame)     CGRectGetMinY(frame)
#define kUI_MaxY(frame)     CGRectGetMaxY(frame)
#define kUI_MidX(frame)     CGRectGetMidX(frame)
#define kUI_MidY(frame)     CGRectGetMidY(frame)
#define kUI_CenterX(frame)  (frame.size.width/2)
#define kUI_CenterY(frame)  (frame.size.height/2)

//自定义
#define kUI_LineHeight      1.f

#endif /* XFDefineUI_h */
