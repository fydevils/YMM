//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBTruckNaviBaseViewController.h"

#import "HCBEndNaviRecommendBizCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBEndNaviHeaderView, HCBPosition, NSMutableArray, NSString, UITableView;

@interface HCBEndOfNaviVC : HCBTruckNaviBaseViewController <UITableViewDelegate, UITableViewDataSource, HCBEndNaviRecommendBizCellDelegate>
{
    id <HCBEndOfNaviVCDelegate> _delegate;
    double _spendTime;
    double _hasBeenDrivingDistance;
    UITableView *_tableView;
    HCBEndNaviHeaderView *_tableHeaderView;
    NSMutableArray *_dataArray;
    HCBPosition *_position;
}

@property(retain, nonatomic) HCBPosition *position; // @synthesize position=_position;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) HCBEndNaviHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double hasBeenDrivingDistance; // @synthesize hasBeenDrivingDistance=_hasBeenDrivingDistance;
@property(nonatomic) double spendTime; // @synthesize spendTime=_spendTime;
@property(nonatomic) __weak id <HCBEndOfNaviVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)setupPVCurrentPageName;
- (void)bizPOIStatsCell:(id)arg1 model:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)fetchBizPoiStats;
- (void)getPosition;
- (void)setupView;
- (void)goMapMainVC;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

