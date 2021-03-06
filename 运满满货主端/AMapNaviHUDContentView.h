//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AMapNaviHUDLineView, AMapNaviSpeedTipView, NSMutableDictionary, UIImageView, UILabel;

@interface AMapNaviHUDContentView : UIView
{
    _Bool _showRemainDistance;
    _Bool _showRemainTime;
    _Bool _needUpdateViewConstraints;
    long long _state;
    id <AMapNaviHUDContentViewState> _viewState;
    NSMutableDictionary *_statesCache;
    UIImageView *_logoImage;
    UILabel *_turnRemainLabel;
    UIImageView *_turnIconView;
    UILabel *_toRoadLabel;
    UILabel *_remainTimeLabel;
    UIImageView *_remainTimeImage;
    UILabel *_remainDisLabel;
    UIImageView *_remainDisImage;
    UIView *_splitView;
    AMapNaviHUDLineView *_leftView;
    AMapNaviHUDLineView *_rightView;
    AMapNaviSpeedTipView *_speedView;
}

@property(retain, nonatomic) AMapNaviSpeedTipView *speedView; // @synthesize speedView=_speedView;
@property(retain, nonatomic) AMapNaviHUDLineView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) AMapNaviHUDLineView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) UIImageView *remainDisImage; // @synthesize remainDisImage=_remainDisImage;
@property(retain, nonatomic) UILabel *remainDisLabel; // @synthesize remainDisLabel=_remainDisLabel;
@property(retain, nonatomic) UIImageView *remainTimeImage; // @synthesize remainTimeImage=_remainTimeImage;
@property(retain, nonatomic) UILabel *remainTimeLabel; // @synthesize remainTimeLabel=_remainTimeLabel;
@property(retain, nonatomic) UILabel *toRoadLabel; // @synthesize toRoadLabel=_toRoadLabel;
@property(retain, nonatomic) UIImageView *turnIconView; // @synthesize turnIconView=_turnIconView;
@property(retain, nonatomic) UILabel *turnRemainLabel; // @synthesize turnRemainLabel=_turnRemainLabel;
@property(retain, nonatomic) UIImageView *logoImage; // @synthesize logoImage=_logoImage;
@property(nonatomic) _Bool needUpdateViewConstraints; // @synthesize needUpdateViewConstraints=_needUpdateViewConstraints;
@property(retain, nonatomic) NSMutableDictionary *statesCache; // @synthesize statesCache=_statesCache;
@property(retain, nonatomic) id <AMapNaviHUDContentViewState> viewState; // @synthesize viewState=_viewState;
@property(nonatomic) _Bool showRemainTime; // @synthesize showRemainTime=_showRemainTime;
@property(nonatomic) _Bool showRemainDistance; // @synthesize showRemainDistance=_showRemainDistance;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)removeAllSubViews;
- (void)setDefaultNaviInfoValues;
- (void)updateHUDContentViewCameraWithCameraInfos:(id)arg1;
- (void)updateHUDContentViewWithNaviInfo:(id)arg1;
- (id)viewStateForState:(long long)arg1;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)buildHUDContentView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

