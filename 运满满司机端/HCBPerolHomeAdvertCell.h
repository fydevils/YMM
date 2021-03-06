//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "HCBCycleScrollViewDelegate.h"

@class HCBPetrolCycleScrollView, NSArray, NSString, UIView;

@interface HCBPerolHomeAdvertCell : UITableViewCell <HCBCycleScrollViewDelegate>
{
    CDUnknownBlockType _actionAdClicked;
    UIView *_viewAdvert;
    HCBPetrolCycleScrollView *_adView;
    NSArray *_adDatas;
}

@property(retain, nonatomic) NSArray *adDatas; // @synthesize adDatas=_adDatas;
@property(retain, nonatomic) HCBPetrolCycleScrollView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak UIView *viewAdvert; // @synthesize viewAdvert=_viewAdvert;
@property(copy, nonatomic) CDUnknownBlockType actionAdClicked; // @synthesize actionAdClicked=_actionAdClicked;
- (void).cxx_destruct;
- (id)convertImageURLsFromAdvertModels:(id)arg1;
- (void)cycleScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)cycleScrollView:(id)arg1 didScrollToIndex:(long long)arg2;
- (void)configureCellWithAdDatas:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

