//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSArray;

@interface YMMRNCheckVersionTask : YMMCommonNetworkTask
{
    NSArray *_bundleList;
    long long _rnNativeVersion;
}

@property(nonatomic) long long rnNativeVersion; // @synthesize rnNativeVersion=_rnNativeVersion;
@property(retain, nonatomic) NSArray *bundleList; // @synthesize bundleList=_bundleList;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

