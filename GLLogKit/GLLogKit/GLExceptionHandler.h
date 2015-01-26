//
//  GLExceptionHandler.h
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GLExceptionHandler : NSObject
+ (instancetype)defaultHandler;
- (void)startObservingExceptions;
@end
