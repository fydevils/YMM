//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSNumber, NSString, UILabel;

@interface YMMPublishGoodsPointsView : YMMPopupMaskView
{
    NSString *_title;
    NSNumber *_points;
    NSString *_pointsText;
    NSString *_otherText;
    CDUnknownBlockType _dismissCallback;
    UILabel *_titleLabel;
    UILabel *_pointsLabel;
    UILabel *_otherLabel;
}

@property(retain, nonatomic) UILabel *otherLabel; // @synthesize otherLabel=_otherLabel;
@property(retain, nonatomic) UILabel *pointsLabel; // @synthesize pointsLabel=_pointsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType dismissCallback; // @synthesize dismissCallback=_dismissCallback;
@property(retain, nonatomic) NSString *otherText; // @synthesize otherText=_otherText;
@property(retain, nonatomic) NSString *pointsText; // @synthesize pointsText=_pointsText;
@property(retain, nonatomic) NSNumber *points; // @synthesize points=_points;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)showInView:(id)arg1;
- (void)ymm_loadView;
- (void)setPointToastViewFrame;
- (id)pointLabelAttributText:(id)arg1;

@end

