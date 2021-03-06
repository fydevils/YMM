//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "VFWalletSDKDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface HCBChargeCardBillsViewController : HCBETCBaseViewController <UITableViewDataSource, UITableViewDelegate, VFWalletSDKDelegate>
{
    NSString *_cardType;
    long long _billStatus;
    NSString *_cardName;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    long long _pageNo;
}

@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
@property(nonatomic) long long billStatus; // @synthesize billStatus=_billStatus;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (void)fetchCardBills:(_Bool)arg1;
- (id)hcb_makePlaceHolderView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didFinishedTransType:(long long)arg1 resultType:(long long)arg2 result:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initViews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

