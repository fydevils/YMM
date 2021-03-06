//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString;

@interface AudioBufPlayer : NSObject
{
    _Bool isListeningInterruptions;
    struct OpaqueAudioFileStreamID *audioFileStream;
    struct OpaqueAudioQueue *audioQueue;
    struct AudioQueueBuffer *audioQueueBuffer[20];
    _Bool FreeAudioQueueBuffers[20];
    NSMutableData *tmpAudioBuffer;
    unsigned int descIndex;
    struct AudioStreamPacketDescription packetDescs[512];
    struct _opaque_pthread_cond_t playerStatusCondition;
    struct _opaque_pthread_mutex_t playerStatusMutex;
    unsigned short playerStatus;
    unsigned long long receivedSamples;
    double receivedAudioLength;
    double _sampleRate;
    unsigned long long SamplesPerPacket;
    int _currentFormat;
    _Bool _AVSessionManagmentEnabled;
    float _volume;
    unsigned long long _audioCategoryOptions;
    NSString *_audioCategory;
    id <AudioBufPlayerDelegate> _delegate;
    double _reportAudioLenOffset;
    long long _audioSessionSetCount;
}

+ (void)SetAudioSessionActivationStatus:(_Bool)arg1 isManagementEnabled:(_Bool)arg2;
@property long long audioSessionSetCount; // @synthesize audioSessionSetCount=_audioSessionSetCount;
@property double reportAudioLenOffset; // @synthesize reportAudioLenOffset=_reportAudioLenOffset;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) __weak id <AudioBufPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property _Bool AVSessionManagmentEnabled; // @synthesize AVSessionManagmentEnabled=_AVSessionManagmentEnabled;
@property unsigned long long audioCategoryOptions; // @synthesize audioCategoryOptions=_audioCategoryOptions;
- (void).cxx_destruct;
- (void)NotifyDelegate_speechPlayerDidFinished;
- (void)NotifyDelegate_speechPlayerDidResumed;
- (void)NotifyDelegate_speechPlayerDidPaused:(int)arg1;
- (void)NotifyDelegate_speechPlayerPlayProgressChanged:(double)arg1;
- (void)notifyDelegateOfError:(int)arg1 errorDescription:(id)arg2;
- (void)resumeIfNeeded;
- (void)pauseIfNeeded;
- (unsigned long long)calculateNextProgressPollTime:(double)arg1;
- (void)outputPlayProgress;
- (void)beginPlaying;
- (void)enqueData:(id)arg1 withDescriptions:(struct AudioStreamPacketDescription *)arg2 packetNumber:(unsigned int)arg3;
- (int)openAudioQueueWithDescription:(struct AudioStreamBasicDescription)arg1;
- (void)setPlayerStopped;
- (void)resetAudioQueue;
- (void)setOrResetAVSession:(_Bool)arg1;
- (void)updateAudioCategory:(id)arg1;
- (void)updateAudioCategoryOptions:(unsigned long long)arg1;
- (void)updateAVSessionManagementEnabled:(_Bool)arg1;
- (int)receiveSupportedStreamPackage:(id)arg1 ofType:(unsigned int)arg2;
- (int)receivePCM16KStream:(id)arg1;
- (int)receivePCM8KStream:(id)arg1;
- (int)receiveMP3Stream:(id)arg1;
- (int)initStreamForAudioStreamFormat:(unsigned int)arg1;
- (int)initStreamForPCM:(double)arg1;
- (void)routeChange:(id)arg1;
- (void)audioSessionInterrupted:(id)arg1;
- (void)AudioQueue:(struct OpaqueAudioQueue *)arg1 newRunningState:(_Bool)arg2;
- (void)AudioQueue:(struct OpaqueAudioQueue *)arg1 releasedBuffer:(struct AudioQueueBuffer *)arg2;
- (void)AudioPacketsFoundCallback:(unsigned int)arg1 packetCount:(unsigned int)arg2 AudioData:(const void *)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4 fromAudioStream:(struct OpaqueAudioFileStreamID *)arg5;
- (void)updateProgressEstimations:(unsigned int)arg1;
- (void)AudioPropertyFoundForStream:(struct OpaqueAudioFileStreamID *)arg1 propertyID:(unsigned int)arg2 Flags:(unsigned int *)arg3;
- (void)stop;
- (void)start;
- (void)resume;
- (void)pause;
- (int)appendAudioData:(id)arg1 audioFormat:(int)arg2 withDelegate:(id)arg3 audioOffset:(double)arg4;
- (int)playData:(id)arg1 audioFormat:(int)arg2 withDelegate:(id)arg3 audioOffset:(double)arg4;
- (void)dealloc;
- (id)initWithAudioSessionCategory:(id)arg1 audioSessionCategoryOptions:(unsigned long long)arg2 enableAudioSesionManagement:(_Bool)arg3;

@end

