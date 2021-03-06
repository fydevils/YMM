//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMSensitiveWordCell.h"

@class NSString, UIColor, UILabel, UIView, YMMCargoNameTagView;

@interface YMMGoodsNameCell : YMMSensitiveWordCell
{
    unsigned long long _currentPublishScene;
    unsigned long long _publishScene;
    unsigned long long _mybRoleType;
    NSString *_placeholder;
    UIColor *_placeholderColor;
    CDUnknownBlockType _callback;
    UIView *_sectionView;
    UILabel *_sectionTipLabel;
    UIView *_goodsNameView;
    UILabel *_goodsNameTitleLabel;
    UILabel *_goodsNameValueLabel;
    YMMCargoNameTagView *_tagView;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)createReuseCellForTableView:(id)arg1 withCellIdentifier:(id)arg2;
@property(retain, nonatomic) YMMCargoNameTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *goodsNameValueLabel; // @synthesize goodsNameValueLabel=_goodsNameValueLabel;
@property(retain, nonatomic) UILabel *goodsNameTitleLabel; // @synthesize goodsNameTitleLabel=_goodsNameTitleLabel;
@property(retain, nonatomic) UIView *goodsNameView; // @synthesize goodsNameView=_goodsNameView;
@property(retain, nonatomic) UILabel *sectionTipLabel; // @synthesize sectionTipLabel=_sectionTipLabel;
@property(retain, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) unsigned long long mybRoleType; // @synthesize mybRoleType=_mybRoleType;
@property(nonatomic) unsigned long long publishScene; // @synthesize publishScene=_publishScene;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)initControls;
- (void)inputGoodsName;
- (void)setHasSensitiveWord;
- (void)selectNameWithStartTime:(double)arg1 isSelect:(_Bool)arg2;
- (void)setNeedsUpdateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

