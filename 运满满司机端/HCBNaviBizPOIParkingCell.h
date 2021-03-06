//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HCBKeyWordPOISearchModel, HCBNearbyRecommendPOIModel, HCBTwinkleView, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface HCBNaviBizPOIParkingCell : UITableViewCell
{
    id <HCBNaviBizPOIParkingCellDelegate> _delegate;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_distanceLabel;
    UIView *_naviView;
    UILabel *_carportLabel;
    HCBNearbyRecommendPOIModel *_model;
    HCBKeyWordPOISearchModel *_keyWordModel;
    HCBTwinkleView *_twinkle;
    NSLayoutConstraint *_iconImageWidthConst;
    NSLayoutConstraint *_iconImageHeightConst;
    NSLayoutConstraint *_iconImageLeadingConst;
}

@property(nonatomic) __weak NSLayoutConstraint *iconImageLeadingConst; // @synthesize iconImageLeadingConst=_iconImageLeadingConst;
@property(nonatomic) __weak NSLayoutConstraint *iconImageHeightConst; // @synthesize iconImageHeightConst=_iconImageHeightConst;
@property(nonatomic) __weak NSLayoutConstraint *iconImageWidthConst; // @synthesize iconImageWidthConst=_iconImageWidthConst;
@property(retain, nonatomic) HCBTwinkleView *twinkle; // @synthesize twinkle=_twinkle;
@property(retain, nonatomic) HCBKeyWordPOISearchModel *keyWordModel; // @synthesize keyWordModel=_keyWordModel;
@property(retain, nonatomic) HCBNearbyRecommendPOIModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *carportLabel; // @synthesize carportLabel=_carportLabel;
@property(nonatomic) __weak UIView *naviView; // @synthesize naviView=_naviView;
@property(nonatomic) __weak UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <HCBNaviBizPOIParkingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)formatFloat:(float)arg1;
- (void)configCellWith:(id)arg1 index:(unsigned long long)arg2 showTwinkle:(_Bool)arg3;
- (void)startNavi;
- (void)awakeFromNib;

@end

