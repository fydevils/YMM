//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSNumber;

@interface YMMQuoteHistoryTask : YMMCommonNetworkTask
{
    NSNumber *_maxBargainId;
    long long _maxSubstatus;
    long long _count;
    NSNumber *_before;
    NSNumber *_after;
}

@property(retain, nonatomic) NSNumber *after; // @synthesize after=_after;
@property(retain, nonatomic) NSNumber *before; // @synthesize before=_before;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long maxSubstatus; // @synthesize maxSubstatus=_maxSubstatus;
@property(retain, nonatomic) NSNumber *maxBargainId; // @synthesize maxBargainId=_maxBargainId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

