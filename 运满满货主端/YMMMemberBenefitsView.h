//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface YMMMemberBenefitsView : UIView
{
    NSArray *_dataSource;
    CDUnknownBlockType _clickedBlock;
    NSMutableArray *_btns;
}

@property(retain, nonatomic) NSMutableArray *btns; // @synthesize btns=_btns;
@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)clickedBtnAction:(id)arg1;
- (void)verticalAlignment;
- (void)configConstraints;
- (id)itemBtnWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

