//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBPetrolBaseJSONModel.h"

@class NSArray, NSString;

@interface HCBPetrolEstimateOrderAmountModel : HCBPetrolBaseJSONModel
{
    NSString *_payAmount;
    NSString *_descItemTotal;
    NSArray *_descItemList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *descItemList; // @synthesize descItemList=_descItemList;
@property(copy, nonatomic) NSString *descItemTotal; // @synthesize descItemTotal=_descItemTotal;
@property(copy, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
- (void).cxx_destruct;

@end

