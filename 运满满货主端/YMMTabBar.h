//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIColor, YMMTabBarItem;

@interface YMMTabBar : UIView
{
    long long count;
    NSMutableArray *_tabBarItems;
    NSArray *_titles;
    NSArray *_itemImages;
    NSArray *_selectItemImages;
    NSArray *_titleColors;
    NSArray *_selectTitleColors;
    UIColor *_defColor;
    UIColor *_tintColor;
    long long _selectIndex;
    YMMTabBarItem *_tabBarItem;
    id <YMMTabBarDelegate> _delegate;
    long long _style;
    NSArray *_iconStyles;
    NSArray *_placeholderImages;
    NSArray *_selectPlaceholdImages;
}

@property(retain, nonatomic) NSArray *selectPlaceholdImages; // @synthesize selectPlaceholdImages=_selectPlaceholdImages;
@property(retain, nonatomic) NSArray *placeholderImages; // @synthesize placeholderImages=_placeholderImages;
@property(retain, nonatomic) NSArray *iconStyles; // @synthesize iconStyles=_iconStyles;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <YMMTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YMMTabBarItem *tabBarItem; // @synthesize tabBarItem=_tabBarItem;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *defColor; // @synthesize defColor=_defColor;
@property(retain, nonatomic) NSArray *selectTitleColors; // @synthesize selectTitleColors=_selectTitleColors;
@property(retain, nonatomic) NSArray *titleColors; // @synthesize titleColors=_titleColors;
@property(retain, nonatomic) NSArray *selectItemImages; // @synthesize selectItemImages=_selectItemImages;
@property(retain, nonatomic) NSArray *itemImages; // @synthesize itemImages=_itemImages;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(readonly, nonatomic) NSMutableArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
- (void).cxx_destruct;
- (void)setBadge:(long long)arg1 index:(unsigned long long)arg2;
- (void)selectItem:(id)arg1;
- (void)addItems;
- (void)layoutSubviews;
- (id)initWithTitles:(id)arg1 itemImages:(id)arg2 selectImages:(id)arg3 titleColors:(id)arg4 selectTitleColors:(id)arg5 iconStyles:(id)arg6 placeholdImages:(id)arg7 selectPlaceholdImages:(id)arg8;
- (id)initWithTitles:(id)arg1 itemImages:(id)arg2 selectImages:(id)arg3 titleColors:(id)arg4 selectTitleColors:(id)arg5 iconStyles:(id)arg6;
- (id)initWithTitles:(id)arg1 itemImages:(id)arg2 selectImages:(id)arg3 titleColors:(id)arg4 selectTitleColors:(id)arg5 style:(long long)arg6;
- (id)initWithTitles:(id)arg1 itemImages:(id)arg2 selectImages:(id)arg3 style:(long long)arg4;
- (id)initWithTitles:(id)arg1 itemImages:(id)arg2 selectImages:(id)arg3;

@end

