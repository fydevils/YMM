//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSNumber, NSString;

@interface YMMQuteCommitModel : YMMBaseModel
{
    NSNumber *_quteCargoId;
    NSNumber *_bargainMoney;
    long long _freightCalculationUnit;
    NSNumber *_freightCalculationUnitprice;
    NSString *_freightCalculationUnitCount;
    NSNumber *_checkPromise;
    NSString *_inputPrice;
}

@property(copy, nonatomic) NSString *inputPrice; // @synthesize inputPrice=_inputPrice;
@property(retain, nonatomic) NSNumber *checkPromise; // @synthesize checkPromise=_checkPromise;
@property(copy, nonatomic) NSString *freightCalculationUnitCount; // @synthesize freightCalculationUnitCount=_freightCalculationUnitCount;
@property(retain, nonatomic) NSNumber *freightCalculationUnitprice; // @synthesize freightCalculationUnitprice=_freightCalculationUnitprice;
@property(nonatomic) long long freightCalculationUnit; // @synthesize freightCalculationUnit=_freightCalculationUnit;
@property(retain, nonatomic) NSNumber *bargainMoney; // @synthesize bargainMoney=_bargainMoney;
@property(retain, nonatomic) NSNumber *quteCargoId; // @synthesize quteCargoId=_quteCargoId;
- (void).cxx_destruct;
- (void)setupModel;
- (id)init;

@end

