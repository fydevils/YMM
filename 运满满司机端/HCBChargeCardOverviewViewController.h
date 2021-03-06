//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

#import "HCBCycleScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBCycleScrollView, HCBETCInvoiceBtn, NSArray, NSMutableArray, NSString, UILabel, UIScrollView, UITableView, UIView;

@interface HCBChargeCardOverviewViewController : HCBETCBaseViewController <UITableViewDataSource, UITableViewDelegate, HCBCycleScrollViewDelegate>
{
    UITableView *_tableView;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_chargeInfoBgView;
    NSMutableArray *_dataSource;
    NSArray *_cellTitles;
    HCBCycleScrollView *_adImageView;
    UIView *_rechargInfoContainerView;
    UILabel *_amountLabel;
    UILabel *_payDateLabel;
    UIView *_buttonContainerView;
    HCBETCInvoiceBtn *_carBtn;
    HCBETCInvoiceBtn *_cardBtn;
    HCBETCInvoiceBtn *_invoiceBtn;
    NSArray *_adArray;
    NSString *_waitTotal;
    double _firstPayTime;
}

@property(nonatomic) double firstPayTime; // @synthesize firstPayTime=_firstPayTime;
@property(copy, nonatomic) NSString *waitTotal; // @synthesize waitTotal=_waitTotal;
@property(retain, nonatomic) NSArray *adArray; // @synthesize adArray=_adArray;
@property(retain, nonatomic) HCBETCInvoiceBtn *invoiceBtn; // @synthesize invoiceBtn=_invoiceBtn;
@property(retain, nonatomic) HCBETCInvoiceBtn *cardBtn; // @synthesize cardBtn=_cardBtn;
@property(retain, nonatomic) HCBETCInvoiceBtn *carBtn; // @synthesize carBtn=_carBtn;
@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) UILabel *payDateLabel; // @synthesize payDateLabel=_payDateLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UIView *rechargInfoContainerView; // @synthesize rechargInfoContainerView=_rechargInfoContainerView;
@property(retain, nonatomic) HCBCycleScrollView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) NSArray *cellTitles; // @synthesize cellTitles=_cellTitles;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *chargeInfoBgView; // @synthesize chargeInfoBgView=_chargeInfoBgView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)cycleScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)cycleScrollView:(id)arg1 didScrollToIndex:(long long)arg2;
- (id)convertImageURLsFromAdvertModels:(id)arg1;
- (void)handleCreditBillChanged:(id)arg1;
- (void)addNotification;
- (void)removeNotification;
- (void)fetchChargeCardOverviewDatas;
- (void)refreshHeadAd;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickInvoiceBtn;
- (void)clickCardBtn;
- (void)clickCarBtn;
- (void)loadMasonry;
- (void)initViews;
- (void)initDatas;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

