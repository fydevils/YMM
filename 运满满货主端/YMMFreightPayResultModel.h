//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSArray, NSString;

@interface YMMFreightPayResultModel : YMMBaseModel
{
    int _payChannel;
    int _result;
    int _needJumpHCB;
    NSString *_errorMsg;
    NSString *_orderId;
    NSString *_orderTime;
    NSString *_tradeAmount;
    NSString *_orderNo;
    NSString *_accountId;
    NSString *_tradeType;
    NSString *_bizType;
    NSString *_sign;
    NSString *_payStatusSign;
    NSString *_paySubject;
    NSString *_productName;
    NSString *_outOrderNo;
    NSString *_source;
    double _balanceDeduct;
    NSString *_realnameTip;
    NSString *_realnameActionTitle;
    NSString *_realnameActionScheme;
    NSString *_realnamePopTip;
    NSString *_payResultScheme;
    NSString *_standardPay;
    NSArray *_ymmCouponList;
    NSString *_needJumpCashDesk;
}

@property(copy, nonatomic) NSString *needJumpCashDesk; // @synthesize needJumpCashDesk=_needJumpCashDesk;
@property(retain, nonatomic) NSArray *ymmCouponList; // @synthesize ymmCouponList=_ymmCouponList;
@property(copy, nonatomic) NSString *standardPay; // @synthesize standardPay=_standardPay;
@property(copy, nonatomic) NSString *payResultScheme; // @synthesize payResultScheme=_payResultScheme;
@property(copy, nonatomic) NSString *realnamePopTip; // @synthesize realnamePopTip=_realnamePopTip;
@property(copy, nonatomic) NSString *realnameActionScheme; // @synthesize realnameActionScheme=_realnameActionScheme;
@property(copy, nonatomic) NSString *realnameActionTitle; // @synthesize realnameActionTitle=_realnameActionTitle;
@property(copy, nonatomic) NSString *realnameTip; // @synthesize realnameTip=_realnameTip;
@property(nonatomic) int needJumpHCB; // @synthesize needJumpHCB=_needJumpHCB;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) int payChannel; // @synthesize payChannel=_payChannel;
@property(nonatomic) double balanceDeduct; // @synthesize balanceDeduct=_balanceDeduct;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *outOrderNo; // @synthesize outOrderNo=_outOrderNo;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *paySubject; // @synthesize paySubject=_paySubject;
@property(copy, nonatomic) NSString *payStatusSign; // @synthesize payStatusSign=_payStatusSign;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *tradeType; // @synthesize tradeType=_tradeType;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(copy, nonatomic) NSString *tradeAmount; // @synthesize tradeAmount=_tradeAmount;
@property(copy, nonatomic) NSString *orderTime; // @synthesize orderTime=_orderTime;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

