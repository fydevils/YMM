//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView, YMMMYBQualityHeadView;

@interface YMMMYBQualityInfoAlertView : YMMPopupMaskView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _normalSelected;
    UITableView *_tableView;
    NSArray *_qualityInfoAry;
    YMMMYBQualityHeadView *_headView;
    double _tableHeight;
    CDUnknownBlockType _jumpSchemeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType jumpSchemeBlock; // @synthesize jumpSchemeBlock=_jumpSchemeBlock;
@property(nonatomic) double tableHeight; // @synthesize tableHeight=_tableHeight;
@property(retain, nonatomic) YMMMYBQualityHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSArray *qualityInfoAry; // @synthesize qualityInfoAry=_qualityInfoAry;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool normalSelected; // @synthesize normalSelected=_normalSelected;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)ymm_maskDoDisappear;
- (void)ymm_maskDoAppear;
- (void)ymm_loadView;
- (void)showForLogoUrl:(id)arg1 Title:(id)arg2 ModelAry:(id)arg3 JumpSchemeBlock:(CDUnknownBlockType)arg4;
- (void)showFineSecurityTipView:(id)arg1 jumpBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

