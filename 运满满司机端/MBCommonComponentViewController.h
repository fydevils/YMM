//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "MBCommonComponentProtocol.h"
#import "MBDataObserver.h"

@class MBBaseModuleViewModel, MBCommonComponentDirector, MBDirectorDataSourceItem, MBJson, MBTableView, NSDictionary, NSNumber, NSString, UIView;

@interface MBCommonComponentViewController : YMMBaseViewController <MBDataObserver, MBCommonComponentProtocol>
{
    _Bool _isNeedSendTask;
    NSDictionary *_params;
    MBCommonComponentDirector *_componentDirector;
    MBTableView *_componentTableView;
    MBJson *_paramJson;
    UIView *_headerView;
    double _headerHeight;
    MBBaseModuleViewModel *_headerViewModel;
    UIView *_footerView;
    double _footerHeight;
    MBBaseModuleViewModel *_footerViewModel;
    MBDirectorDataSourceItem *_sourceItem;
    MBJson *_dataJson;
    NSNumber *_theInitDate;
    struct CGSize _pageSize;
}

@property(retain, nonatomic) NSNumber *theInitDate; // @synthesize theInitDate=_theInitDate;
@property(copy, nonatomic) MBJson *dataJson; // @synthesize dataJson=_dataJson;
@property(retain, nonatomic) MBDirectorDataSourceItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property(retain, nonatomic) MBBaseModuleViewModel *footerViewModel; // @synthesize footerViewModel=_footerViewModel;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MBBaseModuleViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MBJson *paramJson; // @synthesize paramJson=_paramJson;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) _Bool isNeedSendTask; // @synthesize isNeedSendTask=_isNeedSendTask;
@property(retain, nonatomic) MBTableView *componentTableView; // @synthesize componentTableView=_componentTableView;
@property(retain, nonatomic) MBCommonComponentDirector *componentDirector; // @synthesize componentDirector=_componentDirector;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (id)ymm_pageName;
- (void)componentsVCListViewRenderFinished;
- (void)requestSuccessForTask:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)componentPageData;
- (void)dynamicButtonClick:(id)arg1;
- (id)instanceFromStyleJson:(id)arg1;
- (void)updateNavUI;
- (void)updateContentViewForTask:(id)arg1;
- (void)updateUI;
- (void)commonSetUp;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

