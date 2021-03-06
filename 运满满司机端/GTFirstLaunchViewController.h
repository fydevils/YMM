//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "YMMBaseAlertViewDelegate.h"

@class NSDate, NSDictionary, NSString, UIImageView, YMMAdvertisementModel, YMMPrivacyManager;

@interface GTFirstLaunchViewController : YMMBaseViewController <YMMBaseAlertViewDelegate>
{
    NSDictionary *_launchOption;
    NSDate *advShowDate;
    _Bool _isFirstInstall;
    _Bool _hasAdvertisment;
    _Bool _canDoWillAppear;
    UIImageView *_backImgView;
    YMMAdvertisementModel *_currentLaunchAd;
    YMMPrivacyManager *_privacyManager;
}

@property(retain, nonatomic) YMMPrivacyManager *privacyManager; // @synthesize privacyManager=_privacyManager;
@property(nonatomic) _Bool canDoWillAppear; // @synthesize canDoWillAppear=_canDoWillAppear;
@property(retain, nonatomic) YMMAdvertisementModel *currentLaunchAd; // @synthesize currentLaunchAd=_currentLaunchAd;
@property(nonatomic) _Bool hasAdvertisment; // @synthesize hasAdvertisment=_hasAdvertisment;
@property(retain, nonatomic) UIImageView *backImgView; // @synthesize backImgView=_backImgView;
@property(nonatomic) _Bool isFirstInstall; // @synthesize isFirstInstall=_isFirstInstall;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)ymm_alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)gotoLoginVC;
- (void)gotoMainVC;
- (void)registerNotificationAndLocation;
- (void)getUserInfo;
- (_Bool)firstOpenApp;
- (void)showWelcomeView;
- (void)initViews;
- (void)initData;
- (void)switchCurrentView;
- (void)visitorEntranceAction;
- (void)loginSuccessAction;
- (void)configApplicationLaunchOption:(id)arg1;
- (void)dealloc;
- (id)ymm_pageName;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

