//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSString;

@interface YMMAudioPlayerUtil : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_player;
    CDUnknownBlockType playFinish;
}

+ (id)sharedInstance;
+ (void)stopCurrentPlaying;
+ (void)asyncPlayingWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)playingFilePath;
+ (_Bool)isPlaying;
- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)dealloc;
- (void)stopCurrentPlaying;
- (void)asyncPlayingWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)playingFilePath;
- (_Bool)isPlaying;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

