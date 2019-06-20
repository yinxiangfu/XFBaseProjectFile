
//
//  XFDefineColor.h
//  Demo
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#ifndef XFDefineColor_h
#define XFDefineColor_h

//自定义颜色
#define kCOLOR(R,G,B)               [UIColor colorWithRed:R/255.0f green:G/255.0f blue:B/255.0f alpha:1.0f]
#define kCOLORWithAlpha(R,G,B,A)    [UIColor colorWithRed:R/255.0f green:G/255.0f blue:B/255.0f alpha:A]

//16进制颜色
#define kCOLOR_RGBValue(RGBValue)   [UIColor colorWithRed:((float)((RGBValue & 0xFF0000) >> 16))/255.0 \
green:((float)((RGBValue & 0x00FF00) >>  8))/255.0 \
blue:((float)((RGBValue & 0x0000FF) >>  0))/255.0 \
alpha:1.0]

//基本颜色
#define kCOLOR_red              [UIColor redColor]          // 1.0, 0.0, 0.0 RGB
#define kCOLOR_black            [UIColor blackColor]        // 0.0 white
#define kCOLOR_darkGray         [UIColor darkGrayColor]     // 0.333 white
#define kCOLOR_white            [UIColor whiteColor]        // 1.0 white
#define kCOLOR_gray             [UIColor grayColor]         // 0.5 white
#define kCOLOR_lightGray        [UIColor lightGrayColor]
#define kCOLOR_green            [UIColor greenColor]        // 0.0, 1.0, 0.0 RGB
#define kCOLOR_blue             [UIColor blueColor]         // 0.0, 0.0, 1.0 RGB
#define kCOLOR_cyan             [UIColor cyanColor]         // 0.0, 1.0, 1.0 RGB
#define kCOLOR_yellow           [UIColor yellowColor]       // 1.0, 1.0, 0.0 RGB
#define kCOLOR_magenta          [UIColor magentaColor]      // 1.0, 0.0, 1.0 RGB
#define kCOLOR_orange           [UIColor orangeColor]       // 1.0, 0.5, 0.0 RGB
#define kCOLOR_purple           [UIColor purpleColor]       // 0.5, 0.0, 0.5 RGB
#define kCOLOR_brown            [UIColor brownColor]        // 0.6, 0.4, 0.2 RGB
#define kCOLOR_clear            [UIColor clearColor]        // 0.0 white, 0.0 alpha

//项目颜色
#define kCOLOR_tableViewBg      [UIColor groupTableViewBackgroundColor]

#endif /* XFDefineColor_h */
