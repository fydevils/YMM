//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseModelObject.h"

@class NSString;

@interface VFSDKRealNameModel : VFSDKBaseModelObject
{
    NSString *_realName;
    NSString *_realNo;
    NSString *_ticket;
    NSString *_authResult;
    unsigned long long _authStatus;
}

@property(nonatomic) unsigned long long authStatus; // @synthesize authStatus=_authStatus;
@property(copy, nonatomic) NSString *authResult; // @synthesize authResult=_authResult;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSString *realNo; // @synthesize realNo=_realNo;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
- (void).cxx_destruct;
- (id)attributeMapDictionary;

@end

