//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VFWalletSDKDelegate.h"

@class HCBURLNavigatorQueryItem, NSString, UIViewController;

@interface VFSDKNavigatorManager : NSObject <VFWalletSDKDelegate>
{
    UIViewController *_preVc;
    HCBURLNavigatorQueryItem *_queryItem;
}

+ (id)shareManager;
@property(retain, nonatomic) HCBURLNavigatorQueryItem *queryItem; // @synthesize queryItem=_queryItem;
@property(nonatomic) __weak UIViewController *preVc; // @synthesize preVc=_preVc;
- (void).cxx_destruct;
- (void)didFinishedTransType:(long long)arg1 resultType:(long long)arg2 result:(id)arg3;
- (void)p_openWalletFindPasswordService:(id)arg1;
- (void)p_openWalletSetPasswordService:(id)arg1;
- (void)p_openWalletCheckPasswordService:(id)arg1;
- (_Bool)_p_checkAuthStatusOnController:(id)arg1;
- (void)p_openWalletCancelAuthPage:(id)arg1;
- (void)p_openVerifyPhonePage:(id)arg1;
- (void)p_openAmlCompleteInfoPage:(id)arg1;
- (void)p_openSpecialAccountPage:(id)arg1;
- (void)p_openCouponList:(id)arg1;
- (_Bool)_p_alertGotoAuthOnController:(id)arg1;
- (_Bool)p_isUserNotRealName;
- (void)p_openAddBankCardPage:(id)arg1;
- (void)p_openModifyBankCardInfoPage:(id)arg1;
- (void)p_openBankCardList:(id)arg1;
- (void)p_openBillList:(id)arg1;
- (void)p_openWalletHome:(id)arg1;
- (void)p_openCashier:(id)arg1;
- (void)setupNavigator;
- (void)p_findNavgationControllerToPerform:(CDUnknownBlockType)arg1;
- (void)makeSureHasLoginOnView:(id)arg1 thenPerform:(CDUnknownBlockType)arg2;
- (void)p_openLoanBlankMoneyPage:(id)arg1;
- (void)registerLoanNavigatorUrls;
- (void)p_openRiskSMSVerifyPage:(id)arg1;
- (void)registerRiskShieldNavigators;
- (void)openWalletAmlUploadPhotoPage:(id)arg1;
- (void)openWalletAuthPage:(id)arg1;
- (void)pushControllerWithClass:(Class)arg1 navigatorItem:(id)arg2 configuration:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

