//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFlyMSCView.h"

#import "IFlySpeechRecognizerDelegate.h"

@class IFlyCancelView, IFlyErrorView, IFlyIdentifyingView, IFlyRecordingView, IFlySpeechError, IFlySpeechRecognizer, NSString;

@interface IFlyRecognizerViewImp : IFlyMSCView <IFlySpeechRecognizerDelegate>
{
    IFlySpeechRecognizer *_iflySpeechRecognizer;
    IFlyRecordingView *_recordingView;
    IFlyErrorView *_errorView;
    IFlyCancelView *_cancelView;
    id <IFlyRecognizerViewImpDelegate> _delegate;
    _Bool _isCancel;
    _Bool _isError;
    IFlySpeechError *_iFlySpeechError;
    NSString *_ent;
    NSString *_params;
    NSString *_grammar;
    _Bool _iFlyTimerDisable;
    IFlyIdentifyingView *_identifyingVIew;
}

@property IFlyIdentifyingView *identifyingVIew; // @synthesize identifyingVIew=_identifyingVIew;
@property id <IFlyRecognizerViewImpDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)onResults:(id)arg1 isLast:(_Bool)arg2;
- (void)onCompleted:(id)arg1;
- (void)onCancel;
- (void)onVolumeChanged:(int)arg1;
- (void)onEndOfSpeech;
- (void)onBeginOfSpeech;
- (void)jumpToSafari;
- (void)becomeActive;
- (id)parameterForKey:(id)arg1;
- (_Bool)setParameter:(id)arg1 value:(id)arg2;
- (void)cancel;
- (_Bool)start;
- (void)onRigthButton;
- (void)onLeftButton:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCenter:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

