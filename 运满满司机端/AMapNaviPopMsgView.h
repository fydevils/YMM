//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AMapNaviTimerTarget, NSTimer, UILabel;

@interface AMapNaviPopMsgView : UIView
{
    UILabel *_messageLabel;
    NSTimer *_myTimer;
    AMapNaviTimerTarget *_timerTarget;
}

@property(retain, nonatomic) AMapNaviTimerTarget *timerTarget; // @synthesize timerTarget=_timerTarget;
@property(retain, nonatomic) NSTimer *myTimer; // @synthesize myTimer=_myTimer;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)animationFade;
- (struct CGSize)widthWithText:(id)arg1 size:(struct CGSize)arg2 font:(id)arg3;
- (void)showMsg:(id)arg1 inSuperview:(id)arg2;
- (void)dealloc;
- (void)setUp;
- (id)init;

@end

