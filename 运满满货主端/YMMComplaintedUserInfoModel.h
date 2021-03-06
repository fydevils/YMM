//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMComplaintedUserInfoModel : YMMCommonModel
{
    long long _isPlatformUser;
    NSNumber *_shipperId;
    NSString *_shipperName;
    NSString *_companyName;
    NSNumber *_driverId;
    NSString *_driverName;
    NSString *_truckNumber;
    long long _startCityId;
    long long _endCityId;
    NSNumber *_cargoOrOrderId;
    NSString *_respondentMobile;
    NSNumber *_complaitedUserId;
    NSString *_respondentName;
    NSString *_respondentInfo;
}

@property(copy, nonatomic) NSString *respondentInfo; // @synthesize respondentInfo=_respondentInfo;
@property(copy, nonatomic) NSString *respondentName; // @synthesize respondentName=_respondentName;
@property(retain, nonatomic) NSNumber *complaitedUserId; // @synthesize complaitedUserId=_complaitedUserId;
@property(copy, nonatomic) NSString *respondentMobile; // @synthesize respondentMobile=_respondentMobile;
@property(retain, nonatomic) NSNumber *cargoOrOrderId; // @synthesize cargoOrOrderId=_cargoOrOrderId;
@property(nonatomic) long long endCityId; // @synthesize endCityId=_endCityId;
@property(nonatomic) long long startCityId; // @synthesize startCityId=_startCityId;
@property(copy, nonatomic) NSString *truckNumber; // @synthesize truckNumber=_truckNumber;
@property(copy, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(retain, nonatomic) NSNumber *driverId; // @synthesize driverId=_driverId;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *shipperName; // @synthesize shipperName=_shipperName;
@property(retain, nonatomic) NSNumber *shipperId; // @synthesize shipperId=_shipperId;
@property(nonatomic) long long isPlatformUser; // @synthesize isPlatformUser=_isPlatformUser;
- (void).cxx_destruct;

@end

