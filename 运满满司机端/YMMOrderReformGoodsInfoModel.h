//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSString;

@interface YMMOrderReformGoodsInfoModel : YMMCommonModel
{
    NSString *_moduleTitle;
    NSString *_cargoDetailElementId;
    NSString *_openNavigationElementId;
    NSString *_navigatorScheme;
    NSString *_startCity;
    NSString *_startTime;
    NSString *_endCity;
    NSString *_endTime;
    NSString *_goodsMessage;
    NSArray *_goodsDetails;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSArray *goodsDetails; // @synthesize goodsDetails=_goodsDetails;
@property(retain, nonatomic) NSString *goodsMessage; // @synthesize goodsMessage=_goodsMessage;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *endCity; // @synthesize endCity=_endCity;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *startCity; // @synthesize startCity=_startCity;
@property(retain, nonatomic) NSString *navigatorScheme; // @synthesize navigatorScheme=_navigatorScheme;
@property(retain, nonatomic) NSString *openNavigationElementId; // @synthesize openNavigationElementId=_openNavigationElementId;
@property(retain, nonatomic) NSString *cargoDetailElementId; // @synthesize cargoDetailElementId=_cargoDetailElementId;
@property(retain, nonatomic) NSString *moduleTitle; // @synthesize moduleTitle=_moduleTitle;
- (void).cxx_destruct;

@end

