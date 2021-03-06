//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface HCBPosition : NSObject
{
    int _floor;
    NSString *_address;
    unsigned long long _pid;
    unsigned long long _cid;
    unsigned long long _did;
    NSDate *_locationTime;
    double _lat;
    double _lng;
    NSString *_city;
    NSString *_province;
    NSString *_district;
    NSString *_city_fullname;
    NSString *_province_fullname;
    NSString *_district_fullname;
    NSString *_streetName;
    NSString *_streetNumber;
    unsigned long long _gpsType;
    double _altitude;
    double _horizontalAccuracy;
    double _verticalAccuracy;
    double _course;
    double _speed;
    double _wgsLat;
    double _wgsLng;
}

+ (id)getFromUserDefaults;
+ (id)fromDictionary:(id)arg1;
@property(nonatomic) double wgsLng; // @synthesize wgsLng=_wgsLng;
@property(nonatomic) double wgsLat; // @synthesize wgsLat=_wgsLat;
@property(nonatomic) int floor; // @synthesize floor=_floor;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) unsigned long long gpsType; // @synthesize gpsType=_gpsType;
@property(retain, nonatomic) NSString *streetNumber; // @synthesize streetNumber=_streetNumber;
@property(retain, nonatomic) NSString *streetName; // @synthesize streetName=_streetName;
@property(retain, nonatomic) NSString *district_fullname; // @synthesize district_fullname=_district_fullname;
@property(retain, nonatomic) NSString *province_fullname; // @synthesize province_fullname=_province_fullname;
@property(retain, nonatomic) NSString *city_fullname; // @synthesize city_fullname=_city_fullname;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSDate *locationTime; // @synthesize locationTime=_locationTime;
@property(nonatomic) unsigned long long did; // @synthesize did=_did;
@property(nonatomic) unsigned long long cid; // @synthesize cid=_cid;
@property(nonatomic) unsigned long long pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)desensitizedLocation;
- (id)description;
- (_Bool)saveToUserDefaults;
- (id)toDictionary;

@end

