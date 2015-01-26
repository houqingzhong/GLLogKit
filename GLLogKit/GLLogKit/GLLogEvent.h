//
//  GLLogEvent.h
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLLogKit/GLLogger.h>

@interface GLLogEvent : NSObject
@property(nonatomic, assign) GLLoggingLevel level;
@property(nonatomic, copy, readonly) NSDate *timestamp;
@property(nonatomic, copy) NSString *content;
@property(nonatomic, copy) NSDictionary *properties;

+ (instancetype)logEventWithLevel:(GLLoggingLevel)level
                          content:(NSString *)content
                       properties:(NSDictionary *)properties;

@end
