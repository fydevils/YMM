//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class NSString, YMMAlertView;

@interface YMMBaseStationAlert : NSObject <MFMessageComposeViewControllerDelegate>
{
    CDUnknownBlockType _showedBlock;
    CDUnknownBlockType _noShowBlock;
    CDUnknownBlockType _closeBlock;
    YMMAlertView *_stationAlert;
}

@property(retain, nonatomic) YMMAlertView *stationAlert; // @synthesize stationAlert=_stationAlert;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType noShowBlock; // @synthesize noShowBlock=_noShowBlock;
@property(copy, nonatomic) CDUnknownBlockType showedBlock; // @synthesize showedBlock=_showedBlock;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)agree;
- (void)showAlert:(id)arg1 content:(id)arg2;
- (void)requestApi:(CDUnknownBlockType)arg1 noShowBlock:(CDUnknownBlockType)arg2 closeBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

