//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface YMMUnbindCopilotTask : YMMCommonNetworkTask
{
    NSString *_userId;
    NSString *_telephone;
    long long _driverType;
}

@property(nonatomic) long long driverType; // @synthesize driverType=_driverType;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

