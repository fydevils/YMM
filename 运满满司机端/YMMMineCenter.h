//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMModuleProtocol.h"

@class NSArray, NSString, UIWindow, YMMMemberPermissionInfoModel, YMMMineModuleNetWorkService;

@interface YMMMineCenter : NSObject <YMMModuleProtocol>
{
    NSArray *_groupList;
    NSArray *_accountSchemes;
    YMMMemberPermissionInfoModel *_meberInfoModel;
    YMMMineModuleNetWorkService *_networkService;
}

+ (id)sharedYMMMineCenter;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) YMMMineModuleNetWorkService *networkService; // @synthesize networkService=_networkService;
@property(retain, nonatomic) YMMMemberPermissionInfoModel *meberInfoModel; // @synthesize meberInfoModel=_meberInfoModel;
@property(copy, nonatomic) NSArray *accountSchemes; // @synthesize accountSchemes=_accountSchemes;
@property(copy, nonatomic) NSArray *groupList; // @synthesize groupList=_groupList;
- (void).cxx_destruct;
- (void)netWorkTaskForGroupItems:(CDUnknownBlockType)arg1;
- (void)networkTaskForMineConfigUIData;
- (id)filterParams;
- (void)responseDataAction:(id)arg1;
- (void)addNotification;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

