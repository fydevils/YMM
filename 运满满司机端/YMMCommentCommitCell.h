//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton;

@interface YMMCommentCommitCell : YMMBaseTableViewCell
{
    UIButton *_commitButton;
    CDUnknownBlockType _tap;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(copy, nonatomic) CDUnknownBlockType tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIButton *commitButton; // @synthesize commitButton=_commitButton;
- (void).cxx_destruct;
- (void)commitAction;
- (void)setUpViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

