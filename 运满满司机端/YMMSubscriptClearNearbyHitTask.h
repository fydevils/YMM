//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoCommonNetworkTask.h"

@class NSString;

@interface YMMSubscriptClearNearbyHitTask : YMMCargoCommonNetworkTask
{
    NSString *_groupId;
    NSString *_searchIds;
}

@property(copy, nonatomic) NSString *searchIds; // @synthesize searchIds=_searchIds;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;
- (id)ymm_networkAPIDomain;

@end

