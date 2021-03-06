//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UISegmentedControl, UITableView;

@interface MoreMenuView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_maskView;
    UIView *_containerView;
    UITableView *_optionTableView;
    NSArray *_sections;
    NSArray *_strategys;
    NSArray *_strategyIcons;
    UISegmentedControl *_viewModeSeg;
    UISegmentedControl *_nightTypeSeg;
    UIButton *_finishButton;
    long long _nightType;
    id <MoreMenuViewDelegate> _delegate;
    long long _trackingMode;
    long long _strategyTypes;
}

@property(nonatomic) long long strategyTypes; // @synthesize strategyTypes=_strategyTypes;
@property(nonatomic) long long trackingMode; // @synthesize trackingMode=_trackingMode;
@property(nonatomic) id <MoreMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long nightType; // @synthesize nightType=_nightType;
- (void).cxx_destruct;
- (void)finishButtonAction:(id)arg1;
- (void)doneBtnClick:(id)arg1;
- (void)preferencesitemBtnClick:(id)arg1;
- (void)maskViewTap;
- (void)nightTypeSegmentedControlAction:(id)arg1;
- (void)viewModeSegmentedControlAction:(id)arg1;
- (id)tableViewCellForNightType;
- (id)tableViewCellForViewMode;
- (id)tableViewCellForStrategy;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)initFinishButton;
- (void)initTableView;
- (void)initMaskView;
- (void)createMoreMenuView;
- (void)initProperties;
- (void)setUp;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

