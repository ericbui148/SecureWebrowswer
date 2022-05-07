//
//  HTTPClient+SearchSug.m
//  WebBrowser
//
//  Created by 钟武 on 2016/11/14.
//  Copyright © 2022 by Eric B. All rights reserved.
//

#import "HTTPClient+SearchSug.h"
#import "HTTPURLConfiguration.h"
#import "HTTPManager.h"
#import "BaiduSugResponseModel.h"

@implementation HTTPClient (SearchSug)

- (NSURLSessionDataTask *)getSugWithKeyword:(NSString *)keyword success:(HttpClientSuccessBlock)success fail:(HttpClientFailureBlock)fail{
    NSString *relativePath = [[HTTPURLConfiguration init] baiduURLWithPath:keyword];
    
    return [self.httpManager GET:relativePath parameters:nil modelClass:[BaiduSugResponseModel class] success:success failure:fail];
}

@end
