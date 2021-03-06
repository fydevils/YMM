//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface HCBPlaceholderView : UIView
{
    _Bool _trackSuperViewsFrame;
    _Bool _kvoSet;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UILabel *_contentLabel;
    UIButton *_actionButton;
    UIView *_container;
}

+ (id)defaultNoContentsPlacehodler;
+ (id)defaultBadNetworkPlacehodler;
+ (id)defaultAnimatedLoadingView;
@property(nonatomic) _Bool kvoSet; // @synthesize kvoSet=_kvoSet;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) _Bool trackSuperViewsFrame; // @synthesize trackSuperViewsFrame=_trackSuperViewsFrame;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)removeFromSuperview;
- (void)didMoveToSuperview;
- (id)init;

@end

