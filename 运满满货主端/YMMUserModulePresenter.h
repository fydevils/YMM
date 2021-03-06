//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YMMUserModuleNetWorkService;

@interface YMMUserModulePresenter : NSObject
{
    _Bool _gotoAuth;
    _Bool _isShipperSimpleAuthUser;
    _Bool _needAction;
    NSString *_telephone;
    NSString *_captchaCode;
    id <YMMUserModuleControllerProtocol> _protocolView;
    YMMUserModuleNetWorkService *_service;
    long long _popInterval;
}

@property(nonatomic) _Bool needAction; // @synthesize needAction=_needAction;
@property(nonatomic) long long popInterval; // @synthesize popInterval=_popInterval;
@property(retain, nonatomic) YMMUserModuleNetWorkService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <YMMUserModuleControllerProtocol> protocolView; // @synthesize protocolView=_protocolView;
@property(readonly, nonatomic) _Bool isShipperSimpleAuthUser; // @synthesize isShipperSimpleAuthUser=_isShipperSimpleAuthUser;
@property(nonatomic) _Bool gotoAuth; // @synthesize gotoAuth=_gotoAuth;
@property(copy, nonatomic) NSString *captchaCode; // @synthesize captchaCode=_captchaCode;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
- (void).cxx_destruct;
- (void)techLogForUserLogin:(id)arg1 scenario:(id)arg2;
- (void)gotoAuthVCForConfig;
- (void)reloadConfiguration;
- (void)requestLocationTask;
- (void)cleanUserInfoAndToken;
- (void)ymmRegisterResponseHandler:(id)arg1;
- (void)ymmLoginResponseHandler:(id)arg1;
- (void)hcbRegisterTokenResponseHandler:(id)arg1;
- (void)hcbLoginTokenResponseHandler:(id)arg1;
- (void)requestHCBTokenCallBack:(CDUnknownBlockType)arg1;
- (_Bool)checkTelAndCaptchaCodeToast;
- (_Bool)checkCaptchaCodeToast;
- (_Bool)checkCaptchaCode;
- (_Bool)checkTelephoneToast;
- (_Bool)checkTelephone;
- (long long)verifyCodeInterval;
- (void)userPopupConfirmRequest;
- (void)userRegisterFlagRequestAction;
- (void)checkCommitBtnStatus;
- (void)userRegisterAction;
- (void)userRegisterCaptchaCodeAction;
- (void)userLoginAction;
- (void)voiceCaptchaCodeAction;
- (void)userLoginCaptchaCodeAction;
- (void)gotoCaptchaVC;
- (void)configProtocolView:(id)arg1;

@end

