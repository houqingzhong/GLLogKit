//
//  GLLoggerImplementation.h
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLLogKit/GLLogger.h>

@protocol GLProductiveLogger <GLLogger>
@required
+ (instancetype)loggerWithClass:(Class)targetClass;
+ (instancetype)loggerWithName:(NSString *)targetName;
@end

@interface GLLoggerImplementation : NSObject <GLProductiveLogger>

@end
