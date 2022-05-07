//
//  HTTPClient+SearchSug.h
//  WebBrowser
//
//  Created by 钟武 on 2016/11/14.
//  Copyright © 2021 by HKTalk. All rights reserved.
//

#import "HTTPClient.h"

@interface HTTPClient (SearchSug)

- (NSURLSessionDataTask *)getSugWithKeyword:(NSString *)keyword success:(HttpClientSuccessBlock)success fail:(HttpClientFailureBlock)fail;

@end
