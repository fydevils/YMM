//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "YMMLocationTaskDelegate.h"

@class CLLocation, CLLocationManager, NSMutableDictionary, NSSet, NSString;

@interface YMMLocationManager : NSObject <CLLocationManagerDelegate, YMMLocationTaskDelegate>
{
    long long _number;
    _Bool _isUpdatingLocation;
    CLLocation *_location;
    double _defaultTimeout;
    double _distanceFilter;
    double _desiredAccuracy;
    CLLocationManager *_manager;
    NSMutableDictionary *_locationTasks;
    NSMutableDictionary *_statusDidChangeBlocks;
    NSMutableDictionary *_regionDictionary;
    CDUnknownBlockType _regionBlock;
    CDUnknownBlockType _callBack;
}

+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(copy, nonatomic) CDUnknownBlockType regionBlock; // @synthesize regionBlock=_regionBlock;
@property(retain, nonatomic) NSMutableDictionary *regionDictionary; // @synthesize regionDictionary=_regionDictionary;
@property(retain, nonatomic) NSMutableDictionary *statusDidChangeBlocks; // @synthesize statusDidChangeBlocks=_statusDidChangeBlocks;
@property(retain, nonatomic) NSMutableDictionary *locationTasks; // @synthesize locationTasks=_locationTasks;
@property(retain, nonatomic) CLLocationManager *manager; // @synthesize manager=_manager;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(nonatomic) double distanceFilter; // @synthesize distanceFilter=_distanceFilter;
@property(nonatomic) double defaultTimeout; // @synthesize defaultTimeout=_defaultTimeout;
- (void).cxx_destruct;
- (_Bool)isOS9OrLater;
- (_Bool)isOpenLocation;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSSet *regions;
@property(readonly, nonatomic) CLLocation *bd09Location;
@property(readonly, nonatomic) CLLocation *gcj02Location;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
- (id)regionForIdentifier:(id)arg1;
- (void)stopMonitoringAllRegions;
- (void)stopMonitoringForRegionIdentifier:(id)arg1;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)addMonitoringForRegion:(id)arg1;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)regionUpdataWithOldRegion:(id)arg1 NewRegion:(id)arg2;
- (void)updataRegionWithIdentifier:(id)arg1 Center:(struct CLLocationCoordinate2D)arg2 Radius:(double)arg3 Block:(CDUnknownBlockType)arg4;
- (void)updataRegionWithIdentifier:(id)arg1 Block:(CDUnknownBlockType)arg2;
- (void)updataRegionWithIdentifier:(id)arg1 Radius:(double)arg2;
- (void)updataRegionWithIdentifier:(id)arg1 Center:(struct CLLocationCoordinate2D)arg2;
- (id)regionWithCenter:(struct CLLocationCoordinate2D)arg1 Radius:(double)arg2 Block:(CDUnknownBlockType)arg3;
- (void)locationCallBack:(id)arg1 Error:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationRequestDidTimeout:(id)arg1;
- (void)stopMonitoringSignificantLocationChanges;
- (void)startMonitoringSignificantLocationChanges;
- (void)stopUpdatingLocation;
- (void)stopAllUpdatingLocation;
- (void)stopAlwayUpdataLocationWithIdentfier:(id)arg1;
- (void)startUpdatingLocation;
- (void)locationStartForTask:(id)arg1;
- (id)getAlwayUpdataLocationAndOnlyOneBlock:(CDUnknownBlockType)arg1;
- (void)getLocationWithBlock:(CDUnknownBlockType)arg1;
- (void)getLocationOnlyOneForTime:(long long)arg1 WithBlock:(CDUnknownBlockType)arg2;
- (void)getLocationOnlyOneWithBlock:(CDUnknownBlockType)arg1;
- (id)locationTaskForType:(unsigned long long)arg1 timeOut:(long long)arg2 Block:(CDUnknownBlockType)arg3;
- (id)init;
- (void)stoplocationDidChange:(id)arg1;
- (id)locationDidChange:(CDUnknownBlockType)arg1;
- (void)locationErrorCallBack:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

