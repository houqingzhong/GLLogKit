//
//  GLLogLayout.h
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GLLogEvent;
@protocol GLLogLayout <NSObject>
@property(nonatomic, strong, readonly) NSString *header;
@property(nonatomic, strong, readonly) NSString *footer;
@property(nonatomic, strong, readonly) NSString *contentType; //!< application/json, text/html, etc..

- (void)formatOutput:(NSString *)output event:(GLLogEvent *)logEvent;

@end

@interface GLLogLayoutBase : NSObject <GLLogLayout>
@end

@interface GLLogPatternLayout : GLLogLayoutBase
@property (nonatomic, copy) NSString *conversionPattern;
@end

@interface GLSimpleLayout : GLLogLayoutBase
@end

@interface GLXMLLayout : GLLogLayoutBase
@end
