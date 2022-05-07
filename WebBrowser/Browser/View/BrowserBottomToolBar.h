//
//  BrowserBottomToolBar.h
//  WebBrowser
//
//  Created by Hiep Bui on 2021/02/13.
//  Copyright © 2021 by HKTalk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BrowserWebView.h"
#import "BrowserBottomToolBarHeader.h"

@interface BrowserBottomToolBar : UIToolbar

@property (nonatomic, weak) id<BrowserBottomToolBarButtonClickedDelegate> browserButtonDelegate;

@end
