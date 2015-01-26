//
//  GLLogger.h
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, GLLoggingLevel) {
    GLLoggingLevelUndefined = -1,
    GLLoggingLevelTrace,
    GLLoggingLevelInfo,
    GLLoggingLevelDebug,
    GLLoggingLevelWarn,
    GLLoggingLevelError,
    GLLoggingLevelFatal
};

extern NSString * getStringFromValue(GLLoggingLevel level);
extern GLLoggingLevel getValueFromString(NSString *string);

@protocol GLLogger <NSObject>
@property(nonatomic, readonly, assign) BOOL isDebugEnabled;
@property(nonatomic, readonly, assign) BOOL isErrorEnabled;
@property(nonatomic, readonly, assign) BOOL isWarnEnabled;
@property(nonatomic, readonly, assign) BOOL isFatalEnabled;
@property(nonatomic, readonly, assign) BOOL isTraceEnabled;
@property(nonatomic, readonly, assign) BOOL isInfoEnabled;

- (void)trace:(NSString *)format, ...;
- (void)info:(NSString *)format, ...;
- (void)debug:(NSString *)format, ...;
- (void)error:(NSString *)format, ...;
- (void)warn:(NSString *)format, ...;
- (void)fatal:(NSString *)format, ...;

- (void)logUsingPriority:(GLLoggingLevel)level message:(NSString *)format, ...;

@end

@protocol GLAsyncLogger <GLLogger>
+ (BOOL)supportAsyncLogging;
@end

