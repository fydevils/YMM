//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBLoan6ElemAuthProtocolView, HCBLoanDeferInfoViewModel, NSArray, NSLayoutConstraint, NSString, UIButton, UITableView;

@interface HCBLoanDeferPayInfoViewController : HCBLoanBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UIButton *_bottomButton;
    NSLayoutConstraint *_bottomViewHeight;
    NSArray *_lists;
    HCBLoan6ElemAuthProtocolView *_protocolView;
    HCBLoanDeferInfoViewModel *_deferViewModel;
    NSString *_loanProjNo;
    NSString *_installId;
}

@property(copy, nonatomic) NSString *installId; // @synthesize installId=_installId;
@property(copy, nonatomic) NSString *loanProjNo; // @synthesize loanProjNo=_loanProjNo;
@property(retain, nonatomic) HCBLoanDeferInfoViewModel *deferViewModel; // @synthesize deferViewModel=_deferViewModel;
@property(retain, nonatomic) HCBLoan6ElemAuthProtocolView *protocolView; // @synthesize protocolView=_protocolView;
@property(retain, nonatomic) NSArray *lists; // @synthesize lists=_lists;
@property(nonatomic) __weak NSLayoutConstraint *bottomViewHeight; // @synthesize bottomViewHeight=_bottomViewHeight;
@property(nonatomic) __weak UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_createListCell;
- (void)p_reloadProtocolContent;
- (void)p_setUpTableView;
- (void)bottomButtonClick:(id)arg1;
- (id)trackablePVPageId;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

