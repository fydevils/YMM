//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UIView, YMMCommentTypeView;

@interface YMMCommentBubbleCell : YMMBaseTableViewCell
{
    YMMCommentTypeView *_typeView;
    UIImageView *_bubbleImageView;
    UIView *_backView;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) YMMCommentTypeView *typeView; // @synthesize typeView=_typeView;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)setUpViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

