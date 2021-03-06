//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMMyBuyoutDriverInfoModel : YMMCommonModel
{
    NSString *_truckLengthDesc;
    NSString *_truckTypeDesc;
    NSString *_truckLoadDesc;
    NSString *_plat;
    NSNumber *_carrierId;
    NSString *_carrierName;
    NSString *_carrierPhone;
    NSString *_carrierHeadPicUrl;
    long long _tradeCount;
    NSString *_jumpSchema;
    long long _status;
    NSString *_statusDesc;
}

@property(retain, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *jumpSchema; // @synthesize jumpSchema=_jumpSchema;
@property(nonatomic) long long tradeCount; // @synthesize tradeCount=_tradeCount;
@property(retain, nonatomic) NSString *carrierHeadPicUrl; // @synthesize carrierHeadPicUrl=_carrierHeadPicUrl;
@property(retain, nonatomic) NSString *carrierPhone; // @synthesize carrierPhone=_carrierPhone;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(retain, nonatomic) NSNumber *carrierId; // @synthesize carrierId=_carrierId;
@property(retain, nonatomic) NSString *plat; // @synthesize plat=_plat;
@property(retain, nonatomic) NSString *truckLoadDesc; // @synthesize truckLoadDesc=_truckLoadDesc;
@property(retain, nonatomic) NSString *truckTypeDesc; // @synthesize truckTypeDesc=_truckTypeDesc;
@property(retain, nonatomic) NSString *truckLengthDesc; // @synthesize truckLengthDesc=_truckLengthDesc;
- (void).cxx_destruct;

@end

