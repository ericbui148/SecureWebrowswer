//
//  BrowserViewController.h
//  WebBrowser
//
//  Created by Hiep Bui on 2021/02/13.
//  Copyright © 2021 by Eric B. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(BrowserViewController)
@interface BrowserViewController : BaseViewController<UIScrollViewDelegate>
+ (BrowserViewController *)sharedInstance API_AVAILABLE(ios(3.0), watchos(2.0), tvos(9.0)) API_UNAVAILABLE(macos);
- (void)findInPageDidUpdateCurrentResult:(NSInteger)currentResult;
- (void)findInPageDidUpdateTotalResults:(NSInteger)totalResults;
- (void)findInPageDidSelectForSelection:(NSString *)selection;

@end
