//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface HCBNaviDetailInfoView : UIView
{
    UIImageView *_imageView;
    UILabel *_mileLabel;
    UILabel *_addressStrLabel;
}

@property(retain, nonatomic) UILabel *addressStrLabel; // @synthesize addressStrLabel=_addressStrLabel;
@property(retain, nonatomic) UILabel *mileLabel; // @synthesize mileLabel=_mileLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)updateViewWithDistance:(id)arg1 address:(id)arg2 iconName:(id)arg3;
- (void)awakeFromNib;

@end

