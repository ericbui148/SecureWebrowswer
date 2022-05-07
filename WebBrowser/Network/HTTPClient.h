//
//  HTTPClient.h
//  ZhihuDaily
//
//  Created by 钟武 on 16/8/3.
//  Copyright © 2021 by Eric B. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HTTPManager;
@class BaseResponseModel;

typedef void (^HttpClientSuccessBlock)(NSURLSessionDataTask *task, BaseResponseModel *model);
typedef void (^HttpClientImageSuccessBlock)(UIImage *image, NSError *error);
typedef void (^HttpClientFailureBlock)(NSURLSessionDataTask *task, BaseResponseModel *model);
@interface HTTPClient : NSObject
@property (nonatomic, strong, readonly) HTTPManager *httpManager;
+ (HTTPClient *)sharedInstance API_AVAILABLE(ios(3.0), watchos(2.0), tvos(9.0)) API_UNAVAILABLE(macos);
- (void)getImageWithURL:(NSURL *)url completion:(HttpClientImageSuccessBlock)completion;

@end
