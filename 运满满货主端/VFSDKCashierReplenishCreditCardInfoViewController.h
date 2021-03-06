//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

#import "HooDatePickerDelegate.h"
#import "VFSDKCommonCreditDateCellDelegate.h"
#import "VFSDKCommonInputCellDelegate.h"

@class HooDatePicker, NSDictionary, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView;

@interface VFSDKCashierReplenishCreditCardInfoViewController : VFSDKBaseViewController <HooDatePickerDelegate, VFSDKCommonCreditDateCellDelegate, VFSDKCommonInputCellDelegate>
{
    NSDictionary *_card;
    NSDictionary *_params;
    UITableView *_tableView;
    UIButton *_nextBtn;
    UILabel *_cardInfoLabel;
    UIImageView *_bankCardIcon;
    NSLayoutConstraint *_bottomBarHeightConstraint;
    HooDatePicker *_datePicker;
    NSMutableArray *_cellDataArray;
}

@property(retain, nonatomic) NSMutableArray *cellDataArray; // @synthesize cellDataArray=_cellDataArray;
@property(retain, nonatomic) HooDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak NSLayoutConstraint *bottomBarHeightConstraint; // @synthesize bottomBarHeightConstraint=_bottomBarHeightConstraint;
@property(nonatomic) __weak UIImageView *bankCardIcon; // @synthesize bankCardIcon=_bankCardIcon;
@property(nonatomic) __weak UILabel *cardInfoLabel; // @synthesize cardInfoLabel=_cardInfoLabel;
@property(nonatomic) __weak UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSDictionary *card; // @synthesize card=_card;
- (void).cxx_destruct;
- (void)_p_completePay;
- (_Bool)_p_checkValue;
- (void)_p_nextButtonDidPressed:(id)arg1;
- (void)saveInputInfo:(long long)arg1 withContent:(id)arg2;
- (void)datePicker:(id)arg1 clickedSureButton:(id)arg2 date:(id)arg3;
- (void)datePicker:(id)arg1 clickedCancelButton:(id)arg2;
- (void)_p_showDatePicker;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)configCreditCell:(id)arg1 atIndexPath:(id)arg2;
- (id)configInputCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_p_setupTableView;
- (void)_p_setupStyle;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

