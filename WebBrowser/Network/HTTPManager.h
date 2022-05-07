//
//  HTTPManager.h
//  ZhihuDaily
//
//  Created by 钟武 on 16/8/3.
//  Copyright © 2021 by HKTalk. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BaseResponseModel;

@interface HTTPManager : NSObject

- (NSURLSessionDataTask *)GET:(NSString *)URLPath
                     parameters:(NSDictionary *)parameters
                     modelClass:(Class)modelClass
                        success:(void (^)(NSURLSessionDataTask *task, BaseResponseModel *model))success
                        failure:(void (^)(NSURLSessionDataTask *task, BaseResponseModel *model))failure;
- (void)getImageWithURL:(NSURL *)url completion:(void (^)(UIImage *image, NSError *error))completion;

@end
