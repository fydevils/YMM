//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMTruckYardServiceItemModel : YMMCommonModel
{
    unsigned long long _itemType;
    NSString *_itemImageName;
    NSString *_itemTitle;
}

@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *itemImageName; // @synthesize itemImageName=_itemImageName;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;

@end

