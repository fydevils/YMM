//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, YMMBargainChatPriceInputView, YMMCarpoolInputPageInfoModel;

@interface GTInputFreightView : UIView <UITextFieldDelegate>
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _hideViewCallback;
    UIView *_toolView;
    UIView *_tipsView;
    UIView *_rankPriceEditView;
    YMMBargainChatPriceInputView *_inputView;
    UILabel *_titleLabel;
    UILabel *_titleSubLabel;
    UILabel *_rankPriceSuggestTipLabel;
    UIImageView *_rankWarnIcon;
    double _duration;
    UIButton *_phoneButton;
    UIImageView *_iconImageView;
    YMMCarpoolInputPageInfoModel *_model;
}

+ (double)itemHeight:(id)arg1;
@property(retain, nonatomic) YMMCarpoolInputPageInfoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImageView *rankWarnIcon; // @synthesize rankWarnIcon=_rankWarnIcon;
@property(retain, nonatomic) UILabel *rankPriceSuggestTipLabel; // @synthesize rankPriceSuggestTipLabel=_rankPriceSuggestTipLabel;
@property(retain, nonatomic) UILabel *titleSubLabel; // @synthesize titleSubLabel=_titleSubLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YMMBargainChatPriceInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *rankPriceEditView; // @synthesize rankPriceEditView=_rankPriceEditView;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(copy, nonatomic) CDUnknownBlockType hideViewCallback; // @synthesize hideViewCallback=_hideViewCallback;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldChangeNotification:(id)arg1;
- (void)keyboardWillHideAction:(id)arg1;
- (void)keyboardWillShowAction:(id)arg1;
- (void)removeKeyboardHideObserver;
- (void)removeKeyboardShowObserver;
- (void)addKeyboardHideObserver;
- (void)addKeyboardShowObserver;
- (void)addTextFieldChangeOberver;
- (void)contractAction;
- (void)clearPriceTextField;
- (void)confirmAction;
- (void)hideConfirmView;
- (void)cancelAction;
- (void)addConstraint;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showTitleLabelSub:(id)arg1;
- (void)showConfirmView:(id)arg1 withSuperView:(id)arg2 lastInputFreight:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

