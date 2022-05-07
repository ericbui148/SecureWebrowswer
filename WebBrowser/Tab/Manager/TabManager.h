//
//  TabManager.h
//  WebBrowser
//
//  Created by Hiep Bui on 2021/02/13.
//  Copyright © 2021 by HKTalk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BrowserContainerView.h"

@class WebModel, SessionData;

typedef void(^MultiWebViewOperationBlock)(NSArray<WebModel *> *);
typedef void(^CurWebViewOperationBlock)(WebModel *, BrowserWebView *);
typedef void(^WebBrowserNoParamsBlock)(void);
typedef void(^SwitchOperationBlock)(WebModel *preWebModel, WebModel *curWebModel);

@interface WebModel : NSObject <NSSecureCoding>

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *imageKey;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) BrowserWebView *webView;
@property (nonatomic, assign) BOOL isImageProcessed;
@property (nonatomic, strong) SessionData *sessionData;

@end

@class BrowserWebView;
#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(TabManager)
@interface TabManager : NSObject

@property (nonatomic, weak) BrowserContainerView *browserContainerView;

+ (TabManager *)sharedInstance API_AVAILABLE(ios(3.0), watchos(2.0), tvos(9.0)) API_UNAVAILABLE(macos);

- (void)setMultiWebViewOperationBlockWith:(MultiWebViewOperationBlock)block;
- (void)setCurWebViewOperationBlockWith:(CurWebViewOperationBlock)block;
- (void)switchToLeftWindowWithCompletion:(SwitchOperationBlock)block;
- (void)switchToRightWindowWithCompletion:(SwitchOperationBlock)block;
- (void)updateWebModelArray:(NSArray<WebModel *> *)webArray;
- (void)updateWebModelArray:(NSArray<WebModel *> *)webArray completion:(WebBrowserNoParamsBlock)block;
- (void)addWebModelWithURL:(NSURL *)url completion:(WebBrowserNoParamsBlock)completion;
- (void)saveWebModelData;
- (WebModel *)getCurrentWebModel;
- (BOOL)isCurrentWebView:(BrowserWebView *)webView;
- (void)stopLoadingCurrentWebView;
- (NSUInteger)numberOfTabs;

@end
