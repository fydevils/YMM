//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMIMSDKCommonNetworkTask.h"

@class NSArray, NSString;

@interface YFSetCustomerMsgReadTask : YMMIMSDKCommonNetworkTask
{
    int _conversationType;
    NSString *_fromUid;
    NSString *_toUid;
    NSArray *_ocsUserReads;
}

@property(retain, nonatomic) NSArray *ocsUserReads; // @synthesize ocsUserReads=_ocsUserReads;
@property(nonatomic) int conversationType; // @synthesize conversationType=_conversationType;
@property(copy, nonatomic) NSString *toUid; // @synthesize toUid=_toUid;
@property(copy, nonatomic) NSString *fromUid; // @synthesize fromUid=_fromUid;
- (void).cxx_destruct;
- (id)initWithFromUid:(id)arg1 to:(id)arg2 conversationType:(long long)arg3 messages:(id)arg4;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

