//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBUMCBaseModel.h"

@class HCBUMCADSourceModel, NSArray;

@interface HCBUMCADSectionModel : HCBUMCBaseModel
{
    HCBUMCADSourceModel *_rightItem;
    HCBUMCADSourceModel *_leftItem;
    NSArray *_list;
}

@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) HCBUMCADSourceModel *leftItem; // @synthesize leftItem=_leftItem;
@property(retain, nonatomic) HCBUMCADSourceModel *rightItem; // @synthesize rightItem=_rightItem;
- (void).cxx_destruct;
- (_Bool)canShowAdvert;

@end

