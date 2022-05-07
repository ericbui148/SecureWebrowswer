//
//  MenuHelper.h
//  WebBrowser
//
//  Created by 钟武 on 16/7/29.
//  Copyright © 2022 by Eric B. All rights reserved.
//

#import <Foundation/Foundation.h>
#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(MenuHelper)
@protocol MenuHelperInterface <NSObject>

@optional

- (void)menuHelperFindInPage;
- (void)menuHelperFindInBaidu;

@end

@interface MenuHelper : NSObject

- (void)setItems;

@end
