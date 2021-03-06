//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoBaseViewController.h"

#import "FilterControlViewDelegate.h"
#import "YMMAdvertisementViewDelegate.h"

@class FilterControlView, MNAssistiveBtn, NSDate, NSString, UIBarButtonItem, UILabel, UISegmentedControl, UIView, UIView<YMMScrollTextViewProtocol>, UIViewController, YMMBarButtonItem, YMMCargoFilterModel, YMMCargoListViewController, YMMLocationAddressModel, YMMSubscriptModel, YMMVoiceCargoSearchAudioPlayer, YMMVoiceCargoSearchDialogView, YMMVoiceCargoSearchGuideView;

@interface YMMCargoMainViewController : YMMCargoBaseViewController <FilterControlViewDelegate, YMMAdvertisementViewDelegate>
{
    long long imChatCount;
    long long imMessageCount;
    long long imAcitivityCount;
    long long imNPCCount;
    _Bool _voiceGuideViewIsShow;
    _Bool _isFirstLoad;
    NSDate *tabStartTime;
    _Bool _needShowPrompt;
    _Bool _hasHiddenNavigation;
    _Bool _showCargoTopAdView;
    _Bool _viewIsDidDisAppear;
    _Bool _showBrokerCargoView;
    _Bool _isShipperNoVipUI;
    _Bool _notNeedRefreshList;
    _Bool _feedbackShowing;
    YMMCargoFilterModel *_filterModel;
    YMMSubscriptModel *_subscription;
    UIView *_extraTitleView;
    UIView *_lastTitleView;
    UILabel *_titleLb;
    UIView *_titleView;
    UILabel *_mainTitleLb;
    UIView *_mainTitleView;
    YMMBarButtonItem *_rightItem;
    YMMBarButtonItem *_leftItem;
    UIBarButtonItem *_callRecordItem;
    UIBarButtonItem *_messageCenterItem;
    UIBarButtonItem *_subscriptSettingItem;
    UISegmentedControl *_segmentControl;
    FilterControlView *_filterControlView;
    YMMCargoListViewController *_cargoListVC;
    YMMCargoListViewController *_nearbyCargoListVC;
    MNAssistiveBtn *_popupBtn;
    UIViewController *_brokerCargoVC;
    YMMLocationAddressModel *_currentLocation;
    UIView<YMMScrollTextViewProtocol> *_advertiseView;
    YMMVoiceCargoSearchGuideView *_voiceGuideView;
    YMMVoiceCargoSearchDialogView *_voiceCargoSearchDialogView;
    YMMVoiceCargoSearchAudioPlayer *_player;
    id <YMMIMServiceProtocol> _imService;
    id <YMMTransactionServiceProtocol> _transactionService;
    id <YMMFeedbackModuleProtocol> _feedbackService;
    long long _unreadQuotedMessageCount;
    UIView *_feedbackView;
}

