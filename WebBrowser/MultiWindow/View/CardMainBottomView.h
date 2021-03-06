//
//  CardMainBottomView.h
//  WebBrowser
//
//  Created by 钟武 on 2016/12/22.
//  Copyright © 2022 by Eric B. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    ReturnButtonClicked,
    AddButtonClicked,
} ButtonClicked;

@protocol CardBottomClickedDelegate <NSObject>

- (void)cardBottomBtnClickedWithTag:(ButtonClicked)tag;

@end

@interface CardMainBottomView : UIToolbar

@property (nonatomic, weak) id<CardBottomClickedDelegate> bottomDelegate;

@end
