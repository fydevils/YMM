//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBPetrolPayMethod, NSArray;

@interface HCBPetrolQRCodeSwitchViewModel : NSObject
{
    _Bool _isNoPayType;
    NSArray *_payTypeArray;
    HCBPetrolPayMethod *_payModel;
    long long _lastPayType;
}

@property(nonatomic) long long lastPayType; // @synthesize lastPayType=_lastPayType;
@property(nonatomic) _Bool isNoPayType; // @synthesize isNoPayType=_isNoPayType;
@property(retain, nonatomic) HCBPetrolPayMethod *payModel; // @synthesize payModel=_payModel;
@property(copy, nonatomic) NSArray *payTypeArray; // @synthesize payTypeArray=_payTypeArray;
- (void).cxx_destruct;
- (id)initWithMethodArray:(id)arg1;

@end

