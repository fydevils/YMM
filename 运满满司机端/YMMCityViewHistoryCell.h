//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSMutableArray;

@interface YMMCityViewHistoryCell : YMMBaseTableViewCell
{
    CDUnknownBlockType _historyItemDidSelect;
    NSMutableArray *_labelViewArray;
    NSMutableArray *_cityArray;
}

@property(retain, nonatomic) NSMutableArray *cityArray; // @synthesize cityArray=_cityArray;
@property(retain, nonatomic) NSMutableArray *labelViewArray; // @synthesize labelViewArray=_labelViewArray;
@property(copy, nonatomic) CDUnknownBlockType historyItemDidSelect; // @synthesize historyItemDidSelect=_historyItemDidSelect;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)layoutSubviews;
- (void)drawItems;
- (void)touchBtn:(id)arg1;

@end

