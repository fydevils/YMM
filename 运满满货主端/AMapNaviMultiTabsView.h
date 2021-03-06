//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIColor, UIScrollView;

@interface AMapNaviMultiTabsView : UIView <UIScrollViewDelegate>
{
    id <AMapNaviMultiTabsViewDelegate> _delegate;
    UIColor *_tabsBgColor;
    UIColor *_tabsSelectedUnderlineColor;
    double _underlineWidth;
    double _tabWidth;
    double _tabTextFontSize;
    UIColor *_tabTextFontColor;
    UIScrollView *_tabsScrollView;
    UIView *_underlineView;
    NSArray *_tabTexts;
    long long _lastBtnTag;
    struct UIEdgeInsets _tabsTitleEdgeInsets;
}

@property(nonatomic) long long lastBtnTag; // @synthesize lastBtnTag=_lastBtnTag;
@property(retain, nonatomic) NSArray *tabTexts; // @synthesize tabTexts=_tabTexts;
@property(retain, nonatomic) UIView *underlineView; // @synthesize underlineView=_underlineView;
@property(retain, nonatomic) UIScrollView *tabsScrollView; // @synthesize tabsScrollView=_tabsScrollView;
@property(nonatomic) struct UIEdgeInsets tabsTitleEdgeInsets; // @synthesize tabsTitleEdgeInsets=_tabsTitleEdgeInsets;
@property(retain, nonatomic) UIColor *tabTextFontColor; // @synthesize tabTextFontColor=_tabTextFontColor;
@property(nonatomic) double tabTextFontSize; // @synthesize tabTextFontSize=_tabTextFontSize;
@property(nonatomic) double tabWidth; // @synthesize tabWidth=_tabWidth;
@property(nonatomic) double underlineWidth; // @synthesize underlineWidth=_underlineWidth;
@property(retain, nonatomic) UIColor *tabsSelectedUnderlineColor; // @synthesize tabsSelectedUnderlineColor=_tabsSelectedUnderlineColor;
@property(retain, nonatomic) UIColor *tabsBgColor; // @synthesize tabsBgColor=_tabsBgColor;
@property(nonatomic) __weak id <AMapNaviMultiTabsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createScrollViewWithFrame:(struct CGRect)arg1;
- (void)createUnderline;
- (void)createTabBtns;
- (void)updateTabsScrollViewContentOffsetX:(id)arg1;
- (id)updateTheBtnToSelected:(unsigned long long)arg1;
- (void)handleWhenTabBtnClicked:(unsigned long long)arg1 isInit:(_Bool)arg2;
- (void)tabBtnsAction:(id)arg1;
- (void)setupWithTabTexts:(id)arg1 startIndex:(long long)arg2;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

