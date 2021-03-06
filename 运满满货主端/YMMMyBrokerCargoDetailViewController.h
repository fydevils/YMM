//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMCallListAlertViewDelegate.h"
#import "YMMPickScrollMenuDelegate.h"

@class NSArray, NSMutableArray, NSString, SHWebApp, UITableView, YMMAdvertisementModel, YMMMYCargoDetailBottomView, YMMMyCargoDetailModel, YMMMyCargoViewModel, YMMPickDriverViewModel, YMMPickScrollMenu, YMMQuoteAndPickAlertView;

@interface YMMMyBrokerCargoDetailViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource, YMMPickScrollMenuDelegate, YMMCallListAlertViewDelegate>
{
    NSArray *phoneList;
    _Bool _showMoreDriver;
    YMMMyCargoDetailModel *_goodsDetail;
    UITableView *_tableView;
    YMMMYCargoDetailBottomView *_bottomView;
    YMMPickScrollMenu *_pickScrollMenu;
    unsigned long long _sectionType;
    YMMMyCargoViewModel *_viewModel;
    YMMPickDriverViewModel *_driverViewModel;
    NSArray *_callMeDrivers;
    SHWebApp *_mileApp;
    YMMQuoteAndPickAlertView *_alertView;
    NSMutableArray *_recommendDriverAry;
    long long _hiddenGroupMsg;
    YMMAdvertisementModel *_adModel;
    NSMutableArray *_showedMoreDriverAry;
    NSMutableArray *_moreDriverExposureAry;
    NSMutableArray *_showedCallMeDriverAry;
    NSMutableArray *_callMeDriverExposureAry;
    NSString *_driverUserId;
}

@property(retain, nonatomic) NSString *driverUserId; // @synthesize driverUserId=_driverUserId;
@property(nonatomic) _Bool showMoreDriver; // @synthesize showMoreDriver=_showMoreDriver;
@property(retain, nonatomic) NSMutableArray *callMeDriverExposureAry; // @synthesize callMeDriverExposureAry=_callMeDriverExposureAry;
@property(retain, nonatomic) NSMutableArray *showedCallMeDriverAry; // @synthesize showedCallMeDriverAry=_showedCallMeDriverAry;
@property(retain, nonatomic) NSMutableArray *moreDriverExposureAry; // @synthesize moreDriverExposureAry=_moreDriverExposureAry;
@property(retain, nonatomic) NSMutableArray *showedMoreDriverAry; // @synthesize showedMoreDriverAry=_showedMoreDriverAry;
@property(retain, nonatomic) YMMAdvertisementModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) long long hiddenGroupMsg; // @synthesize hiddenGroupMsg=_hiddenGroupMsg;
@property(retain, nonatomic) NSMutableArray *recommendDriverAry; // @synthesize recommendDriverAry=_recommendDriverAry;
@property(retain, nonatomic) YMMQuoteAndPickAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) SHWebApp *mileApp; // @synthesize mileApp=_mileApp;
@property(retain, nonatomic) NSArray *callMeDrivers; // @synthesize callMeDrivers=_callMeDrivers;
@property(retain, nonatomic) YMMPickDriverViewModel *driverViewModel; // @synthesize driverViewModel=_driverViewModel;
@property(retain, nonatomic) YMMMyCargoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) YMMPickScrollMenu *pickScrollMenu; // @synthesize pickScrollMenu=_pickScrollMenu;
@property(retain, nonatomic) YMMMYCargoDetailBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YMMMyCargoDetailModel *goodsDetail; // @synthesize goodsDetail=_goodsDetail;
- (void).cxx_destruct;
- (id)ymm_pageName;
- (void)addJournalForDispatch;
- (void)addJournalForCallDriver;
- (void)addJournalForSendMsgDriver;
- (void)addJournalForSendMsgAlertShow;
- (void)addJournalForSendMsgBtnTap;
- (void)addJournalForSendMsgBtnShow;
- (void)uploadCallMeDriverExposureJournal;
- (void)uploadMoreDriverExposureJournal;
- (void)addJournalForDriverShowed:(id)arg1;
- (void)addJournalClickCheckDriver:(id)arg1;
- (void)addTapDeleteGoodsResourceJournal;
- (void)addTapBuyInsuranceJournal;
- (void)addTapRefreshJournal;
- (void)addJournalForCargoId;
- (void)addJournalForPickMenu;
- (void)addJournalForTapEnsurePay;
- (id)footerView;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (_Bool)haveCallMeDrivers;
- (long long)numberOfRowsInSectionTruckListAndSearch;
- (void)tableView:(id)arg1 GoodsInfoCell:(id)arg2 ForRow:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 TruckCellForRow:(long long)arg2;
- (id)tableView:(id)arg1 GoodsInfoCellForRow:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollView:(id)arg1 SelectTitle:(unsigned long long)arg2 oldNumber:(unsigned long long)arg3;
- (void)pushViewControllerForSchemeUrl:(id)arg1 Params:(id)arg2;
- (void)goToMap;
- (void)pushToDriverDetailInfo:(id)arg1;
- (void)pushToOrderDetailVcWithId:(id)arg1 JumpUrl:(id)arg2;
- (void)didTappedAdsCallAlertView:(id)arg1;
- (void)didTappedCallAlertView:(id)arg1;
- (void)brokerCallAction;
- (void)brokerIMAction;
- (void)showCallAdForTelephones:(id)arg1 beginFrame:(struct CGRect)arg2 DriverUserId:(id)arg3;
- (void)recommendDriverAction:(unsigned long long)arg1 Model:(id)arg2 ContactFrame:(struct CGRect)arg3;
- (void)showSendMsgAlert;
- (void)sendGroupMsgAction;
- (void)dispatchAction;
- (void)pickDriverAction;
- (void)carriageRule;
- (void)openEnsurePayWeb;
- (void)insureFreightAction;
- (void)refreshGoods;
- (void)deleteGoods;
- (void)jumpToTruckYard;
- (void)footerViewClick:(id)arg1;
- (void)selectDriverForDriverUserId:(id)arg1 IsPictureAuth:(long long)arg2 IsMyCar:(_Bool)arg3 jumpSchema:(id)arg4;
- (void)didReceiveMemoryWarning;
- (void)requestRecommendDriver;
- (void)requestCallMeDrivers;
- (void)viewWillAppearSetupData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)downloadWebApp;
- (void)initData;
- (void)initUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

