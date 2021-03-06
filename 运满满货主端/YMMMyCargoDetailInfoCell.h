//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UILabel, UIView, YYLabel;

@interface YMMMyCargoDetailInfoCell : YMMBaseTableViewCell
{
    UILabel *_typeTipLb;
    UILabel *_typeInfoLb;
    UILabel *_cargoTipLb;
    YYLabel *_cargoInfoLb;
    UILabel *_loadTipLb;
    UILabel *_loadInfoLb;
    UILabel *_otherTipLb;
    UILabel *_otherInfoLb;
    UIView *_bottomLine;
}

+ (id)createCellForTableView:(id)arg1;
+ (id)cellIdentifiler;
+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *otherInfoLb; // @synthesize otherInfoLb=_otherInfoLb;
@property(retain, nonatomic) UILabel *otherTipLb; // @synthesize otherTipLb=_otherTipLb;
@property(retain, nonatomic) UILabel *loadInfoLb; // @synthesize loadInfoLb=_loadInfoLb;
@property(retain, nonatomic) UILabel *loadTipLb; // @synthesize loadTipLb=_loadTipLb;
@property(retain, nonatomic) YYLabel *cargoInfoLb; // @synthesize cargoInfoLb=_cargoInfoLb;
@property(retain, nonatomic) UILabel *cargoTipLb; // @synthesize cargoTipLb=_cargoTipLb;
@property(retain, nonatomic) UILabel *typeInfoLb; // @synthesize typeInfoLb=_typeInfoLb;
@property(retain, nonatomic) UILabel *typeTipLb; // @synthesize typeTipLb=_typeTipLb;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addSubViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)ymm_configWithItemModel:(id)arg1;

@end

