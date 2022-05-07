//
//  HTTPURLConfiguration.m
//  ZhihuDaily
//
//  Created by 钟武 on 16/8/3.
//  Copyright © 2021 by Eric B. All rights reserved.
//

#import "HTTPURLConfiguration.h"
#define SYNTHESIZE_SINGLETON_FOR_CLASS(HTTPURLConfiguration)
@interface HTTPURLConfiguration ()

@property (nonatomic, copy) NSString *baiduDomain;

@end

@implementation HTTPURLConfiguration

- (id)init{
    if (self = [super init]) {
        _baiduDomain = @"https://m.baidu.com/su?&from=wise_web&action=opensearch&ie=utf-8&wd=";
    }
    
    return self;
}

- (NSString *)baiduURLWithPath:(NSString *)path{
    if (!path) {
        return nil;
    }
    return [self.baiduDomain stringByAppendingString:[path stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]];
}

@end
