//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, CAShapeLayer, ETCCardInfo, UIButton, UIImageView, UILabel;

@interface HCBETCMineHeaderView : UIView
{
    ETCCardInfo *_cardInfo;
    long long _totalCardCount;
    id <HCBETCMineHeaderViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_menuView;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_maskLayer;
    UIButton *_buttonAdd;
    UIView *_cardView;
    UIImageView *_imgVCardType;
    UILabel *_labCarNumber;
    UILabel *_labCardNumber;
    UIImageView *_imgVArrow;
    UILabel *_labMore;
}

@property(retain, nonatomic) UILabel *labMore; // @synthesize labMore=_labMore;
@property(retain, nonatomic) UIImageView *imgVArrow; // @synthesize imgVArrow=_imgVArrow;
@property(retain, nonatomic) UILabel *labCardNumber; // @synthesize labCardNumber=_labCardNumber;
@property(retain, nonatomic) UILabel *labCarNumber; // @synthesize labCarNumber=_labCarNumber;
@property(retain, nonatomic) UIImageView *imgVCardType; // @synthesize imgVCardType=_imgVCardType;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIButton *buttonAdd; // @synthesize buttonAdd=_buttonAdd;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <HCBETCMineHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long totalCardCount; // @synthesize totalCardCount=_totalCardCount;
@property(retain, nonatomic) ETCCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
- (void).cxx_destruct;
- (id)getMenuButtonWithMenuType:(long long)arg1;
- (void)actionAddCard:(id)arg1;
- (void)actionMenuClicked:(id)arg1;
- (void)actionChangeCard:(id)arg1;
- (void)updateUI;
- (void)setupUI;
- (id)init;

@end

