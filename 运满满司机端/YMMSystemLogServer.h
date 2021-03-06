//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSString;

@interface YMMSystemLogServer : NSObject
{
    _Bool _isFirstServer;
    NSString *_serverURL;
    CDUnknownBlockType _serverResult;
    NSMutableString *_tempLog;
    long long _logType;
    long long _journalType;
}

@property(nonatomic) _Bool isFirstServer; // @synthesize isFirstServer=_isFirstServer;
@property(nonatomic) long long journalType; // @synthesize journalType=_journalType;
@property(nonatomic) long long logType; // @synthesize logType=_logType;
@property(retain, nonatomic) NSMutableString *tempLog; // @synthesize tempLog=_tempLog;
@property(copy, nonatomic) CDUnknownBlockType serverResult; // @synthesize serverResult=_serverResult;
@property(readonly, copy, nonatomic) NSString *serverURL; // @synthesize serverURL=_serverURL;
- (void).cxx_destruct;
- (void)redirectNotificationHandle:(id)arg1;
- (void)redirectSTD:(int)arg1;
- (void)stopLogServer;
- (void)startLogServer;

@end