@property(retain, nonatomic) UIView *feedbackView; // @synthesize feedbackView=_feedbackView;
@property(nonatomic, getter=isFeedBackShowing) _Bool feedbackShowing; // @synthesize feedbackShowing=_feedbackShowing;
@property(nonatomic) long long unreadQuotedMessageCount; // @synthesize unreadQuotedMessageCount=_unreadQuotedMessageCount;
@property(retain, nonatomic) id <YMMFeedbackModuleProtocol> feedbackService; // @synthesize feedbackService=_feedbackService;
@property(retain, nonatomic) id <YMMTransactionServiceProtocol> transactionService; // @synthesize transactionService=_transactionService;
@property(retain, nonatomic) id <YMMIMServiceProtocol> imService; // @synthesize imService=_imService;
@property(retain, nonatomic) YMMVoiceCargoSearchAudioPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) YMMVoiceCargoSearchDialogView *voiceCargoSearchDialogView; // @synthesize voiceCargoSearchDialogView=_voiceCargoSearchDialogView;
@property(retain, nonatomic) YMMVoiceCargoSearchGuideView *voiceGuideView; // @synthesize voiceGuideView=_voiceGuideView;
@property(retain, nonatomic) UIView<YMMScrollTextViewProtocol> *advertiseView; // @synthesize advertiseView=_advertiseView;
@property(nonatomic) _Bool notNeedRefreshList; // @synthesize notNeedRefreshList=_notNeedRefreshList;
@property(nonatomic) _Bool isShipperNoVipUI; // @synthesize isShipperNoVipUI=_isShipperNoVipUI;
@property(retain, nonatomic) YMMLocationAddressModel *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) _Bool showBrokerCargoView; // @synthesize showBrokerCargoView=_showBrokerCargoView;
@property(retain, nonatomic) UIViewController *brokerCargoVC; // @synthesize brokerCargoVC=_brokerCargoVC;
@property(nonatomic) _Bool viewIsDidDisAppear; // @synthesize viewIsDidDisAppear=_viewIsDidDisAppear;
@property(retain, nonatomic) MNAssistiveBtn *popupBtn; // @synthesize popupBtn=_popupBtn;
@property(nonatomic) _Bool showCargoTopAdView; // @synthesize showCargoTopAdView=_showCargoTopAdView;
@property(nonatomic) _Bool hasHiddenNavigation; // @synthesize hasHiddenNavigation=_hasHiddenNavigation;
@property(retain, nonatomic) YMMCargoListViewController *nearbyCargoListVC; // @synthesize nearbyCargoListVC=_nearbyCargoListVC;
@property(retain, nonatomic) YMMCargoListViewController *cargoListVC; // @synthesize cargoListVC=_cargoListVC;
@property(retain, nonatomic) FilterControlView *filterControlView; // @synthesize filterControlView=_filterControlView;
@property(retain, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UIBarButtonItem *subscriptSettingItem; // @synthesize subscriptSettingItem=_subscriptSettingItem;
@property(retain, nonatomic) UIBarButtonItem *messageCenterItem; // @synthesize messageCenterItem=_messageCenterItem;
@property(retain, nonatomic) UIBarButtonItem *callRecordItem; // @synthesize callRecordItem=_callRecordItem;
@property(retain, nonatomic) YMMBarButtonItem *leftItem; // @synthesize leftItem=_leftItem;
@property(retain, nonatomic) YMMBarButtonItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) UIView *mainTitleView; // @synthesize mainTitleView=_mainTitleView;
@property(retain, nonatomic) UILabel *mainTitleLb; // @synthesize mainTitleLb=_mainTitleLb;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(retain, nonatomic) UIView *lastTitleView; // @synthesize lastTitleView=_lastTitleView;
@property(retain, nonatomic) UIView *extraTitleView; // @synthesize extraTitleView=_extraTitleView;
@property(nonatomic) _Bool needShowPrompt; // @synthesize needShowPrompt=_needShowPrompt;
@property(retain, nonatomic) YMMSubscriptModel *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) YMMCargoFilterModel *filterModel; // @synthesize filterModel=_filterModel;
- (void).cxx_destruct;
- (void)addQuotedPopupButtonTapJournal;
- (void)addQuotedPopupButtonViewJournal;
- (void)addJournalForLocationGuide;
- (void)addJournalForScrollToTop;
- (void)addJournalForSwitch:(long long)arg1;
- (void)addJournalForPageView;
- (void)addCallRecordJournal;
- (void)addJournalForSetting;
- (void)addMessageCenterViewJournal;
- (void)addMessageCenterJournal;
- (void)addJournalForMore;
- (void)setHasHiddenNavigation:(_Bool)arg1 contentOffsetY:(double)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)didHideContentView;
- (void)didBeginVoiceCargoSearch;
- (void)didChangeSearchBarFilterItem:(id)arg1;
- (void)didBeginFilter:(unsigned long long)arg1 withFilterCondition:(id)arg2;
- (void)saveFeedBackViewShowedTimeInterval;
- (_Bool)isFeedBackViewShowedWeekAgo;
- (void)hideFeedBackView;
- (void)showFeedBackView;
- (void)addNotificationObserver;
- (void)dismissVoiceDialogView;
- (void)showVoiceSearchGuideView;
- (id)currentCargoListVC;
- (_Bool)showBrokCargoView;
- (_Bool)showCargoListView;
- (_Bool)isOneCityRegion:(id)arg1;
- (_Bool)showNearbyCargoListView;
- (_Bool)canShowNearbyCityView;
- (id)showTitleString:(id)arg1;
- (void)showScrollAdvertisement:(id)arg1;
- (void)requestTopAdModel;
- (id)changeRegions:(id)arg1;
- (void)imAnimated;
- (void)updateRightBarButtonItemCount:(id)arg1;
- (void)updateLeftItemCount:(id)arg1 showRedPoint:(_Bool)arg2;
- (void)updateTitleView:(_Bool)arg1;
- (void)updateNearbyTitle;
- (void)updateUpstreamEntrance;
- (void)updateAllViewsFrame:(_Bool)arg1 showTopAd:(_Bool)arg2;
- (void)updateCargoListViewsFrame;
- (void)registerPopBtn;
- (void)updateFilterView:(id)arg1;
- (void)refreshHistoryBtnStatus;
- (void)updateQuoteNewMessage:(long long)arg1;
- (void)updateQuoteTip;
- (void)refreshRightBarButtomItemBadge:(long long)arg1;
- (void)didReceiveBargainNotification:(id)arg1;
- (void)updateMessageCount;
- (void)changeTabbarStyle:(_Bool)arg1 contentOffsetY:(double)arg2;
- (void)scrollToTop:(_Bool)arg1;
- (void)switchSegementAction:(long long)arg1 notRefresh:(_Bool)arg2;
- (void)gotoSubscriptSettingViewController;
- (void)gotoCallRecordViewController;
- (void)gotoMessageCenter;
- (void)gotoMessageCenterForTap:(id)arg1;
- (void)gotoPriceSendVC;
- (void)setRightBarButtonItemOnce;
- (void)restoreAdvertisementViewAndFilterControl;
- (void)temporarilyHiddenAdvertisementViewAndFilterControl;
- (void)updateFilterControlView:(id)arg1;
- (void)scrollToTopAndJournal:(_Bool)arg1;
- (_Bool)shouldSelectStartCity;
- (_Bool)canRefreshCargos;
- (void)updateItemsCount;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)ymm_navBarTheme;
- (id)ymm_pageName;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

