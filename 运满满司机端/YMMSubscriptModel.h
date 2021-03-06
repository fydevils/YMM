//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSNumber, NSString;

@interface YMMSubscriptModel : YMMCommonModel
{
    NSString *_ends;
    NSString *_starts;
    NSString *_groupId;
    NSString *_searchIds;
    NSString *_nearbyHint;
    NSString *_truckTypes;
    NSString *_truckLengths;
    long long _subCount;
    long long _pushSubscribe;
    NSNumber *_truckLengthUpper;
    NSArray *_endRegions;
    NSArray *_startRegions;
    NSNumber *_start;
    NSNumber *_end;
    double _routeHeight;
    double _routeWidth;
    double _cellHeight;
    NSString *_routeString;
    NSString *_subCountString;
    NSString *_truckInfoString;
}

+ (id)trunckLengthDescription:(id)arg1 lengthRange:(id)arg2;
@property(copy, nonatomic) NSString *truckInfoString; // @synthesize truckInfoString=_truckInfoString;
@property(copy, nonatomic) NSString *subCountString; // @synthesize subCountString=_subCountString;
@property(copy, nonatomic) NSString *routeString; // @synthesize routeString=_routeString;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) double routeWidth; // @synthesize routeWidth=_routeWidth;
@property(nonatomic) double routeHeight; // @synthesize routeHeight=_routeHeight;
@property(retain, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber *start; // @synthesize start=_start;
@property(retain, nonatomic) NSArray *startRegions; // @synthesize startRegions=_startRegions;
@property(retain, nonatomic) NSArray *endRegions; // @synthesize endRegions=_endRegions;
@property(retain, nonatomic) NSNumber *truckLengthUpper; // @synthesize truckLengthUpper=_truckLengthUpper;
@property(nonatomic) long long pushSubscribe; // @synthesize pushSubscribe=_pushSubscribe;
@property(nonatomic) long long subCount; // @synthesize subCount=_subCount;
@property(copy, nonatomic) NSString *truckLengths; // @synthesize truckLengths=_truckLengths;
@property(copy, nonatomic) NSString *truckTypes; // @synthesize truckTypes=_truckTypes;
@property(copy, nonatomic) NSString *nearbyHint; // @synthesize nearbyHint=_nearbyHint;
@property(copy, nonatomic) NSString *searchIds; // @synthesize searchIds=_searchIds;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *starts; // @synthesize starts=_starts;
@property(copy, nonatomic) NSString *ends; // @synthesize ends=_ends;
- (void).cxx_destruct;
- (id)cityString:(id)arg1;

@end

