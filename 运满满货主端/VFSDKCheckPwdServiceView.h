//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldPasswordKeyboardDelegate.h"

@class NSString, UITextField;

@interface VFSDKCheckPwdServiceView : UIView <UITextFieldPasswordKeyboardDelegate>
{
    _Bool _needVerifyPasswordOnServer;
    CDUnknownBlockType _checkPwdConfigUVBlock;
    UIView *_showOnView;
    UITextField *_field;
    CDUnknownBlockType _selfRetainBlock;
    NSString *_passwordVoucher;
    CDUnknownBlockType _completion;
}

+ (void)showOnView:(id)arg1 withConfiguration:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showOnView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *passwordVoucher; // @synthesize passwordVoucher=_passwordVoucher;
@property(copy, nonatomic) CDUnknownBlockType selfRetainBlock; // @synthesize selfRetainBlock=_selfRetainBlock;
@property(retain, nonatomic) UITextField *field; // @synthesize field=_field;
@property(nonatomic) __weak UIView *showOnView; // @synthesize showOnView=_showOnView;
@property(copy, nonatomic) CDUnknownBlockType checkPwdConfigUVBlock; // @synthesize checkPwdConfigUVBlock=_checkPwdConfigUVBlock;
@property(nonatomic) _Bool needVerifyPasswordOnServer; // @synthesize needVerifyPasswordOnServer=_needVerifyPasswordOnServer;
- (void).cxx_destruct;
- (void)_p_callCompletionWithSuccessVoucher:(id)arg1;
- (void)_p_callCompletionWithSuccessPassword:(id)arg1;
- (void)_p_callCompletionWithFailedMessage:(id)arg1;
- (void)_p_callCompletionWithCancelMessage:(id)arg1;
- (void)_p_closeUI;
- (void)_p_tapToExit;
- (void)_p_checkPassword:(id)arg1;
- (void)textFieldPasswordKeyboardClose;
- (void)textFieldPasswordKeyboardBeginInputting;
- (void)forgetPasswordClick;
- (void)textFieldPasswordKeyboardDidFinshed:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

