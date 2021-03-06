//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AMapNaviCompositePlanTipsData, NSLayoutConstraint, UIButton, UILabel;

@interface AMapNaviCompositePlanTipsView : UIView
{
    id <AMapNaviCompositePlanTipsViewDelegate> _delegate;
    AMapNaviCompositePlanTipsData *_data;
    UIView *_customView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UIView *_btnsContainerView;
    UIButton *_hasKnowBtn;
    UIView *_verticalLineView;
    UIView *_detailBtnContainerView;
    UIView *_horLineView;
    UIButton *_detailBtn;
    NSLayoutConstraint *_btnsContainerViewWidth;
    NSLayoutConstraint *_titleLabelMiddleSpace;
    NSLayoutConstraint *_detailBtnContaierViewHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *detailBtnContaierViewHeight; // @synthesize detailBtnContaierViewHeight=_detailBtnContaierViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelMiddleSpace; // @synthesize titleLabelMiddleSpace=_titleLabelMiddleSpace;
@property(nonatomic) __weak NSLayoutConstraint *btnsContainerViewWidth; // @synthesize btnsContainerViewWidth=_btnsContainerViewWidth;
@property(nonatomic) __weak UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(nonatomic) __weak UIView *horLineView; // @synthesize horLineView=_horLineView;
@property(nonatomic) __weak UIView *detailBtnContainerView; // @synthesize detailBtnContainerView=_detailBtnContainerView;
@property(nonatomic) __weak UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(nonatomic) __weak UIButton *hasKnowBtn; // @synthesize hasKnowBtn=_hasKnowBtn;
@property(nonatomic) __weak UIView *btnsContainerView; // @synthesize btnsContainerView=_btnsContainerView;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) AMapNaviCompositePlanTipsData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <AMapNaviCompositePlanTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)detailBtnClick:(id)arg1;
- (void)hasKnowBtnClick:(id)arg1;
- (void)prepareToHide;
- (void)refreshTheReaminTime:(double)arg1;
- (void)configureWithData:(id)arg1 defaultHideTime:(double)arg2;
- (void)setup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

