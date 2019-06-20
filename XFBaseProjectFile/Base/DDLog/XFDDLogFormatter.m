//
//  XFDDLogFormatter.m
//  RunWork
//
//  Created by F on 2019/6/4.
//  Copyright © 2019 F. All rights reserved.
//

#import "XFDDLogFormatter.h"

@interface XFDDLogFormatter ()

@property (nonatomic, strong) NSDateFormatter *dateFormatter;

@end

@implementation XFDDLogFormatter

- (NSString *)formatLogMessage:(DDLogMessage *)logMessage{
    NSString *dateString = [self.dateFormatter stringFromDate:logMessage.timestamp];
    NSString *appName = [[NSProcessInfo processInfo] processName];
    NSString *threadID = logMessage.threadID;
    NSString *logLevel = [self transformLevel:logMessage.flag];
    NSString *fuction = logMessage.function;
    NSString *message = logMessage.message;
    
    return [NSString stringWithFormat:@"%@ %@[%@] %@\n           %@\n           %@",
            dateString, appName, threadID, logLevel,
            fuction,
            message
            ];
}

- (NSString *)transformLevel:(DDLogFlag)flag{
    switch (flag) {
        case DDLogFlagVerbose:
            return @"Verbose";
        case DDLogFlagDebug:
            return @"Debug";
        case DDLogFlagInfo:
            return @"Info";
        case DDLogFlagWarning:
            return @"Warning";
        case DDLogFlagError:
            return @"Error";
        default:
            break;
    }
    return @"";
}

- (NSDateFormatter *)dateFormatter{
    if (!_dateFormatter) {
        _dateFormatter = [[NSDateFormatter alloc] init];
        [_dateFormatter setDateFormat:@"yyyy-MM-dd hh:mm:ss"];
    }
    return _dateFormatter;
}

@end
