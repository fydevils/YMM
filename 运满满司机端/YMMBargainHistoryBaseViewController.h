//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "YMMTopTabbarDatasource.h"
#import "YMMTopTabbarDelegate.h"

@class NSString, YMMBargainHistoryViewController, YMMBargainHistoryViewModel, YMMQuoteHistoryViewController, YMMTopTabbarView;

@interface YMMBargainHistoryBaseViewController : YMMBaseViewController <YMMTopTabbarDelegate, YMMTopTabbarDatasource>
{
    YMMTopTabbarView *_topBar;
    YMMBargainHistoryViewModel *_viewModel;
    YMMBargainHistoryViewController *_bargainCtrl;
    YMMQuoteHistoryViewController *_historyCtrl;
}

@property(retain, nonatomic) YMMQuoteHistoryViewController *historyCtrl; // @synthesize historyCtrl=_historyCtrl;
@property(retain, nonatomic) YMMBargainHistoryViewController *bargainCtrl; // @synthesize bargainCtrl=_bargainCtrl;
@property(retain, nonatomic) YMMBargainHistoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) YMMTopTabbarView *topBar; // @synthesize topBar=_topBar;
- (void).cxx_destruct;
- (void)topTabbarView:(id)arg1 didSelectColumnAtIndex:(long long)arg2 fromIndex:(long long)arg3;
- (id)topTabbarView:(id)arg1 contentViewControllerForColumnAtIndex:(long long)arg2;
- (long long)numberOfColumsInTopTabbarView:(id)arg1;
- (void)setupSubCtrl:(_Bool)arg1 isAll:(_Bool)arg2;
- (void)requestBargainHistoryData;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

