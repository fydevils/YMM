//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UILabel;

@interface PayOilFeeDiscountCell : UITableViewCell
{
    UILabel *_discountNameLabel;
    UILabel *_discountAmountLabel;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    NSLayoutConstraint *_bottomMarginCons;
    NSLayoutConstraint *_topMarginCons;
}

@property(nonatomic) __weak NSLayoutConstraint *topMarginCons; // @synthesize topMarginCons=_topMarginCons;
@property(nonatomic) __weak NSLayoutConstraint *bottomMarginCons; // @synthesize bottomMarginCons=_bottomMarginCons;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *discountAmountLabel; // @synthesize discountAmountLabel=_discountAmountLabel;
@property(nonatomic) __weak UILabel *discountNameLabel; // @synthesize discountNameLabel=_discountNameLabel;
- (void).cxx_destruct;
- (void)configCellWithViewModel:(id)arg1 atPosition:(unsigned long long)arg2 isSignle:(_Bool)arg3;
- (void)awakeFromNib;

@end

