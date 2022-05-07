//
//  TopToolBarShapeView.h
//  WebBrowser
//
//  Created by 钟武 on 2016/10/12.
//  Copyright © 2022 by Eric B. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TopToolBarShapeView : UIView

@property (nonatomic, readonly) CAShapeLayer *shapeLayer;

- (void)setTopURLOrTitle:(NSString *)urlOrTitle;

@end
