//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableAttributedString, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface YMMNoDataView : UIView
{
    _Bool _customeCenterY;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_iconImage;
    NSString *_iconName;
    NSString *_btnTitle;
    unsigned long long _btType;
    UIColor *_btnTitleColor;
    UIFont *_btnTitleFont;
    CDUnknownBlockType _clickBtnBlock;
    double _cornerRadius;
    UIColor *_btnBackgroundColor;
    double _btnWidth;
    double _btnHeight;
    double _btnSpacingY;
    NSMutableAttributedString *_attributedSubtitle;
    UIFont *_titleFont;
    UIFont *_subTitleFont;
    double _titleCenterY;
    double _iconAndTitleInterval;
    double _titleAndSubTitleInterval;
    double _subTitleToLeftInterval;
    CDUnknownBlockType _clickIconBlock;
    UILabel *_titleLb;
    UILabel *_subtitleLb;
    UIImageView *_iconView;
    UIButton *_clickBtn;
}

@property(retain, nonatomic) UIButton *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(nonatomic) _Bool customeCenterY; // @synthesize customeCenterY=_customeCenterY;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *subtitleLb; // @synthesize subtitleLb=_subtitleLb;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(copy, nonatomic) CDUnknownBlockType clickIconBlock; // @synthesize clickIconBlock=_clickIconBlock;
@property(nonatomic) double subTitleToLeftInterval; // @synthesize subTitleToLeftInterval=_subTitleToLeftInterval;
@property(nonatomic) double titleAndSubTitleInterval; // @synthesize titleAndSubTitleInterval=_titleAndSubTitleInterval;
@property(nonatomic) double iconAndTitleInterval; // @synthesize iconAndTitleInterval=_iconAndTitleInterval;
@property(nonatomic) double titleCenterY; // @synthesize titleCenterY=_titleCenterY;
@property(retain, nonatomic) UIFont *subTitleFont; // @synthesize subTitleFont=_subTitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSMutableAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(nonatomic) double btnSpacingY; // @synthesize btnSpacingY=_btnSpacingY;
@property(nonatomic) double btnHeight; // @synthesize btnHeight=_btnHeight;
@property(nonatomic) double btnWidth; // @synthesize btnWidth=_btnWidth;
@property(retain, nonatomic) UIColor *btnBackgroundColor; // @synthesize btnBackgroundColor=_btnBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) CDUnknownBlockType clickBtnBlock; // @synthesize clickBtnBlock=_clickBtnBlock;
@property(retain, nonatomic) UIFont *btnTitleFont; // @synthesize btnTitleFont=_btnTitleFont;
@property(retain, nonatomic) UIColor *btnTitleColor; // @synthesize btnTitleColor=_btnTitleColor;
@property(nonatomic) unsigned long long btType; // @synthesize btType=_btType;
@property(copy, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)clickButton;
- (void)clickIconEvent;
- (void)setupUI;
- (void)updateFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

