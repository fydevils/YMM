//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSArray, NSNumber;

@interface GTDelPicFileByIdsTask : YMMCommonNetworkTask
{
    unsigned long long _delIdType;
    NSNumber *_ids;
    NSArray *_picFileIds;
}

@property(retain, nonatomic) NSArray *picFileIds; // @synthesize picFileIds=_picFileIds;
@property(retain, nonatomic) NSNumber *ids; // @synthesize ids=_ids;
@property(nonatomic) unsigned long long delIdType; // @synthesize delIdType=_delIdType;
- (void).cxx_destruct;
- (id)ymm_propertiesMap;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

