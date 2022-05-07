//
//  HttpHelper.h
//  WebBrowser
//
//  Created by 钟武 on 2016/11/10.
//  Copyright © 2021 by Eric B. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HttpHelper : NSObject

+ (BOOL)canAppHandleURL:(NSURL *)url;

+ (BOOL)isURL:(NSString *)content;

@end
