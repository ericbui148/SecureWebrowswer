//
//  KeyboardHelper.h
//  WebBrowser
//
//  Created by 钟武 on 16/7/29.
//  Copyright © 2022 by Eric B. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KeyboardHelper,KeyboardState;

@protocol KeyboardHelperDelegate <NSObject>

@optional
- (void)keyboardHelper:(KeyboardHelper *)keyboardHelper keyboardWillShowWithState:(KeyboardState *)state;
- (void)keyboardHelper:(KeyboardHelper *)keyboardHelper keyboardDidShowWithState:(KeyboardState *)state;
- (void)keyboardHelper:(KeyboardHelper *)keyboardHelper keyboardWillHideWithState:(KeyboardState *)state;

@end

@interface KeyboardState : NSObject

@property (nonatomic, assign) double animationDuration;
@property (nonatomic, assign) UIViewAnimationCurve animationCurve;
@property (nonatomic, copy) NSDictionary *userInfo;

- (CGFloat)intersectionHeightForView:(UIView *)view;

@end

#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(KeyboardHelper)
@interface KeyboardHelper : NSObject


- (void)startObserving;
- (void)addDelegate:(id<KeyboardHelperDelegate>)delegate;
- (void)removeDelegate:(id<KeyboardHelperDelegate>)delegate;

@end
