//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoBaseViewController.h"

#import "FilterContentViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FilterContentView, NSMutableArray, NSNumber, NSString, UITableView, UIView, YMMSubscriptEditViewModel, YMMSubscriptModel;

@interface YMMSubscriptEditViewController : YMMCargoBaseViewController <UITableViewDelegate, UITableViewDataSource, FilterContentViewDelegate>
{
    NSNumber *truckLengthUpper;
    unsigned long long selectRegionType;
    YMMSubscriptModel *_subscription;
    UITableView *_tableView;
    UIView *_tableFooterView;
    NSMutableArray *_endRegions;
    NSMutableArray *_startRegions;
    NSMutableArray *_endNearbyRegions;
    NSMutableArray *_startNearbyRegions;
    NSMutableArray *_regionInfoArray;
    NSMutableArray *_selectedLengthArr;
    NSMutableArray *_selectedTruckTypeArr;
    NSString *_trunkInfoStr;
    FilterContentView *_filterView;
    UIView *_backgroundView;
    YMMSubscriptEditViewModel *_viewModel;
}

@property(retain, nonatomic) YMMSubscriptEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) FilterContentView *filterView; // @synthesize filterView=_filterView;
@property(copy, nonatomic) NSString *trunkInfoStr; // @synthesize trunkInfoStr=_trunkInfoStr;
@property(retain, nonatomic) NSMutableArray *selectedTruckTypeArr; // @synthesize selectedTruckTypeArr=_selectedTruckTypeArr;
@property(retain, nonatomic) NSMutableArray *selectedLengthArr; // @synthesize selectedLengthArr=_selectedLengthArr;
@property(retain, nonatomic) NSMutableArray *regionInfoArray; // @synthesize regionInfoArray=_regionInfoArray;
@property(retain, nonatomic) NSMutableArray *startNearbyRegions; // @synthesize startNearbyRegions=_startNearbyRegions;
@property(retain, nonatomic) NSMutableArray *endNearbyRegions; // @synthesize endNearbyRegions=_endNearbyRegions;
@property(retain, nonatomic) NSMutableArray *startRegions; // @synthesize startRegions=_startRegions;
@property(retain, nonatomic) NSMutableArray *endRegions; // @synthesize endRegions=_endRegions;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YMMSubscriptModel *subscription; // @synthesize subscription=_subscription;
- (void).cxx_destruct;
- (id)getNearbyRegionArray:(unsigned long long)arg1;
- (id)getRegionArray:(unsigned long long)arg1;
- (void)didTapFilterItem:(unsigned long long)arg1 withFilterItem:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)autoScrollView:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hiddenFilterView;
- (void)showFilterView;
- (void)showTip:(id)arg1;
- (_Bool)containsCity:(id)arg1 citys:(id)arg2;
- (void)addRegion:(id)arg1 toArray:(id)arg2 regionType:(long long)arg3;
- (void)selectNearbyRegion:(long long)arg1 regionType:(long long)arg2;
- (void)delRegion:(long long)arg1 regionType:(long long)arg2;
- (void)addRegion:(long long)arg1;
- (void)updateSubscriptionResult:(id)arg1 error:(id)arg2 update:(_Bool)arg3;
- (void)saveSubscriptAction;
- (void)saveNearbyCitys:(id)arg1 regionType:(long long)arg2;
- (void)getNearbyCitys:(id)arg1 regionType:(long long)arg2;
- (void)reloadTrunkLengthAndTypeCell:(id)arg1 types:(id)arg2 typeStr:(id)arg3;
- (void)showSubscript;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

