//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseParam.h"

@class NSString;

@interface VFSDKVouChargeParam : VFSDKBaseParam
{
    NSString *_instid;
    NSString *_bankMoney;
    NSString *_note;
}

@property(copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(copy, nonatomic) NSString *bankMoney; // @synthesize bankMoney=_bankMoney;
@property(copy, nonatomic) NSString *instid; // @synthesize instid=_instid;
- (void).cxx_destruct;
- (id)getDictionaryForJSON;
- (id)initWithInstId:(id)arg1 andBankMoney:(id)arg2 andNote:(id)arg3;

@end

