//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface CheckVersionTask : YMMCommonNetworkTask
{
    NSString *_appCode;
    long long _appVersion;
    long long _hotFixVersion;
    long long _policyLastUpdateTime;
    NSString *_appType;
    NSString *_deviceCode;
}

@property(copy, nonatomic) NSString *deviceCode; // @synthesize deviceCode=_deviceCode;
@property(copy, nonatomic) NSString *appType; // @synthesize appType=_appType;
@property(nonatomic) long long policyLastUpdateTime; // @synthesize policyLastUpdateTime=_policyLastUpdateTime;
@property(nonatomic) long long hotFixVersion; // @synthesize hotFixVersion=_hotFixVersion;
@property(nonatomic) long long appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appCode; // @synthesize appCode=_appCode;
- (void).cxx_destruct;
- (id)init;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

