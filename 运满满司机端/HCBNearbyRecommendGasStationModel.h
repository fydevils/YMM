//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HCBNearbyRecommendGasStationModel : NSObject
{
    double _starLevel;
    unsigned long long _monthlyOrderCount;
    NSString *_salePrice;
    NSString *_discountPrice;
    NSArray *_sortTagList;
    NSArray *_blockList;
}

+ (id)dicToModel:(id)arg1;
@property(copy, nonatomic) NSArray *blockList; // @synthesize blockList=_blockList;
@property(copy, nonatomic) NSArray *sortTagList; // @synthesize sortTagList=_sortTagList;
@property(copy, nonatomic) NSString *discountPrice; // @synthesize discountPrice=_discountPrice;
@property(copy, nonatomic) NSString *salePrice; // @synthesize salePrice=_salePrice;
@property(nonatomic) unsigned long long monthlyOrderCount; // @synthesize monthlyOrderCount=_monthlyOrderCount;
@property(nonatomic) double starLevel; // @synthesize starLevel=_starLevel;
- (void).cxx_destruct;

@end

