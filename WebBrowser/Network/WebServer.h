//
//  WebServer.h
//  WebBrowser
//
//  Created by 钟武 on 2017/2/16.
//  Copyright © 2017年 钟武. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GCDWebServer/GCDWebServer.h>

typedef GCDWebServerResponse *(^ServerBlock)(GCDWebServerRequest *);
#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(WebServer)
@interface WebServer : NSObject
+ (WebServer *)sharedInstance API_AVAILABLE(ios(3.0), watchos(2.0), tvos(9.0)) API_UNAVAILABLE(macos);
- (BOOL)start;
- (NSString *)base;
- (void)registerHandlerForMethod:(NSString *)method module:(NSString *)module resource:(NSString *)resource handler:(ServerBlock)handler;
- (void)registerMainBundleResource:(NSString *)resource module:(NSString *)module;
- (void)registerMainBundleResourcesOfType:(NSString *)type module:(NSString *)module;

@end
