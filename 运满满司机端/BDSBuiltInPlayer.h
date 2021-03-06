//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSString;

@interface BDSBuiltInPlayer : NSObject <AVAudioPlayerDelegate>
{
    id <BDSBuiltInPlayerDelegate> _delegate;
    NSString *_audioSessionCategory;
    NSString *_audioTempFilePath;
    AVAudioPlayer *_avAudioPlayer;
}

+ (id)addCAFHeaderForPCMData:(id)arg1;
@property(retain, nonatomic) AVAudioPlayer *avAudioPlayer; // @synthesize avAudioPlayer=_avAudioPlayer;
@property(retain, nonatomic) NSString *audioTempFilePath; // @synthesize audioTempFilePath=_audioTempFilePath;
@property(copy, nonatomic) NSString *audioSessionCategory; // @synthesize audioSessionCategory=_audioSessionCategory;
@property(nonatomic) __weak id <BDSBuiltInPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stop;
- (void)resume;
- (void)pause;
- (_Bool)playContentsOfURL:(id)arg1 error:(id *)arg2;
- (_Bool)playPcmData:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

