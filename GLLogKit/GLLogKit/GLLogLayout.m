//
//  GLLogLayout.m
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import "GLLogLayout.h"

@implementation GLLogLayoutBase

- (NSString *)contentType {
    NSString *reason = [NSString stringWithFormat:@"%@ should be implemented in subclass", NSStringFromSelector(_cmd)];
    @throw [NSException exceptionWithName:@"IllegalImplementationException" reason:reason userInfo:nil];
}

- (NSString *)header {
    NSMutableString *defaultHeader = [[NSMutableString alloc] init];
    //    [defaultHeader appendString:@"=======================================================================\n"];
    //    NSString *dateString = [NSDateFormatter localizedStringFromDate:[NSDate date] dateStyle:NSDateFormatterFullStyle timeStyle:NSDateFormatterFullStyle];
    //    NSString *appName = [[[NSBundle mainBundle] infoDictionary] objectForKey:(NSString*)kCFBundleNameKey];
    //    NSString *appVersion = [[[NSBundle mainBundle] infoDictionary] objectForKey:(NSString *)kCFBundleVersionKey];
    //    NSString *logFrameworkVersion = [[[NSBundle bundleForClass:self.class] infoDictionary] objectForKey:(NSString *)kCFBundleVersionKey];
    //    [defaultHeader appendFormat:@"\t - Date : %@\n", dateString];
    //    [defaultHeader appendFormat:@"\t - Application : %@ v%@\n",appName, appVersion];
    //    [defaultHeader appendFormat:@"\t - Origin : SmartLogKit v%@\n", (logFrameworkVersion ? : [NSString stringWithUTF8String:(const char *)SmartLogKitVersionString])];
    //    [defaultHeader appendString:@"=======================================================================\n"];
    return defaultHeader;
}

- (NSString *)footer {
    return @"=======================================================================\n";
}

@end

@implementation GLLogPatternLayout

@end

@implementation GLSimpleLayout

@end

