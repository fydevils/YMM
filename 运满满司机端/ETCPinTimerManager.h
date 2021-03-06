//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer;

@interface ETCPinTimerManager : NSObject
{
    _Bool _timerEnded;
    long long _secondsCountDown;
    id <ETCTimeChangeDelegate> _delegate;
    NSTimer *_timer;
    NSString *_title;
    double _enterBackGroundTime;
}

+ (id)shareManager;
@property(nonatomic) double enterBackGroundTime; // @synthesize enterBackGroundTime=_enterBackGroundTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool timerEnded; // @synthesize timerEnded=_timerEnded;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <ETCTimeChangeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long secondsCountDown; // @synthesize secondsCountDown=_secondsCountDown;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)updateUI;
- (void)timeRestart;
- (void)timepause;
- (void)timestop;
- (void)timestart;

@end

