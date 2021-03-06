//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface BMKCloudPOIInfo : NSObject
{
    int _uid;
    int _geotableId;
    NSString *_title;
    NSString *_address;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    float _latitude;
    float _longitude;
    NSString *_tags;
    float _distance;
    float _weight;
    NSMutableDictionary *_customDict;
    int _creattime;
    int _modifytime;
    int _type;
    NSString *_direction;
}

@property(retain, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int modifytime; // @synthesize modifytime=_modifytime;
@property(nonatomic) int creattime; // @synthesize creattime=_creattime;
@property(retain, nonatomic) NSMutableDictionary *customDict; // @synthesize customDict=_customDict;
@property(nonatomic) float weight; // @synthesize weight=_weight;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int geotableId; // @synthesize geotableId=_geotableId;
@property(nonatomic) int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

