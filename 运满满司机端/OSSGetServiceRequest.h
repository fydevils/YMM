//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OSSRequest.h"

@class NSString;

@interface OSSGetServiceRequest : OSSRequest
{
    int _maxKeys;
    NSString *_prefix;
    NSString *_marker;
}

@property(nonatomic) int maxKeys; // @synthesize maxKeys=_maxKeys;
@property(retain, nonatomic) NSString *marker; // @synthesize marker=_marker;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (id)getQueryDict;

@end

