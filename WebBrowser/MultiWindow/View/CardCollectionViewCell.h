//
//  CardCollectionViewCell.h
//  WebBrowser
//
//  Created by 钟武 on 2016/12/20.
//  Copyright © 2022 by Eric B. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CardMainView;
@class WebModel;

typedef void(^CloseBlock)(NSIndexPath *indexPath);

@interface CardCollectionViewCell : UICollectionViewCell

@property (nonatomic, copy) CloseBlock closeBlock;
@property (nonatomic, weak) UICollectionView *collectionView;

- (void)updateWithWebModel:(WebModel *)webModel;

@end
