//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface YMMRegisterVerifyTask : YMMCommonNetworkTask
{
    NSString *_telephone;
    NSString *_verifyCode;
    long long _from;
    NSString *_token;
    long long _version;
    long long _userType;
}

@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)init;
- (id)ymm_networkAPIPath;

@end

