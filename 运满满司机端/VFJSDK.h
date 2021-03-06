//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDAsyncSocket, NSMutableDictionary, NSString;

@interface VFJSDK : NSObject
{
    unsigned short _vfj_port;
    GCDAsyncSocket *_clientSocket;
    GCDAsyncSocket *_acceptedServerSocket;
    NSString *_vfj_host;
    double _vfj_timeout;
    NSString *_vfj_terminalID;
    NSString *_vfj_netNodeID;
    long long _vfj_trace;
    long long _vfj_traceflag;
    NSString *_vfj_version;
    NSMutableDictionary *_vfj_socketheadlength;
    NSMutableDictionary *_vfj_curLoadInfo;
    long long _vfj_state;
    CDUnknownBlockType _vfj_CallBack;
    long long _signedVfj;
}

+ (id)sharedVFJSDK;
@property(nonatomic) long long signedVfj; // @synthesize signedVfj=_signedVfj;
@property(copy, nonatomic) CDUnknownBlockType vfj_CallBack; // @synthesize vfj_CallBack=_vfj_CallBack;
@property(nonatomic) long long vfj_state; // @synthesize vfj_state=_vfj_state;
@property(retain, nonatomic) NSMutableDictionary *vfj_curLoadInfo; // @synthesize vfj_curLoadInfo=_vfj_curLoadInfo;
@property(retain, nonatomic) NSMutableDictionary *vfj_socketheadlength; // @synthesize vfj_socketheadlength=_vfj_socketheadlength;
@property(retain, nonatomic) NSString *vfj_version; // @synthesize vfj_version=_vfj_version;
@property(nonatomic) long long vfj_traceflag; // @synthesize vfj_traceflag=_vfj_traceflag;
@property(nonatomic) long long vfj_trace; // @synthesize vfj_trace=_vfj_trace;
@property(retain, nonatomic) NSString *vfj_netNodeID; // @synthesize vfj_netNodeID=_vfj_netNodeID;
@property(retain, nonatomic) NSString *vfj_terminalID; // @synthesize vfj_terminalID=_vfj_terminalID;
@property(nonatomic) double vfj_timeout; // @synthesize vfj_timeout=_vfj_timeout;
@property(nonatomic) unsigned short vfj_port; // @synthesize vfj_port=_vfj_port;
@property(retain, nonatomic) NSString *vfj_host; // @synthesize vfj_host=_vfj_host;
@property(retain, nonatomic) GCDAsyncSocket *acceptedServerSocket; // @synthesize acceptedServerSocket=_acceptedServerSocket;
@property(retain, nonatomic) GCDAsyncSocket *clientSocket; // @synthesize clientSocket=_clientSocket;
- (void).cxx_destruct;
- (void)packetBackMessageWithException:(id)arg1;
- (void)packetMessageIsNil;
- (void)packetMessageWithException:(id)arg1;
- (void)vfjPacketHandle:(id)arg1 withOriginal:(id)arg2;
- (id)packageSocketMessage:(id)arg1 withTag:(long long)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)vfj_communicationWithPararms:(id)arg1 withState:(long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)vfj_communicationInstructWithPararms:(id)arg1 withState:(long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)connectVFJ;
- (void)initWithTerminalId:(id)arg1 withNetNodeId:(id)arg2 withModel:(long long)arg3;

@end

