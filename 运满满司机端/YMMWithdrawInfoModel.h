//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSString;

@interface YMMWithdrawInfoModel : YMMCommonModel
{
    NSString *_withdrawTitle;
    NSString *_withdrawMessage;
    long long _showEditBtn;
    NSString *_showMessage;
    NSString *_cardNumber;
    NSString *_accountName;
    NSArray *_list;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(copy, nonatomic) NSString *showMessage; // @synthesize showMessage=_showMessage;
@property(nonatomic) long long showEditBtn; // @synthesize showEditBtn=_showEditBtn;
@property(copy, nonatomic) NSString *withdrawMessage; // @synthesize withdrawMessage=_withdrawMessage;
@property(copy, nonatomic) NSString *withdrawTitle; // @synthesize withdrawTitle=_withdrawTitle;
- (void).cxx_destruct;

@end

