//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMAuditBasePresenter.h"

@class YMMChangeTelNetWorkService, YMMOSSUploadManager;

@interface YMMChangeTelPresenter : YMMAuditBasePresenter
{
    id <YMMChangeTelModelProtocol> _userInputModel;
    id <YMMControllerProtocol> _protocolView;
    YMMChangeTelNetWorkService *_networkService;
    YMMOSSUploadManager *_ossManager;
    id <YMMCustomerServiceProtocol> _customerService;
}

@property(retain, nonatomic) id <YMMCustomerServiceProtocol> customerService; // @synthesize customerService=_customerService;
@property(retain, nonatomic) YMMOSSUploadManager *ossManager; // @synthesize ossManager=_ossManager;
@property(retain, nonatomic) YMMChangeTelNetWorkService *networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <YMMControllerProtocol> protocolView; // @synthesize protocolView=_protocolView;
@property(retain, nonatomic) id <YMMChangeTelModelProtocol> userInputModel; // @synthesize userInputModel=_userInputModel;
- (void).cxx_destruct;
- (void)contactUs;
- (void)requestCustomerServiceInfo;
- (void)ossUploadSuccessResult:(id)arg1 originImageModel:(id)arg2;
- (void)commitChangeTelInfoTask;
- (void)verifyCodeTask;
- (void)verifyUserInfoTask;
@property(readonly, nonatomic) long long capchaTimeIndex;
- (void)configProtocolView:(id)arg1;

@end

