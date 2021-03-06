//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, UIButton, UIImageView, UILabel, VFSDKPayWayModelV2;

@interface VFSDKCardPaymentInputView : UIView
{
    _Bool _hideMoneyInfo;
    id <VFSDKCardPaymentInputViewDelegate> _delegate;
    VFSDKPayWayModelV2 *_payWay;
    NSDictionary *_card;
    NSDictionary *_tradeInfo;
    UIView *_numbersView;
    UIView *_inputView;
    UIView *_infoView;
    UIView *_cardView;
    UILabel *_priceLB;
    UIView *_priceBottomLine;
    UIImageView *_iconView;
    UILabel *_cardLabel;
    long long _currentPos;
    UIImageView *_arrowIV;
    UILabel *_changeLbl;
    UIButton *_forgetPwdButton;
}

@property(retain, nonatomic) UIButton *forgetPwdButton; // @synthesize forgetPwdButton=_forgetPwdButton;
@property(retain, nonatomic) UILabel *changeLbl; // @synthesize changeLbl=_changeLbl;
@property(retain, nonatomic) UIImageView *arrowIV; // @synthesize arrowIV=_arrowIV;
@property(nonatomic) long long currentPos; // @synthesize currentPos=_currentPos;
@property(retain, nonatomic) UILabel *cardLabel; // @synthesize cardLabel=_cardLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *priceBottomLine; // @synthesize priceBottomLine=_priceBottomLine;
@property(retain, nonatomic) UILabel *priceLB; // @synthesize priceLB=_priceLB;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *numbersView; // @synthesize numbersView=_numbersView;
@property(nonatomic) _Bool hideMoneyInfo; // @synthesize hideMoneyInfo=_hideMoneyInfo;
@property(retain, nonatomic) NSDictionary *tradeInfo; // @synthesize tradeInfo=_tradeInfo;
@property(retain, nonatomic) NSDictionary *card; // @synthesize card=_card;
@property(retain, nonatomic) VFSDKPayWayModelV2 *payWay; // @synthesize payWay=_payWay;
@property(nonatomic) __weak id <VFSDKCardPaymentInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFinishInput;
- (void)closeKeyboard:(id)arg1;
- (void)delNumber;
- (void)clickNumber:(id)arg1;
- (void)changeCard:(id)arg1;
- (void)p_forgetPwdButtonclick:(id)arg1;
- (void)updatePriceLabelWith:(id)arg1 fee:(id)arg2 couponMoney:(id)arg3 payway:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

