//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSNumber;

@interface YMMPayOrderRouterModel : YMMBaseModel
{
    NSNumber *_orderId;
    NSNumber *_cargoId;
    NSNumber *_notaryId;
    NSNumber *_bargainId;
}

@property(retain, nonatomic) NSNumber *bargainId; // @synthesize bargainId=_bargainId;
@property(retain, nonatomic) NSNumber *notaryId; // @synthesize notaryId=_notaryId;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
@property(retain, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end

