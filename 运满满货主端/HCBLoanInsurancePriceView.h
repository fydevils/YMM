//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface HCBLoanInsurancePriceView : UIView
{
    UIImageView *_bgView;
    UIImageView *_rightIconView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
}

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)setupPrice:(id)arg1;
- (void)awakeFromNib;

@end

