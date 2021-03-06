//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UILabel, UIView;

@interface YMMCargoNearbyNewCargoCell : YMMBaseTableViewCell
{
    UILabel *_cellTitleLabel;
    UILabel *_cellSubTitleLabel;
    UIButton *_checkButton;
    UIView *_seperatorLine;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)ymm_createCellForTableView:(id)arg1;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) UILabel *cellSubTitleLabel; // @synthesize cellSubTitleLabel=_cellSubTitleLabel;
@property(retain, nonatomic) UILabel *cellTitleLabel; // @synthesize cellTitleLabel=_cellTitleLabel;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)updateConstraints;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

