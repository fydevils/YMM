//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"
#import "YMMCustomActionSheetDelegate.h"

@class NSMutableArray, NSString, NSTimer, UIButton, UILabel, UITextField;

@interface YMMCaptchaControlView : UIView <UITextFieldDelegate, YMMCustomActionSheetDelegate>
{
    long long _inputCount;
    NSString *_captchaCode;
    CDUnknownBlockType _captchaBlock;
    CDUnknownBlockType _voiceCaptchaCodeBlock;
    CDUnknownBlockType _verifyCodeBlock;
    CDUnknownBlockType _countStatusBlock;
    long long _popInterval;
    long long _verifyCodeInterval;
    long long _leftCountSeconds;
    UIButton *_captchBtn;
    NSString *_pageName;
    NSString *_referPageName;
    UITextField *_captchaTF;
    UILabel *_tipsLabel;
    NSMutableArray *_captchaArr;
    NSTimer *_textTimer;
    long long _countDown;
}

@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) NSTimer *textTimer; // @synthesize textTimer=_textTimer;
@property(retain, nonatomic) NSMutableArray *captchaArr; // @synthesize captchaArr=_captchaArr;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UITextField *captchaTF; // @synthesize captchaTF=_captchaTF;
@property(copy, nonatomic) NSString *referPageName; // @synthesize referPageName=_referPageName;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) UIButton *captchBtn; // @synthesize captchBtn=_captchBtn;
@property(nonatomic) long long leftCountSeconds; // @synthesize leftCountSeconds=_leftCountSeconds;
@property(nonatomic) long long verifyCodeInterval; // @synthesize verifyCodeInterval=_verifyCodeInterval;
@property(nonatomic) long long popInterval; // @synthesize popInterval=_popInterval;
@property(copy, nonatomic) CDUnknownBlockType countStatusBlock; // @synthesize countStatusBlock=_countStatusBlock;
@property(copy, nonatomic) CDUnknownBlockType verifyCodeBlock; // @synthesize verifyCodeBlock=_verifyCodeBlock;
@property(copy, nonatomic) CDUnknownBlockType voiceCaptchaCodeBlock; // @synthesize voiceCaptchaCodeBlock=_voiceCaptchaCodeBlock;
@property(copy, nonatomic) CDUnknownBlockType captchaBlock; // @synthesize captchaBlock=_captchaBlock;
@property(readonly, copy, nonatomic) NSString *captchaCode; // @synthesize captchaCode=_captchaCode;
@property(nonatomic) long long inputCount; // @synthesize inputCount=_inputCount;
- (void).cxx_destruct;
- (void)journalForTap:(id)arg1;
- (void)actionSheet:(id)arg1 didClickedButtonAtIndex:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)cleanCaptchaCode;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)invalidateTimer;
- (void)invalidateTextTimer;
- (void)stopWaiting;
- (void)waitingSeconds;
- (void)startWaiting;
- (void)showActionSheet;
- (void)setCaptchaButtonTitle:(id)arg1 enabled:(_Bool)arg2;
- (void)showVoiceCaptchaAlert;
- (void)dismissKeyBoard:(id)arg1;
- (void)updateConstraints;
- (void)dotText:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)clickedBtnAction:(id)arg1;
- (void)initCaptchaTFUI;
- (void)dealloc;
- (id)init;
- (id)initWithCount:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

