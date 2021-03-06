//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoBaseViewModel.h"

@class NSArray, NSDate, NSNumber, NSString, YMMCargoListDataCenter;

@interface YMMCargoListViewModel : YMMCargoBaseViewModel
{
    _Bool _isNeedVipShipper;
    _Bool _needClearOldDataWhenError;
    _Bool _cargoSearching;
    _Bool _cargoSearchFaile;
    _Bool _addedPageViewJournal;
    _Bool _isSurroundingsRefresh;
    NSString *_notShipperMemberRemindTitle;
    NSString *_notShipperMemberRemindText;
    NSString *_wechatPublicAccountUrl;
    NSString *_customerServiceTelNum;
    NSArray *_cargoTags;
    NSString *_ymm_pagename;
    NSString *_ymm_referpagename;
    unsigned long long _vcType;
    YMMCargoListDataCenter *_cargosModel;
    long long _cargoLoadAll;
    NSString *_recommendCargoFlag;
    NSNumber *_totalCount;
    NSDate *_startDate;
    NSDate *_startDateForSurroundRefresh;
}

@property(retain, nonatomic) NSDate *startDateForSurroundRefresh; // @synthesize startDateForSurroundRefresh=_startDateForSurroundRefresh;
@property(nonatomic) _Bool isSurroundingsRefresh; // @synthesize isSurroundingsRefresh=_isSurroundingsRefresh;
@property(nonatomic) _Bool addedPageViewJournal; // @synthesize addedPageViewJournal=_addedPageViewJournal;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSString *recommendCargoFlag; // @synthesize recommendCargoFlag=_recommendCargoFlag;
@property(nonatomic) long long cargoLoadAll; // @synthesize cargoLoadAll=_cargoLoadAll;
@property(nonatomic) _Bool cargoSearchFaile; // @synthesize cargoSearchFaile=_cargoSearchFaile;
@property(nonatomic) _Bool cargoSearching; // @synthesize cargoSearching=_cargoSearching;
@property(nonatomic) _Bool needClearOldDataWhenError; // @synthesize needClearOldDataWhenError=_needClearOldDataWhenError;
@property(retain, nonatomic) YMMCargoListDataCenter *cargosModel; // @synthesize cargosModel=_cargosModel;
@property(nonatomic) unsigned long long vcType; // @synthesize vcType=_vcType;
@property(copy, nonatomic) NSString *ymm_referpagename; // @synthesize ymm_referpagename=_ymm_referpagename;
@property(copy, nonatomic) NSString *ymm_pagename; // @synthesize ymm_pagename=_ymm_pagename;
@property(retain, nonatomic) NSArray *cargoTags; // @synthesize cargoTags=_cargoTags;
@property(copy, nonatomic) NSString *customerServiceTelNum; // @synthesize customerServiceTelNum=_customerServiceTelNum;
@property(copy, nonatomic) NSString *wechatPublicAccountUrl; // @synthesize wechatPublicAccountUrl=_wechatPublicAccountUrl;
@property(copy, nonatomic) NSString *notShipperMemberRemindText; // @synthesize notShipperMemberRemindText=_notShipperMemberRemindText;
@property(copy, nonatomic) NSString *notShipperMemberRemindTitle; // @synthesize notShipperMemberRemindTitle=_notShipperMemberRemindTitle;
@property(nonatomic) _Bool isNeedVipShipper; // @synthesize isNeedVipShipper=_isNeedVipShipper;
- (void).cxx_destruct;
- (id)getTabName:(id)arg1;
- (id)filterDictForJournal:(id)arg1;
- (void)addJounalForViewLoad;
- (void)addJounalForSurroundingsLoading;
- (void)addJournalForCargolist:(id)arg1 elementId:(id)arg2 nearby:(_Bool)arg3;
- (void)viewDidLoadForJournal;
- (_Bool)hiddenHistoryItem:(_Bool)arg1;
- (_Bool)hiddenMessageItem:(_Bool)arg1;
- (id)changeRegions:(id)arg1 to:(unsigned long long)arg2;
- (id)lengthIntervalFrom:(id)arg1;
- (id)lengthsFrom:(id)arg1;
- (id)typesFrom:(id)arg1;
- (id)regionNamesFrom:(id)arg1;
- (void)showLoginAlert:(id)arg1;
- (id)autoLoadMoreIndex;
- (_Bool)canAutoLoadMore:(id)arg1;
- (_Bool)needShowRefresh;
- (_Bool)needShowLoadMore;
- (id)tableHeaderInfo:(long long)arg1;
- (id)sectionHeaderTitle:(long long)arg1;
- (void)clearOldData;
- (long long)isQuoteCargo:(id)arg1;
- (id)getFloorName:(id)arg1;
- (id)modelAtIndexPath:(id)arg1;
- (long long)numberOfRowInSection:(long long)arg1;
- (long long)numberOfSection;
- (long long)allCount;
- (_Bool)loadAll;
- (void)showError:(id)arg1;
- (void)requestCargosWithParams:(id)arg1 clearDataWhenFailed:(_Bool)arg2 refresh:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)loadMoreCargosWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)refreshCargosWithParams:(id)arg1 clearDataWhenFailed:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)showAdView:(CDUnknownBlockType)arg1 adType:(unsigned long long)arg2;
- (void)journalForModelView:(id)arg1 filterModel:(id)arg2;

@end

