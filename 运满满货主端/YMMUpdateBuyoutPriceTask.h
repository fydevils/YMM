//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@interface YMMUpdateBuyoutPriceTask : YMMCommonNetworkTask
{
    long long _cargoId;
    long long _expectFreight;
}

@property(nonatomic) long long expectFreight; // @synthesize expectFreight=_expectFreight;
@property(nonatomic) long long cargoId; // @synthesize cargoId=_cargoId;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

