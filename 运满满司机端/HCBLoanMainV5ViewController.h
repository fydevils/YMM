//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBLoanMainV5HeaderView, HCBLoanNewUserInfoViewModel, NSString, UITableView;

@interface HCBLoanMainV5ViewController : HCBLoanBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _titleDidUpdated;
    UITableView *_tableView;
    HCBLoanMainV5HeaderView *_headerView;
    HCBLoanNewUserInfoViewModel *_newUserViewModel;
}

+ (_Bool)baseLoadFromNib;
@property(retain, nonatomic) HCBLoanNewUserInfoViewModel *newUserViewModel; // @synthesize newUserViewModel=_newUserViewModel;
@property(retain, nonatomic) HCBLoanMainV5HeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType titleDidUpdated; // @synthesize titleDidUpdated=_titleDidUpdated;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_uploadEventWithURL:(id)arg1;
- (void)p_openButtonURL:(id)arg1 type:(unsigned long long)arg2;
- (void)p_setTableView;
- (void)reloadPage;
- (id)trackablePVPageId;
- (void)viewWillFirstAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

