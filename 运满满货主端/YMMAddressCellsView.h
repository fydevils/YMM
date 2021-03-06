//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BMKPoiSearchDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BMKPoiSearch, NSArray, NSMutableArray, NSString, UITableView, UIViewController, YMMLocationAddressModel;

@interface YMMAddressCellsView : UIView <UITableViewDelegate, UITableViewDataSource, BMKPoiSearchDelegate>
{
    _Bool isShowUserLocation;
    YMMLocationAddressModel *_locationModel;
    CDUnknownBlockType _itemSelectCallback;
    NSString *_selectCityName;
    UIViewController *_superVC;
    NSString *_requestText;
    UITableView *_addressTableView;
    NSArray *_associateAddressArray;
    NSMutableArray *_historyAddressArray;
    BMKPoiSearch *_bmkPoiSearch;
}

@property(retain, nonatomic) BMKPoiSearch *bmkPoiSearch; // @synthesize bmkPoiSearch=_bmkPoiSearch;
@property(retain, nonatomic) NSMutableArray *historyAddressArray; // @synthesize historyAddressArray=_historyAddressArray;
@property(retain, nonatomic) NSArray *associateAddressArray; // @synthesize associateAddressArray=_associateAddressArray;
@property(retain, nonatomic) UITableView *addressTableView; // @synthesize addressTableView=_addressTableView;
@property(copy, nonatomic) NSString *requestText; // @synthesize requestText=_requestText;
@property(nonatomic) __weak UIViewController *superVC; // @synthesize superVC=_superVC;
@property(copy, nonatomic) NSString *selectCityName; // @synthesize selectCityName=_selectCityName;
@property(copy, nonatomic) CDUnknownBlockType itemSelectCallback; // @synthesize itemSelectCallback=_itemSelectCallback;
@property(retain, nonatomic) YMMLocationAddressModel *locationModel; // @synthesize locationModel=_locationModel;
- (void).cxx_destruct;
- (void)onGetPoiResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectAddressItem:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)filterPoiList:(id)arg1;
- (void)requestForBaiduPoi;
- (void)inputViewTextDidChange:(id)arg1;
- (void)initData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

