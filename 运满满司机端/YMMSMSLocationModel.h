//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber;

@interface YMMSMSLocationModel : YMMCommonModel
{
    float _lon;
    float _lat;
    NSNumber *_positionTime;
    long long _smsLocate;
    NSNumber *_smsLocateReplyNumber;
    long long _count;
    long long _isRegister;
    long long _carrier;
    struct CLLocationCoordinate2D _wgsCoor;
    struct CLLocationCoordinate2D _bd09Coor;
}

@property(nonatomic) struct CLLocationCoordinate2D bd09Coor; // @synthesize bd09Coor=_bd09Coor;
@property(nonatomic) struct CLLocationCoordinate2D wgsCoor; // @synthesize wgsCoor=_wgsCoor;
@property(readonly, nonatomic) long long carrier; // @synthesize carrier=_carrier;
@property(readonly, nonatomic) long long isRegister; // @synthesize isRegister=_isRegister;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSNumber *smsLocateReplyNumber; // @synthesize smsLocateReplyNumber=_smsLocateReplyNumber;
@property(readonly, nonatomic) long long smsLocate; // @synthesize smsLocate=_smsLocate;
@property(readonly, nonatomic) NSNumber *positionTime; // @synthesize positionTime=_positionTime;
@property(readonly, nonatomic) float lat; // @synthesize lat=_lat;
@property(readonly, nonatomic) float lon; // @synthesize lon=_lon;
- (void).cxx_destruct;
- (id)positionDateTime;

@end

