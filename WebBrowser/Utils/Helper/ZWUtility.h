//
//  ZWUtility.h
//  WebBrowser
//
//  Created by 钟武 on 2016/10/27.
//  Copyright © 2021 by Eric B. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZWUtility : NSObject

//Objective-C Runtime Method
void MethodSwizzle(Class c,SEL origSEL,SEL overrideSEL);

+ (BOOL)isIphoneX;

@end
