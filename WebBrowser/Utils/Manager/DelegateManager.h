//
//  DelegateManager.h
//  WebBrowser
//
//  Created by 钟武 on 2017/1/1.
//  Copyright © 2017年 钟武. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BrowserWebView,BrowserWebView,FindInPageBar;

extern NSString *const kDelegateManagerWebView;
extern NSString *const kDelegateManagerBrowserContainerLoadURL;
extern NSString *const kDelegateManagerFindInPageBarDelegate;

#pragma mark - BrowserWebViewDelegate

@protocol BrowserWebViewDelegate <NSObject>

@optional
- (void)webViewDidStartLoad:(BrowserWebView *)webView;
- (void)webViewDidFinishLoad:(BrowserWebView *)webView;
- (void)webView:(BrowserWebView *)webView didFailLoadWithError:(NSError *)error;
- (void)webView:(BrowserWebView *)webView gotTitleName:(NSString*)titleName;
- (void)webViewForMainFrameDidCommitLoad:(BrowserWebView *)webView;
- (void)webViewForMainFrameDidFinishLoad:(BrowserWebView *)webView;
- (void)webView:(BrowserWebView *)webView didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)challenge;

@end


#pragma mark - BrowserContainerLoadURLDelegate

@protocol BrowserContainerLoadURLDelegate <NSObject>

@optional
//ContainerView Load URL Delegate
- (void)browserContainerViewLoadWebViewWithSug:(NSString *)text;

@end

#pragma mark - FindInPageBarDelegate

@protocol FindInPageBarDelegate <NSObject>

@optional
- (void)findInPage:(FindInPageBar *)findInPage didTextChange:(NSString *)text;
- (void)findInPage:(FindInPageBar *)findInPage didFindPreviousWithText:(NSString *)text;
- (void)findInPage:(FindInPageBar *)findInPage didFindNextWithText:(NSString *)text;
- (void)findInPageDidPressClose:(FindInPageBar *)findInPage;

@end

#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(DelegateManager)
@interface DelegateManager : NSObject

+ (DelegateManager *)sharedInstance API_AVAILABLE(ios(3.0), watchos(2.0), tvos(9.0)) API_UNAVAILABLE(macos);

- (void)registerDelegate:(id)delegate forKey:(NSString *)key;
- (void)registerDelegate:(id)delegate forKeys:(NSArray<NSString *> *)keys;
- (void)performSelector:(SEL)selector arguments:(NSArray *)arguments key:(NSString *)key;

@end
