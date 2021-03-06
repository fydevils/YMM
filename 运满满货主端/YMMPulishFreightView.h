//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSNumber, YMMPublishBaseInfoView, YMMPublishBaseInfoViewModel, YMMPublishOptionsView;

@interface YMMPulishFreightView : UIView
{
    unsigned long long _weightCapacityType;
    NSNumber *_freightUnit;
    CDUnknownBlockType _didSelectIndex;
    YMMPublishBaseInfoView *_settlementView;
    YMMPublishBaseInfoViewModel *_settlementViewModel;
    YMMPublishOptionsView *_optionsView;
    UIView *_topLineView;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) YMMPublishOptionsView *optionsView; // @synthesize optionsView=_optionsView;
@property(retain, nonatomic) YMMPublishBaseInfoViewModel *settlementViewModel; // @synthesize settlementViewModel=_settlementViewModel;
@property(retain, nonatomic) YMMPublishBaseInfoView *settlementView; // @synthesize settlementView=_settlementView;
@property(copy, nonatomic) CDUnknownBlockType didSelectIndex; // @synthesize didSelectIndex=_didSelectIndex;
@property(retain, nonatomic) NSNumber *freightUnit; // @synthesize freightUnit=_freightUnit;
@property(nonatomic) unsigned long long weightCapacityType; // @synthesize weightCapacityType=_weightCapacityType;
- (void).cxx_destruct;
- (id)renderOptionsViewModel:(long long)arg1;
- (id)optionsViewModel;
- (void)updateViewConstraints;
- (void)initConstraints;
- (void)initUI;
- (float)widthWithText:(id)arg1 font:(id)arg2;
- (void)bindingModel:(id)arg1;
- (void)dealloc;
- (id)init;

@end

