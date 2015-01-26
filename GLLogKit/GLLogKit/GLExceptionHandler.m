//
//  GLExceptionHandler.m
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import "GLExceptionHandler.h"

extern void dispatchableExceptionHandler(NSException *exception);

@implementation GLExceptionHandler

- (instancetype)init {
    @throw [NSException exceptionWithName:@"IllegalInitializerCallException" reason:@"Illegal Initializer Call is Forbiden" userInfo:nil];
}

- (instancetype)initWithNil {
    self = [super init];
    if (self) {
        // Does nothing here
    }
    return self;
}

+ (instancetype)defaultHandler {
    static dispatch_once_t onceToken;
    static GLExceptionHandler *exceptionHandler;
    dispatch_once(&onceToken, ^{
        if (!exceptionHandler) {
            exceptionHandler = [[GLExceptionHandler alloc] initWithNil];
        }
    });
    return exceptionHandler;
}

- (void)startObservingExceptions {
    NSSetUncaughtExceptionHandler(&dispatchableExceptionHandler);
}


@end

void dispatchableExceptionHandler(NSException *exception) {
    //!\todo Produces a default fatal level logs according by logger configuration
}
