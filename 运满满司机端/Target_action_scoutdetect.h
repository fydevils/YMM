//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMSchemeBaseProtocol.h"

@class CMMotionManager, NSArray, NSString, YMMAlertView;

@interface Target_action_scoutdetect : NSObject <YMMSchemeBaseProtocol>
{
    NSArray *_securityScounts;
    CMMotionManager *_motionManager;
    YMMAlertView *_motionAlertView;
}

@property(retain, nonatomic) YMMAlertView *motionAlertView; // @synthesize motionAlertView=_motionAlertView;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSArray *securityScounts; // @synthesize securityScounts=_securityScounts;
- (void).cxx_destruct;
- (id)Action_view:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

