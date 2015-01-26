//
//  GLLogLayout.h
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol GLLogLayout <NSObject>
@property(nonatomic, strong, readonly) NSString *header;
@property(nonatomic, strong, readonly) NSString *footer;
@property(nonatomic, strong, readonly) NSString *contentType; //!< application/json, text/html, etc..

@end

@interface GLLogLayoutBase : NSObject <GLLogLayout>
@end

@interface GLLogPatternLayout : GLLogLayoutBase
@end

@interface GLSimpleLayout : GLLogLayoutBase
@end
