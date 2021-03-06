//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

#import "HCBTableViewPlaceHolderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView, UIView;

@interface HCBCardBindViewController : HCBETCBaseViewController <UITableViewDelegate, UITableViewDataSource, HCBTableViewPlaceHolderDelegate>
{
    _Bool _navigationPopEnabled;
    NSMutableArray *_dataSource;
    NSString *_defaultCardNumber;
    NSString *_popVc;
    CDUnknownBlockType _finishChangeHandler;
    UITableView *_mTableView;
    UIView *_tableHeadView;
}

@property(nonatomic, getter=isNavigationPopEnabled) _Bool navigationPopEnabled; // @synthesize navigationPopEnabled=_navigationPopEnabled;
@property(retain, nonatomic) UIView *tableHeadView; // @synthesize tableHeadView=_tableHeadView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(copy, nonatomic) CDUnknownBlockType finishChangeHandler; // @synthesize finishChangeHandler=_finishChangeHandler;
@property(copy, nonatomic) NSString *popVc; // @synthesize popVc=_popVc;
@property(copy, nonatomic) NSString *defaultCardNumber; // @synthesize defaultCardNumber=_defaultCardNumber;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)hcb_makePlaceHolderView;
- (id)hcb_placeHolderHeadView;
- (void)getBindCardRecordwithCompletionHandler;
- (void)headRefresh;
- (void)headBeginRefresh;
- (void)rechargeAction;
- (void)deleteHandle:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)cardListChanged;
- (void)checkCardChanged:(id)arg1;
- (void)clickBackButton:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

