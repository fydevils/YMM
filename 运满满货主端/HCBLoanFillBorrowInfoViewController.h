//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

#import "HCBLoanRiskShieldTrackable.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class HCBLoanAdListViewModel, HCBLoanAdView, HCBLoanAgreementCheckMarkView, HCBLoanFillBorrowInfoMoneyCell, HCBLoanFillBorrowInfoSMSCodeView, HCBLoanFillBorrowInfoVM, HCBLoanHyperlinkTextView, HCBLoanRiskShieldProvider, MASConstraint, NSLayoutConstraint, NSString, UIButton, UIScrollView, UITableView, UIView;

@interface HCBLoanFillBorrowInfoViewController : HCBLoanBaseViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, HCBLoanRiskShieldTrackable>
{
    _Bool _needRefreshBankCardList;
    UIScrollView *_scrollView;
    UIView *_contentView;
    HCBLoanAdView *_adView;
    UITableView *_tableView;
    HCBLoanAgreementCheckMarkView *_linkView;
    UIButton *_confirmButton;
    HCBLoanHyperlinkTextView *_footerTextView;
    MASConstraint *_contentHeightConstraint;
    HCBLoanFillBorrowInfoMoneyCell *_moneyCell;
    HCBLoanFillBorrowInfoSMSCodeView *_smsCodeView;
    NSLayoutConstraint *_adHeightConstraint;
    HCBLoanAdListViewModel *_adVM;
    HCBLoanFillBorrowInfoVM *_viewModel;
    HCBLoanRiskShieldProvider *_shieldProvider;
}

@property(retain, nonatomic) HCBLoanRiskShieldProvider *shieldProvider; // @synthesize shieldProvider=_shieldProvider;
@property(nonatomic) _Bool needRefreshBankCardList; // @synthesize needRefreshBankCardList=_needRefreshBankCardList;
@property(retain, nonatomic) HCBLoanFillBorrowInfoVM *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) HCBLoanAdListViewModel *adVM; // @synthesize adVM=_adVM;
@property(retain, nonatomic) NSLayoutConstraint *adHeightConstraint; // @synthesize adHeightConstraint=_adHeightConstraint;
@property(nonatomic) __weak HCBLoanFillBorrowInfoSMSCodeView *smsCodeView; // @synthesize smsCodeView=_smsCodeView;
@property(nonatomic) __weak HCBLoanFillBorrowInfoMoneyCell *moneyCell; // @synthesize moneyCell=_moneyCell;
@property(nonatomic) __weak MASConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(retain, nonatomic) HCBLoanHyperlinkTextView *footerTextView; // @synthesize footerTextView=_footerTextView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) HCBLoanAgreementCheckMarkView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) HCBLoanAdView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)p_gotoReviewStatus;
- (void)p_gotoNextPage;
- (void)p_gotoAuth4ElemWithTips:(id)arg1;
- (void)p_confirmLoan;
- (void)p_confirmButtonDidPressed:(id)arg1;
- (void)p_toChangePhoneNumber;
- (void)p_tryToChangePhoneNumber;
- (void)p_sendSMSCode;
- (void)p_showSMSCodeInputView;
- (void)p_updateListViewIfNeeded;
- (void)p_refreshContractList;
- (void)p_openUsageSelections;
- (void)p_fetchUseSenceListWithCompletion:(CDUnknownBlockType)arg1;
- (void)p_gotoAddBankCard;
- (void)p_openBankSelections;
- (void)p_refreshBankList;
- (void)p_openProductsSelections;
- (_Bool)p_showNoProductsToastIfNeeded;
- (void)p_reloadUIAfterBecomeNoProducts;
- (void)p_refreshProducts;
- (void)p_fetchPageInitData;
- (void)p_refreshAdViewWithCurrentData;
- (void)p_startRefreshAdList;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_setKVOOn:(_Bool)arg1;
- (void)p_textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_configUsageCell:(id)arg1;
- (void)p_configTermCell:(id)arg1;
- (id)p_textCellInTableView:(id)arg1 forRowIndex:(long long)arg2;
- (id)p_bankCellInTableView:(id)arg1;
- (void)p_updateMoneyCellWithProduct:(id)arg1;
- (id)p_moneyCellInTableView:(id)arg1;
- (void)p_reloadCellAtRowIndex:(long long)arg1;
- (void)p_setupTableView;
- (void)p_relayoutContentView;
- (void)p_reloadFooterView;
- (void)p_allUIReloadData;
- (void)p_setupUI;
- (id)riskShieldTrackablePageId;
- (void)clickBackButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidFirstAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillFirstAppear;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

