//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HCBUHomeCardActivityViewModel, UIImageView, UILabel;

@interface HCBUHomeCardYMMActivityCell : UITableViewCell
{
    HCBUHomeCardActivityViewModel *_viewModel;
    UILabel *_thisSubTitle;
    UILabel *_nextSubTitle;
    long long _startTimes;
    CDUnknownBlockType _clickBlock;
    UILabel *_mainTitle;
    UILabel *_subTitle1;
    UILabel *_subTitle2;
    UIImageView *_iconImageView;
    UIImageView *_iconImageView2;
}

+ (_Bool)loadFromNib;
@property(nonatomic) __weak UIImageView *iconImageView2; // @synthesize iconImageView2=_iconImageView2;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *subTitle2; // @synthesize subTitle2=_subTitle2;
@property(nonatomic) __weak UILabel *subTitle1; // @synthesize subTitle1=_subTitle1;
@property(nonatomic) __weak UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)animationSubTitleWithIndex:(unsigned long long)arg1 startTimes:(long long)arg2;
- (void)setViewModel:(id)arg1;
- (void)btnPress:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

