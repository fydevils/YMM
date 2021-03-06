//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface YMMDegradeManager : NSObject
{
    NSArray *_degradeList;
}

+ (void)startLoadDegradeSettings;
+ (id)sharedYMMDegradeManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSArray *degradeList; // @synthesize degradeList=_degradeList;
- (void).cxx_destruct;
- (void)addJournalForRNDegrade:(_Bool)arg1 errorInfo:(id)arg2 function:(id)arg3;
- (id)combineLists:(id)arg1 list2:(id)arg2;
- (void)fetchDegradeList:(id)arg1;
- (void)sendHCBDegradeRequest:(id)arg1;
- (void)sendYMMDegradeRequest:(id)arg1;
- (long long)timeIntervalOfReqeustUpdate;
- (id)getLocalDegradeSettings;
- (void)updateLocalDegradeSettingsByUserPhone:(id)arg1;
- (void)updateLocalDegradeSettings;
- (id)defaultDegradeList;
- (id)readDegradeList;
- (_Bool)checkIfNeedRequestUpdate;
- (void)setUpdateDate:(id)arg1;
- (id)lastUpdateDate;
- (id)degradeSetting:(id)arg1;

@end

