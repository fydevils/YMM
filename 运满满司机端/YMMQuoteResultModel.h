//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMQuoteResultModel : YMMCommonModel
{
    _Bool _isAlertPromise;
    NSString *_responseTimeDocuments;
    NSString *_carrierBargainNumDocuments;
    NSNumber *_price;
    NSNumber *_cargoId;
    NSNumber *_bargainId;
    NSString *_consignorTel;
    NSString *_createBargainSuccessDocuments;
    NSString *_successPageSchema;
}

@property(copy, nonatomic) NSString *successPageSchema; // @synthesize successPageSchema=_successPageSchema;
@property(nonatomic) _Bool isAlertPromise; // @synthesize isAlertPromise=_isAlertPromise;
@property(copy, nonatomic) NSString *createBargainSuccessDocuments; // @synthesize createBargainSuccessDocuments=_createBargainSuccessDocuments;
@property(copy, nonatomic) NSString *consignorTel; // @synthesize consignorTel=_consignorTel;
@property(retain, nonatomic) NSNumber *bargainId; // @synthesize bargainId=_bargainId;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *carrierBargainNumDocuments; // @synthesize carrierBargainNumDocuments=_carrierBargainNumDocuments;
@property(copy, nonatomic) NSString *responseTimeDocuments; // @synthesize responseTimeDocuments=_responseTimeDocuments;
- (void).cxx_destruct;

@end

