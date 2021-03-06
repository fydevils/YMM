//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

@class UILabel, UIView, YMMAccountIndexModel;

@interface YMMAccountIndexViewController : YMMBaseViewController
{
    UILabel *_accountL;
    UILabel *_moneyFlagL;
    UIView *_contentView;
    UIView *_itemsView;
    YMMAccountIndexModel *_indexModel;
}

@property(retain, nonatomic) YMMAccountIndexModel *indexModel; // @synthesize indexModel=_indexModel;
@property(retain, nonatomic) UIView *itemsView; // @synthesize itemsView=_itemsView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *moneyFlagL; // @synthesize moneyFlagL=_moneyFlagL;
@property(retain, nonatomic) UILabel *accountL; // @synthesize accountL=_accountL;
- (void).cxx_destruct;
- (void)fetchAccountTotal;
- (void)gotoHelpPage;
- (void)itemClick:(id)arg1;
- (void)setupViewWithModel:(id)arg1;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)ymm_setupNavigationBar;
- (void)viewDidLoad;

@end

