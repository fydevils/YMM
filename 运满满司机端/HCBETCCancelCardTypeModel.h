//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBETCCancelCardTypeModel : NSObject
{
    _Bool _isDefault;
    _Bool _hasCard;
    float _etcCardBalance;
    long long _serviceType;
    long long _rate;
    NSString *_serviceTitle;
    NSString *_serviceDesc;
    long long _fee;
    NSString *_feeDesc;
    long long _seleProcess;
}

@property(nonatomic) _Bool hasCard; // @synthesize hasCard=_hasCard;
@property(nonatomic) long long seleProcess; // @synthesize seleProcess=_seleProcess;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *feeDesc; // @synthesize feeDesc=_feeDesc;
@property(nonatomic) long long fee; // @synthesize fee=_fee;
@property(nonatomic) float etcCardBalance; // @synthesize etcCardBalance=_etcCardBalance;
@property(retain, nonatomic) NSString *serviceDesc; // @synthesize serviceDesc=_serviceDesc;
@property(retain, nonatomic) NSString *serviceTitle; // @synthesize serviceTitle=_serviceTitle;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;

@end

