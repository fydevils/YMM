//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UITableView, UIViewController, YMMRegion;

@interface YMMCityView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _cityViewSelectCallback;
    UIViewController *_superVC;
    YMMRegion *_locationRegion;
    NSMutableArray *_historyArray;
    NSMutableArray *_historyIdArray;
    NSArray *_cities;
    NSArray *_capitalStrArray;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *capitalStrArray; // @synthesize capitalStrArray=_capitalStrArray;
@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) NSMutableArray *historyIdArray; // @synthesize historyIdArray=_historyIdArray;
@property(retain, nonatomic) NSMutableArray *historyArray; // @synthesize historyArray=_historyArray;
@property(retain, nonatomic) YMMRegion *locationRegion; // @synthesize locationRegion=_locationRegion;
@property(nonatomic) __weak UIViewController *superVC; // @synthesize superVC=_superVC;
@property(copy, nonatomic) CDUnknownBlockType cityViewSelectCallback; // @synthesize cityViewSelectCallback=_cityViewSelectCallback;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)drawCityCellInTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)drawHistoryCellInTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)drawLocationCellInTableView:(id)arg1 forIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addItemToHistory:(id)arg1;
- (id)sortObjectsAccordingToInitialWith:(id)arg1;
- (void)initData;
- (id)getCapitalStrings;
- (id)charactorWithString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

