//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface AMapNaviVehicleInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isETARestriction;
    _Bool _isLoadIgnore;
    NSString *_vehicleId;
    long long _type;
    long long _size;
    long long _axisNums;
    double _width;
    double _height;
    double _length;
    double _load;
    double _weight;
}

@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) double load; // @synthesize load=_load;
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long axisNums; // @synthesize axisNums=_axisNums;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) _Bool isLoadIgnore; // @synthesize isLoadIgnore=_isLoadIgnore;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isETARestriction; // @synthesize isETARestriction=_isETARestriction;
@property(retain, nonatomic) NSString *vehicleId; // @synthesize vehicleId=_vehicleId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

