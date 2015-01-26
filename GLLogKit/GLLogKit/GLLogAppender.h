//
//  GLLogAppender.h
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLLogKit/GLLogEvent.h>
#import <GLLogKit/GLLogLayout.h>

@protocol GLLogAppender <NSObject>
@property(nonatomic, strong, readonly) id<GLLogLayout> layout;
@property(nonatomic, strong, readonly) NSString *name;
- (void)appendWithLogEvent:(GLLogEvent *)logEvent;
@end

@interface GLLogAppenderBase : NSObject <GLLogAppender>

@end

@interface GLConsoleLogAppender : NSObject <GLLogAppender>

@end

@interface GLFileLogAppender : NSObject <GLLogAppender>

@end

