//
//  XFDefineMethod.h
//  Demo
//
//  Created by F on 2019/6/19.
//  Copyright © 2019 F. All rights reserved.
//

#ifndef XFDefineMethod_h
#define XFDefineMethod_h

#define kAppDelegate ((AppDelegate *)[UIApplication sharedApplication].delegate)
#define kKEY_WINDOW  [UIApplication sharedApplication].keyWindow

//移除键盘
#define kMethod_removeKeyboard  [kKEY_WINDOW endEditing:YES]

#endif /* XFDefineMethod_h */
