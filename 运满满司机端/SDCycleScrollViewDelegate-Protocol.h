//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SDCycleScrollView, UICollectionViewCell, UINib;

@protocol SDCycleScrollViewDelegate <NSObject>

@optional
- (void)setupCustomCell:(UICollectionViewCell *)arg1 forIndex:(long long)arg2 cycleScrollView:(SDCycleScrollView *)arg3;
- (UINib *)customCollectionViewCellNibForCycleScrollView:(SDCycleScrollView *)arg1;
- (Class)customCollectionViewCellClassForCycleScrollView:(SDCycleScrollView *)arg1;
- (void)cycleScrollView:(SDCycleScrollView *)arg1 didScrollToIndex:(long long)arg2;
- (void)cycleScrollView:(SDCycleScrollView *)arg1 didSelectItemAtIndex:(long long)arg2;
@end

