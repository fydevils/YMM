//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HCBETCPublicExtensionHeaderViewDelegate.h"
#import "HCBETCPublicExtensionStyle1CellDelegate.h"
#import "HCBETCPublicExtensionStyle2CellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBETCPublicExtensionModel, NSString, UITableView;

@interface HCBETCPublicExtensionView : UIView <UITableViewDataSource, UITableViewDelegate, HCBETCPublicExtensionHeaderViewDelegate, HCBETCPublicExtensionStyle1CellDelegate, HCBETCPublicExtensionStyle2CellDelegate>
{
    HCBETCPublicExtensionModel *_dataModel;
    UITableView *_tableView;
    CDUnknownBlockType _clickBlock;
    long long _maxLimitCount;
}

+ (void)refreshView:(CDUnknownBlockType)arg1 click:(CDUnknownBlockType)arg2;
@property(nonatomic) long long maxLimitCount; // @synthesize maxLimitCount=_maxLimitCount;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) HCBETCPublicExtensionModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)adaptBoundsFromContentSize;
- (void)clickActionInStyle2Cell:(id)arg1;
- (void)clickActionInStyle1Cell:(id)arg1;
- (void)clickActionInHeaderView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)visible;
- (void)inVisible;
- (void)initViews;
- (id)initWithDataModel:(id)arg1 clickBlock:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

