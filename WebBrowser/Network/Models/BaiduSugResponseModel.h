//
//  BaiduSugResponseModel.h
//  WebBrowser
//
//  Created by 钟武 on 2016/11/14.
//  Copyright © 2022 by Eric B. All rights reserved.
//

#import "BaseResponseModel.h"

@interface BaiduSugResponseModel : BaseResponseModel

@property (nonatomic, copy) NSString *keyword;
@property (nonatomic, copy) NSArray<NSString *> *sugArray;

@end
