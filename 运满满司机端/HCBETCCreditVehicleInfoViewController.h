//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

#import "HCBPlateNumViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableDictionary, NSString, UIDatePicker, UITableView, UIView;

@interface HCBETCCreditVehicleInfoViewController : HCBETCBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, HCBPlateNumViewDelegate>
{
    _Bool _isEdit;
    NSMutableDictionary *_vehicleInfoDic;
    NSMutableDictionary *_dataSource;
    UITableView *_tableView;
    UIView *_footerView;
    UIDatePicker *_datePicker;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(retain, nonatomic) NSMutableDictionary *vehicleInfoDic; // @synthesize vehicleInfoDic=_vehicleInfoDic;
- (void).cxx_destruct;
- (void)HCBPlateNumViewEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)isShowTableViewCellAccessoryAtIndexPath:(id)arg1;
- (long long)keyboardTypeAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)vanFrontColorStringWithId:(id)arg1;
- (id)vanPlateColorStringWithId:(id)arg1;
- (void)showPicker:(long long)arg1;
- (void)handleTap:(id)arg1;
- (void)changeTime:(id)arg1;
- (void)submitVehicleInfo;
- (void)clickConfirmBtn;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

