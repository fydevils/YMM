//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBJson, NSString, UITableView, YMMPerformanceLog;

@interface YMMCancelledDebitOrderListViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    MBJson *_dataJson;
    YMMPerformanceLog *_performanceUtil;
}

@property(retain, nonatomic) YMMPerformanceLog *performanceUtil; // @synthesize performanceUtil=_performanceUtil;
@property(retain, nonatomic) MBJson *dataJson; // @synthesize dataJson=_dataJson;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)setYmm_pageParams:(id)arg1;
- (id)ymm_pageParams;
- (id)ymm_pageName;
- (_Bool)ymm_isNaviBarHidden;
- (void)ymm_doBack;
- (void)journalForListCardClickAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestCargoOrder:(id)arg1 withIsLoadLatest:(_Bool)arg2;
- (void)loadMoreData;
- (void)refreshData;
- (void)setEmptyView:(_Bool)arg1;
- (void)showEmptyView;
- (void)reloadData:(id)arg1 withIsLoadLatest:(_Bool)arg2;
- (void)endingLoad;
- (void)setMoreDataState:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

