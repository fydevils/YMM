//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HCBWaybillMoreAddressModel, UIImageView, UILabel, UIView;

@interface HCBNextWaybillOrderView : UITableViewCell
{
    id <HCBNextWaybillOrderViewDelegate> _delegate;
    UIView *_bgView;
    UIView *_subBgview;
    UILabel *_loadAddressLabel;
    UILabel *_unloadAddressLabel;
    UIImageView *_iconImageView;
    UILabel *_timeLabel;
    UILabel *_addressNameLabel;
    UILabel *_distanceLabel;
    UILabel *_addressDetailLabel;
    UIView *_naviView;
    HCBWaybillMoreAddressModel *_model;
}

@property(retain, nonatomic) HCBWaybillMoreAddressModel *model; // @synthesize model=_model;
@property(nonatomic) UIView *naviView; // @synthesize naviView=_naviView;
@property(nonatomic) UILabel *addressDetailLabel; // @synthesize addressDetailLabel=_addressDetailLabel;
@property(nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(nonatomic) UILabel *addressNameLabel; // @synthesize addressNameLabel=_addressNameLabel;
@property(nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) UILabel *unloadAddressLabel; // @synthesize unloadAddressLabel=_unloadAddressLabel;
@property(nonatomic) UILabel *loadAddressLabel; // @synthesize loadAddressLabel=_loadAddressLabel;
@property(nonatomic) UIView *subBgview; // @synthesize subBgview=_subBgview;
@property(nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <HCBNextWaybillOrderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shapeLayer;
- (void)configCellWithModel:(id)arg1 distance:(long long)arg2;
- (void)startNavi;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

