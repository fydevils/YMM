//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSString, YMMBargainButtonModel, YMMBargainEarnestDialogInfoModel;

@interface YMMBargainEarnestInfoModel : YMMBaseModel
{
    NSString *_priceInfo;
    NSString *_earnestText;
    YMMBargainButtonModel *_payEarnestBtn;
    NSString *_status;
    YMMBargainEarnestDialogInfoModel *_earnestDialogInfo;
}

@property(retain, nonatomic) YMMBargainEarnestDialogInfoModel *earnestDialogInfo; // @synthesize earnestDialogInfo=_earnestDialogInfo;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) YMMBargainButtonModel *payEarnestBtn; // @synthesize payEarnestBtn=_payEarnestBtn;
@property(copy, nonatomic) NSString *earnestText; // @synthesize earnestText=_earnestText;
@property(copy, nonatomic) NSString *priceInfo; // @synthesize priceInfo=_priceInfo;
- (void).cxx_destruct;

@end

