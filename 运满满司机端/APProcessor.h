//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APProcessor : NSObject
{
    CDUnknownBlockType _routeBlock;
    CDUnknownBlockType _tidrouteBlock;
    CDUnknownBlockType _inforouteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType inforouteBlock; // @synthesize inforouteBlock=_inforouteBlock;
@property(copy, nonatomic) CDUnknownBlockType tidrouteBlock; // @synthesize tidrouteBlock=_tidrouteBlock;
@property(copy, nonatomic) CDUnknownBlockType routeBlock; // @synthesize routeBlock=_routeBlock;
- (void).cxx_destruct;
- (id)processJSCommand:(id)arg1;
- (id)analyseJSCommand:(id)arg1;
- (long long)getZipTypeFromHeader:(id)arg1;
- (_Bool)needUpdatePublicKeyWithJson:(id)arg1;
- (id)processDataWithJson:(id)arg1;
- (id)parseResponseDict:(id)arg1;
- (id)processRepData:(id)arg1 zipType:(long long)arg2 infoData:(struct APTaskInfoData)arg3 isLogReq:(_Bool)arg4;
- (id)gzipDecompressWithData:(id)arg1;
- (id)gzipCompressWithData:(id)arg1;
- (id)deCryptGzipData:(id)arg1 zipType:(long long)arg2 info:(struct APTaskInfoData)arg3 isLogReq:(_Bool)arg4;
- (id)enCryptGzipData:(id)arg1 zipType:(long long *)arg2 info:(struct APTaskInfoData)arg3;
- (id)gentidActionDic;
- (id)infoActionDic;
- (id)mainActionDic;
- (id)netUtilDic:(_Bool)arg1;
- (id)utdid;
- (void)setDeviceInfo:(id)arg1;
- (id)reqDataWithProto:(id)arg1 andParam:(id)arg2 andZipType:(long long *)arg3 info:(struct APTaskInfoData)arg4;
- (id)reqDataWithLogDict:(id)arg1 zipType:(long long *)arg2 info:(struct APTaskInfoData)arg3;
- (id)reqDataWithBizDict:(id)arg1 actDict:(id)arg2 zipType:(long long *)arg3 info:(struct APTaskInfoData)arg4 newApiVer:(_Bool)arg5;
- (void)postReqWithUrl:(id)arg1 showLoading:(_Bool)arg2 isLogReq:(_Bool)arg3 infoData:(struct APTaskInfoData)arg4 headerDict:(id)arg5 requestData:(id)arg6 success:(CDUnknownBlockType)arg7 fail:(CDUnknownBlockType)arg8;
- (void)procLogReqInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)callbackWithReqType:(id)arg1 result:(id)arg2;
- (void)procBizReqInfo:(id)arg1 reqType:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)processLog:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)processGetConfigInfo:(CDUnknownBlockType)arg1;
- (void)processGenTid:(CDUnknownBlockType)arg1;
- (void)processOrder:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

