//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UITableView, YMMDriveLicensePicHeaderView;

@interface YMMLicenseBaseViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _canEdit;
    long long _operateType;
    UITableView *_tableView;
    YMMDriveLicensePicHeaderView *_headerView;
    NSArray *_titleArray;
    NSArray *_placeArray;
    UIButton *_commitButton;
}

@property(retain, nonatomic) UIButton *commitButton; // @synthesize commitButton=_commitButton;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(retain, nonatomic) NSArray *placeArray; // @synthesize placeArray=_placeArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) YMMDriveLicensePicHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long operateType; // @synthesize operateType=_operateType;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)commitButtonAction:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

