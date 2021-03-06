//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "CAAnimationDelegate.h"

@class CALayer, CAShapeLayer, NSString, UILabel, UIView;

@interface YMMSendGroupMsgLoadingView : YMMPopupMaskView <CAAnimationDelegate>
{
    _Bool _flag;
    NSString *_loadingTitle;
    NSString *_successTitle;
    unsigned long long _state;
    UIView *_animationBackView;
    CALayer *_animationLayer;
    UILabel *_stateLab;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_checkLayer;
}

@property(retain, nonatomic) CAShapeLayer *checkLayer; // @synthesize checkLayer=_checkLayer;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;
@property(retain, nonatomic) UILabel *stateLab; // @synthesize stateLab=_stateLab;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
@property(retain, nonatomic) UIView *animationBackView; // @synthesize animationBackView=_animationBackView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *successTitle; // @synthesize successTitle=_successTitle;
@property(copy, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;
- (void).cxx_destruct;
- (void)hide;
- (void)checkAnimation;
- (void)circleAnimation;
- (void)loadingOver;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)ymm_maskWillDisappear;
- (void)ymm_maskDidAppear;
- (void)layoutSubviews;
- (void)ymm_loadView;
- (void)show;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

