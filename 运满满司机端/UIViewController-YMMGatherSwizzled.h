//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString;

@interface UIViewController (YMMGatherSwizzled)
+ (void)load;
- (_Bool)ymm_needIgnorePageEvent;
- (id)ymm_fromViewController;
- (id)ymm_pageLifecycleIdChain;
- (id)ymm_pageChain;
- (id)ymm_pageMark;
- (id)ymm_gatherPageName;
@property(copy, nonatomic) NSString *ymm_viewControllerAppearTime;
@property(copy, nonatomic) NSString *ymm_viewControllerDidLoadTime;
@property(copy, nonatomic) NSString *ymm_lifecycleId;
- (id)ymm_generateAppLeavePageLog;
- (id)ymm_generateAppEnterPageLog;
- (void)ymm_aspect_hookViewDidDisappear;
- (void)ymm_aspect_hookViewDidAppear;
- (void)ymm_aspect_hookDealloc;
- (void)ymm_aspect_hookViewDidLoad;
@end

