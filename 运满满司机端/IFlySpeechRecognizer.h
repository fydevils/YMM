//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFlySpeechRecognizerDelegate.h"

@class IFlyISRParam, IFlyMscRecognizer, IFlyStreamRecognizer, NSMutableArray, NSOperationQueue, NSString;

@interface IFlySpeechRecognizer : NSObject <IFlySpeechRecognizerDelegate>
{
    NSOperationQueue *iflySpeechQueue;
    _Bool _isListening;
    id <IFlySpeechRecognizerDelegate> _delegate;
    IFlyISRParam *_isrParam;
    NSString *_sampleRate;
    IFlyMscRecognizer *_mscer;
    IFlyStreamRecognizer *_streamMscer;
    NSMutableArray *_mscerQueue;
}

+ (id)sharedInstance;
@property(retain) NSMutableArray *mscerQueue; // @synthesize mscerQueue=_mscerQueue;
@property(retain) IFlyStreamRecognizer *streamMscer; // @synthesize streamMscer=_streamMscer;
@property(retain) IFlyMscRecognizer *mscer; // @synthesize mscer=_mscer;
@property(retain) NSString *sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain) IFlyISRParam *isrParam; // @synthesize isrParam=_isrParam;
@property(nonatomic) id <IFlySpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)buildGrammarCompletionHandler:(CDUnknownBlockType)arg1 grammarType:(id)arg2 grammarContent:(id)arg3;
- (void)onCancel;
- (void)onCompleted:(id)arg1;
- (void)onResults:(id)arg1 isLast:(_Bool)arg2;
- (void)onEvent:(int)arg1 arg0:(int)arg2 arg1:(int)arg3 data:(id)arg4;
- (void)onVolumeChanged:(int)arg1;
- (void)onEndOfSpeech;
- (void)onBeginOfSpeech;
- (void)cancel;
- (void)stopListening;
- (_Bool)writeAudio:(id)arg1;
- (_Bool)recognizeStream;
- (_Bool)isStreamSource;
@property(readonly, nonatomic) _Bool isListening;
- (id)parameterForKey:(id)arg1;
- (_Bool)setParameter:(id)arg1 forKey:(id)arg2;
- (_Bool)startListening:(id)arg1 grammar:(id)arg2;
- (_Bool)runService;
- (void)startListeningThread;
- (_Bool)startListening;
- (void)dealloc;
- (_Bool)destroy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

