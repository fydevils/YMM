//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKBaseVehicleInfo.h"

@class NSString;

@interface BMKBusVehicleInfo : BMKBaseVehicleInfo
{
    long long _passStationNum;
    NSString *_firstTime;
    NSString *_lastTime;
}

@property(retain, nonatomic) NSString *lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSString *firstTime; // @synthesize firstTime=_firstTime;
@property(nonatomic) long long passStationNum; // @synthesize passStationNum=_passStationNum;
- (void).cxx_destruct;

@end

