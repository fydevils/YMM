//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIColor, UILabel;

@interface HSFTimeNumberView : UIScrollView
{
    long long _curentNumber;
    UILabel *_label0;
    UILabel *_label1;
    long long _maxNumber;
    UIColor *_bgColor;
    double _fontSize;
    UIColor *_fontColor;
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) long long maxNumber; // @synthesize maxNumber=_maxNumber;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(retain, nonatomic) UILabel *label0; // @synthesize label0=_label0;
@property(nonatomic) long long curentNumber; // @synthesize curentNumber=_curentNumber;
- (void).cxx_destruct;
- (void)numberChange;
- (id)initWithFrame:(struct CGRect)arg1 maxNumber:(long long)arg2 fontSize:(double)arg3 fontColor:(id)arg4 bgColor:(id)arg5 cornerRadius:(double)arg6;

@end

