//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

#import "HooDatePickerDelegate.h"
#import "VFSDKCommonCreditDateCellDelegate.h"
#import "VFSDKCommonInputCellDelegate.h"
#import "VFSDKQPUserAgreementViewControllerDelegate.h"

@class HooDatePicker, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface VFSDKCashierAddCardViewController : VFSDKBaseViewController <HooDatePickerDelegate, VFSDKCommonCreditDateCellDelegate, VFSDKCommonInputCellDelegate, VFSDKQPUserAgreementViewControllerDelegate>
{
    _Bool selectedAgreement;
    UIButton *markBtn;
    UITableView *_tableView;
    UIButton *_nextBtn;
    UILabel *_cardInfoLabel;
    HooDatePicker *_datePicker;
    long long _bindType;
    NSMutableArray *_bindCardInfoArr;
    UIImageView *_bankCardIcon;
    long long _shouldTipIdx;
    NSString *_server_AuthOrderNo;
    UIImageView *_logoIV;
    UIView *_lineView;
    NSLayoutConstraint *_nextBtnBarHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *nextBtnBarHeight; // @synthesize nextBtnBarHeight=_nextBtnBarHeight;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *logoIV; // @synthesize logoIV=_logoIV;
@property(copy, nonatomic) NSString *server_AuthOrderNo; // @synthesize server_AuthOrderNo=_server_AuthOrderNo;
@property(nonatomic) long long shouldTipIdx; // @synthesize shouldTipIdx=_shouldTipIdx;
@property(nonatomic) __weak UIImageView *bankCardIcon; // @synthesize bankCardIcon=_bankCardIcon;
@property(retain, nonatomic) NSMutableArray *bindCardInfoArr; // @synthesize bindCardInfoArr=_bindCardInfoArr;
@property(nonatomic) long long bindType; // @synthesize bindType=_bindType;
@property(retain, nonatomic) HooDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak UILabel *cardInfoLabel; // @synthesize cardInfoLabel=_cardInfoLabel;
@property(nonatomic) __weak UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *markBtn; // @synthesize markBtn;
@property(nonatomic) _Bool selectedAgreement; // @synthesize selectedAgreement;
- (void).cxx_destruct;
- (void)toABCSignPage;
- (void)toVerifyMobilePage;
- (void)saveInputInfo:(long long)arg1 withContent:(id)arg2;
- (void)datePicker:(id)arg1 clickedSureButton:(id)arg2 date:(id)arg3;
- (void)datePicker:(id)arg1 clickedCancelButton:(id)arg2;
- (void)showDatePicker;
- (void)userAgreed;
- (void)payecoPay:(_Bool)arg1;
- (id)configPayecoParams:(_Bool)arg1;
- (void)retryInputMobile;
- (void)canContinue;
- (void)next:(id)arg1;
- (void)toUserAgreement;
- (void)markBtnTouch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)configCreditCell:(id)arg1 atIndexPath:(id)arg2;
- (id)configInputCell:(id)arg1 atIndexPath:(id)arg2;
- (void)checkBankcardInfoMatched;
- (_Bool)checkValue;
- (long long)getCreditExpiryDateRow;
- (id)addTableFooter;
- (void)setupTableView;
- (void)setupStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

