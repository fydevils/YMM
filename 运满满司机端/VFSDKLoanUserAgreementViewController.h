//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

@class NSString, UIWebView;

@interface VFSDKLoanUserAgreementViewController : VFSDKBaseViewController
{
    NSString *_amount;
    NSString *_businessCode;
    NSString *_productCode;
    UIWebView *_webView;
    NSString *_loanUserAgreementURL;
}

@property(copy, nonatomic) NSString *loanUserAgreementURL; // @synthesize loanUserAgreementURL=_loanUserAgreementURL;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSString *businessCode; // @synthesize businessCode=_businessCode;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (void)setupWebView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

