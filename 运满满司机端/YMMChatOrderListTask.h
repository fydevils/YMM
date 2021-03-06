//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMIMCommonNetworkTask.h"

@class NSString;

@interface YMMChatOrderListTask : YMMIMCommonNetworkTask
{
    unsigned long long _pageSize;
    unsigned long long _pageIndex;
    NSString *_shipperId;
    NSString *_driverId;
}

@property(copy, nonatomic) NSString *driverId; // @synthesize driverId=_driverId;
@property(copy, nonatomic) NSString *shipperId; // @synthesize shipperId=_shipperId;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;
- (id)initWithShipperId:(id)arg1 driverId:(id)arg2 pageIndex:(unsigned long long)arg3 pageSize:(unsigned long long)arg4;

@end

