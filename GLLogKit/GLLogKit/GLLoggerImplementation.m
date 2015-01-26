//
//  GLLoggerImplementation.m
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import "GLLoggerImplementation.h"

NSString * getStringFromValue(GLLoggingLevel level) {
    NSString *valueString = nil;
    switch (level) {
        case GLLoggingLevelInfo:
            valueString = @"INFO";
            break;
        case GLLoggingLevelTrace:
            valueString = @"TRACE";
            break;
        case GLLoggingLevelDebug:
            valueString = @"DEBUG";
            break;
        case GLLoggingLevelWarn:
            valueString = @"WARN";
            break;
        case GLLoggingLevelError:
            valueString = @"ERROR";
            break;
        case GLLoggingLevelFatal:
            valueString = @"FATAL";
            break;
        default:
            break;
    }
    return valueString;
}

GLLoggingLevel getValueFromString(NSString *string) {
    GLLoggingLevel level = GLLoggingLevelUndefined;
    switch (string.UTF8String[0]) {
        case 'I':
            level = GLLoggingLevelInfo;
            break;
        case 'T':
            level = GLLoggingLevelTrace;
            break;
        case 'D':
            level = GLLoggingLevelDebug;
            break;
        case 'W':
            level = GLLoggingLevelWarn;
            break;
        case 'E':
            level = GLLoggingLevelError;
            break;
        case 'F':
            level = GLLoggingLevelFatal;
            break;
        default:
            break;
    }
    return level;
}

@implementation GLLoggerImplementation

@end
