//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UILabel;

@interface YMMCargoReturnRouteAddressCell : YMMBaseTableViewCell
{
    UILabel *_titleLab;
    UILabel *_subTitleLab;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UILabel *subTitleLab; // @synthesize subTitleLab=_subTitleLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;
- (void)configureColorText:(id)arg1;
- (void)ymm_configWithItemModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

