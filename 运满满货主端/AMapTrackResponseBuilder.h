//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMapTrackResponseBuilder : NSObject
{
}

+ (id)buildResponseWithData:(id)arg1 responseClass:(Class)arg2 error:(id *)arg3 outJsonDict:(id *)arg4;
+ (long long)errorCodeWithServerInfoCode:(long long)arg1;
+ (id)errorWithErrorCode:(long long)arg1 info:(id)arg2;
+ (id)errorWithURLError:(id)arg1;

@end

