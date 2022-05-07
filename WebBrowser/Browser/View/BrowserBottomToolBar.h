//
//  BrowserBottomToolBar.h
//  WebBrowser
//
//  Created by Eric B on 2022/02/13.
//  Copyright © 2022 by Eric B. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BrowserWebView.h"
#import "BrowserBottomToolBarHeader.h"

@interface BrowserBottomToolBar : UIToolbar

@property (nonatomic, weak) id<BrowserBottomToolBarButtonClickedDelegate> browserButtonDelegate;

@end
