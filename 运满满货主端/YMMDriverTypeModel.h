//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMDriverTypeModel : YMMCommonModel
{
    long long _identityLabel;
    NSString *_mainDriverName;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *mainDriverName; // @synthesize mainDriverName=_mainDriverName;
@property(nonatomic) long long identityLabel; // @synthesize identityLabel=_identityLabel;
- (void).cxx_destruct;

@end

