//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMCellBtnClickedDelegate.h"
#import "YMMLongConnectReadDataProtocol.h"
#import "YMMManagerService.h"
#import "YMMMyGroupHeaderViewDelegate.h"

@class NSArray, NSDictionary, NSString, YMMAdvertisementModel, YMMMineModuleNetWorkService, YMMUserAuthStatusModel;

@interface YMMMineModulePresenter : NSObject <YMMCellBtnClickedDelegate, YMMMyGroupHeaderViewDelegate, YMMManagerService, YMMLongConnectReadDataProtocol>
{
    _Bool _needCompleteCompanyInfomation;
    NSArray *_groupList;
    id <YMMUserDetailModelProtocol> _userDetail;
    YMMUserAuthStatusModel *_authStatusInfo;
    NSDictionary *_badgeDict;
    YMMAdvertisementModel *_advertisementModel;
    NSArray *_accountSchemes;
    id <YMMDependOnModuleProtocol> _dependOnProtocol;
    id <YMMMineModuleControllerProtocol> _protocolView;
    YMMMineModuleNetWorkService *_service;
    NSArray *_unAuthLocalItemModels;
}

@property(nonatomic) _Bool needCompleteCompanyInfomation; // @synthesize needCompleteCompanyInfomation=_needCompleteCompanyInfomation;
@property(retain, nonatomic) NSArray *unAuthLocalItemModels; // @synthesize unAuthLocalItemModels=_unAuthLocalItemModels;
@property(retain, nonatomic) YMMMineModuleNetWorkService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <YMMMineModuleControllerProtocol> protocolView; // @synthesize protocolView=_protocolView;
@property(nonatomic) __weak id <YMMDependOnModuleProtocol> dependOnProtocol; // @synthesize dependOnProtocol=_dependOnProtocol;
@property(copy, nonatomic) NSArray *accountSchemes; // @synthesize accountSchemes=_accountSchemes;
@property(retain, nonatomic) YMMAdvertisementModel *advertisementModel; // @synthesize advertisementModel=_advertisementModel;
@property(copy, nonatomic) NSDictionary *badgeDict; // @synthesize badgeDict=_badgeDict;
@property(retain, nonatomic) YMMUserAuthStatusModel *authStatusInfo; // @synthesize authStatusInfo=_authStatusInfo;
@property(retain, nonatomic) id <YMMUserDetailModelProtocol> userDetail; // @synthesize userDetail=_userDetail;
@property(copy, nonatomic) NSArray *groupList; // @synthesize groupList=_groupList;
- (void).cxx_destruct;
- (void)ymmLongConnectRegister;
- (void)ymmLongConnectReturnContent:(id)arg1 content:(id)arg2 userInfo:(id)arg3;
- (void)cellBtnClickedSyncOpenUrl:(id)arg1 elementId:(id)arg2 extra:(id)arg3 isPresent:(_Bool)arg4;
- (void)cellBtnClickedOpenUrl:(id)arg1 elementId:(id)arg2 extra:(id)arg3 isPresent:(_Bool)arg4;
- (void)didSelectSectionHeaderAtIndexPath:(id)arg1;
- (id)filterParams;
- (void)configUserProfile:(id)arg1;
- (void)configUserDetailData:(id)arg1;
- (id)codes;
- (struct CGSize)referenceSizeForFooterInSection:(long long)arg1;
- (struct CGSize)referenceSizeForHeaderInSection:(long long)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (id)itemModelWithIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberSections;
- (void)requestUserAuthStatusAction;
- (void)requestUserCenterBadgeDataAction;
- (void)requestAdvertisement;
- (void)requestUserCenterUIDataAction;
- (void)requestUserDetailAction;
@property(readonly, nonatomic) _Bool auditSuccess;
@property(readonly, nonatomic) _Bool isOpenFlag;
- (void)configProtocolView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

