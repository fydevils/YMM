//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapRoadTrafficSearchBaseRequest.h"

@class AMapGeoPoint;

@interface AMapRoadTrafficCircleSearchRequest : AMapRoadTrafficSearchBaseRequest
{
    AMapGeoPoint *_location;
    long long _radius;
}

+ (id)ajo_mapping;
@property(nonatomic) long long radius; // @synthesize radius=_radius;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)init;

@end

