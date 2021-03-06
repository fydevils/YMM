//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCInvoiceBaseViewController.h"

#import "HCBRegionCollectionViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"
#import "VFWalletSDKDelegate.h"

@class HCBETCInvoicePostOptionBtn, HCBETCInvoiceRechargeTradeModel, HCBETCInvoiceTransitTradeModel, NSArray, NSDictionary, NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface HCBETCInvoiceTitleConfirmVC : HCBETCInvoiceBaseViewController <UITextViewDelegate, VFWalletSDKDelegate, HCBRegionCollectionViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _getMoneySuccess;
    _Bool _needPost;
    _Bool _bindFlag;
    _Bool _showInvitCode;
    float _invoiceCommission;
    float _postageMoney;
    NSDictionary *_infoDic;
    UITableView *_tableview;
    UIButton *_payBtn;
    HCBETCInvoiceRechargeTradeModel *_rechargeTradeModel;
    HCBETCInvoiceTransitTradeModel *_transitTradeModel;
    NSString *_fullRegionStr;
    NSArray *_invoiceTitleArray;
    NSMutableArray *_invoiceInfoArray;
    NSDictionary *_addressDic;
    UIView *_footerView;
    NSString *_addresseeNameStr;
    NSString *_addresseeTelStr;
    NSString *_inviteCodeStr;
    NSString *_addressStr;
    HCBETCInvoicePostOptionBtn *_paperInvoiceBtn;
    HCBETCInvoicePostOptionBtn *_electronicInvoiceBtn;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) HCBETCInvoicePostOptionBtn *electronicInvoiceBtn; // @synthesize electronicInvoiceBtn=_electronicInvoiceBtn;
@property(retain, nonatomic) HCBETCInvoicePostOptionBtn *paperInvoiceBtn; // @synthesize paperInvoiceBtn=_paperInvoiceBtn;
@property(copy, nonatomic) NSString *addressStr; // @synthesize addressStr=_addressStr;
@property(copy, nonatomic) NSString *inviteCodeStr; // @synthesize inviteCodeStr=_inviteCodeStr;
@property(copy, nonatomic) NSString *addresseeTelStr; // @synthesize addresseeTelStr=_addresseeTelStr;
@property(copy, nonatomic) NSString *addresseeNameStr; // @synthesize addresseeNameStr=_addresseeNameStr;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSDictionary *addressDic; // @synthesize addressDic=_addressDic;
@property(nonatomic) _Bool showInvitCode; // @synthesize showInvitCode=_showInvitCode;
@property(retain, nonatomic) NSMutableArray *invoiceInfoArray; // @synthesize invoiceInfoArray=_invoiceInfoArray;
@property(retain, nonatomic) NSArray *invoiceTitleArray; // @synthesize invoiceTitleArray=_invoiceTitleArray;
@property(retain, nonatomic) NSString *fullRegionStr; // @synthesize fullRegionStr=_fullRegionStr;
@property(nonatomic) _Bool bindFlag; // @synthesize bindFlag=_bindFlag;
@property(nonatomic) _Bool needPost; // @synthesize needPost=_needPost;
@property(nonatomic) _Bool getMoneySuccess; // @synthesize getMoneySuccess=_getMoneySuccess;
@property(nonatomic) float postageMoney; // @synthesize postageMoney=_postageMoney;
@property(nonatomic) float invoiceCommission; // @synthesize invoiceCommission=_invoiceCommission;
@property(retain, nonatomic) HCBETCInvoiceTransitTradeModel *transitTradeModel; // @synthesize transitTradeModel=_transitTradeModel;
@property(retain, nonatomic) HCBETCInvoiceRechargeTradeModel *rechargeTradeModel; // @synthesize rechargeTradeModel=_rechargeTradeModel;
@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) NSDictionary *infoDic; // @synthesize infoDic=_infoDic;
- (void).cxx_destruct;
- (_Bool)needPay;
- (_Bool)postageStatus;
- (_Bool)cancelPayShouldPop;
- (void)didFinishedTransType:(long long)arg1 resultType:(long long)arg2 result:(id)arg3;
- (void)regionCollectionViewController:(id)arg1 didSelectRegion:(id)arg2;
- (id)postInfoRightTipAtIndexPath:(long long)arg1;
- (id)postInfoLeftTipAtIndexPath:(long long)arg1;
- (long long)cellTypeAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getCellContentWithIndexPath:(id)arg1;
- (void)saveInvoiceAddress:(id)arg1;
- (void)requestData;
- (void)requestShowInviteCode;
- (void)requestBindPostFlag;
- (void)saveTableViewContext;
- (void)clickRegionBtn:(id)arg1;
- (void)clickPayBtn:(id)arg1;
- (id)setupPVCurrentPageName;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

