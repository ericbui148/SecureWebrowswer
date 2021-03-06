//
//  HttpHelper.m
//  WebBrowser
//
//  Created by 钟武 on 2016/11/10.
//  Copyright © 2022 by Eric B. All rights reserved.
//

#import "HttpHelper.h"
#import "NSString+ZWUtility.h"

@implementation HttpHelper

+ (BOOL)canAppHandleURL:(NSURL *)url{
    if (([url.scheme isEqualToString:@"http"] || [url.scheme isEqualToString:@"https"]) && [url.host isEqualToString:@"itunes.apple.com"]) {
        return YES;
    }
    return [[UIApplication sharedApplication] canOpenURL:url];
}

+ (BOOL)isURL:(NSString *)content{
    if(content && [content length] > 0)
    {
        if([content hasPrefix:@"http://"] || [content hasPrefix:@"https://"])
        {
            return YES;
        }
        else
        {
            NSURL* url = [NSURL URLWithString:content];
            if(!url)
                return NO;
            
            return [content isValidURL];
        }
    }

    return NO;
}

@end
