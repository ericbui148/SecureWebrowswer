//
//  MenuHelper.m
//  WebBrowser
//
//  Created by 钟武 on 16/7/29.
//  Copyright © 2021 by HKTalk. All rights reserved.
//

#import "MenuHelper.h"
#define SYNTHESIZE_SINGLETON_FOR_CLASS(MenuHelper)

@implementation MenuHelper

- (void)setItems{
    NSString *findInPageTitle = @"页内查找";
    UIMenuItem *findInPageItem = [[UIMenuItem alloc] initWithTitle:findInPageTitle action:@selector(menuHelperFindInPage)];
    
    NSString *findInBaidu = @"百度搜索";
    UIMenuItem *findInBaiduItem = [[UIMenuItem alloc] initWithTitle:findInBaidu action:@selector(menuHelperFindInBaidu)];

    [UIMenuController sharedMenuController].menuItems = @[findInPageItem, findInBaiduItem];

}

@end
