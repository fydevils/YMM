//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

@class UIView, YMMIMEmptyView;

@interface YMMIMBaseVC : YMMBaseViewController
{
    YMMIMEmptyView *_emptyView;
    UIView *_errorNetworkView;
}

@property(retain, nonatomic) UIView *errorNetworkView; // @synthesize errorNetworkView=_errorNetworkView;
@property(retain, nonatomic) YMMIMEmptyView *emptyView; // @synthesize emptyView=_emptyView;
- (void).cxx_destruct;
- (_Bool)layoutEmptyView;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)showEmptyViewWithImage:(id)arg1 title:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

