//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MAOfflineMapProgressView, UILabel, UIView;

@interface MAOfflineMapCityCell : UITableViewCell
{
    _Bool _shouldShowProgressView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_statusView;
    MAOfflineMapProgressView *_progressView;
}

@property(retain, nonatomic) MAOfflineMapProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool shouldShowProgressView; // @synthesize shouldShowProgressView=_shouldShowProgressView;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupLabel;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

