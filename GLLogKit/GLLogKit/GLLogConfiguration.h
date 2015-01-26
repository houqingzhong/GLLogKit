//
//  GLLogConfiguration.h
//  GLLogKit
//
//  Created by Gang Li on 1/26/15.
//  Copyright (c) 2015 Batrixmas. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSInteger, GLLoggingOutputOption) {
    GLLoggingFileOutput = 1 << 0,
    GLLoggingConsoleOutput = 1 << 1,
    GLLoggingNetworkUploadStreamOutput = 1 << 2
};

@interface GLLogConfiguration : NSObject
@property(nonatomic, assign) GLLoggingOutputOption outputOption;

@end


@protocol GLLogConfigurationLoader <NSObject>

@end

@interface GLLogConfigurationLoaderBase : NSObject <GLLogConfigurationLoader>

@end

@interface GLJSONConfigurationLoader : GLLogConfigurationLoaderBase

@end

@interface GLXMLConfigurationLoader : GLLogConfigurationLoaderBase

@end

@interface GLPropertyListConfigurationLoader : GLLogConfigurationLoaderBase

@end

