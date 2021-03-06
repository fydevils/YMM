//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface YMMPublishWeightCapacityView : YMMPopupMaskView <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    NSString *_weightValue;
    NSString *_capacityValue;
    long long _weightMax;
    long long _capacityMax;
    NSString *_weightHint;
    NSString *_capacityHint;
    NSString *_weightTitle;
    NSString *_capacityTitle;
    CDUnknownBlockType _valueCallback;
    UIView *_topView;
    UILabel *_titleLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UIView *_innerView;
    UIView *_vlineView;
    UIView *_weightView;
    UITextField *_weightField;
    UILabel *_weightLabel;
    UIView *_capacityView;
    UITextField *_capacityField;
    UILabel *_capacityLabel;
}

@property(retain, nonatomic) UILabel *capacityLabel; // @synthesize capacityLabel=_capacityLabel;
@property(retain, nonatomic) UITextField *capacityField; // @synthesize capacityField=_capacityField;
@property(retain, nonatomic) UIView *capacityView; // @synthesize capacityView=_capacityView;
@property(retain, nonatomic) UILabel *weightLabel; // @synthesize weightLabel=_weightLabel;
@property(retain, nonatomic) UITextField *weightField; // @synthesize weightField=_weightField;
@property(retain, nonatomic) UIView *weightView; // @synthesize weightView=_weightView;
@property(retain, nonatomic) UIView *vlineView; // @synthesize vlineView=_vlineView;
@property(retain, nonatomic) UIView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType valueCallback; // @synthesize valueCallback=_valueCallback;
@property(retain, nonatomic) NSString *capacityTitle; // @synthesize capacityTitle=_capacityTitle;
@property(retain, nonatomic) NSString *weightTitle; // @synthesize weightTitle=_weightTitle;
@property(retain, nonatomic) NSString *capacityHint; // @synthesize capacityHint=_capacityHint;
@property(retain, nonatomic) NSString *weightHint; // @synthesize weightHint=_weightHint;
@property(nonatomic) long long capacityMax; // @synthesize capacityMax=_capacityMax;
@property(nonatomic) long long weightMax; // @synthesize weightMax=_weightMax;
@property(retain, nonatomic) NSString *capacityValue; // @synthesize capacityValue=_capacityValue;
@property(retain, nonatomic) NSString *weightValue; // @synthesize weightValue=_weightValue;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShowFront:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)removeKeyboardNotification;
- (void)sendKeyboardNotification;
- (void)cancelAction;
- (void)confirm;
- (void)setViewConstraints;
- (void)initControls;
- (void)setViewGesture;
- (void)dismiss;
- (void)show;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

