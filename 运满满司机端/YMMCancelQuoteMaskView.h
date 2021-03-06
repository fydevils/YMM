//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class CancelQuoteFilterView, NSMutableArray, NSNumber, NSString, UIButton, UILabel, UIView, YMMCancelQuoteTextView;

@interface YMMCancelQuoteMaskView : YMMPopupMaskView
{
    _Bool _isSelectLast;
    CDUnknownBlockType _confirmBack;
    UIButton *_confirmButton;
    UILabel *_titleLabel;
    UILabel *_subLabel;
    UIView *_backgroundView;
    YMMCancelQuoteTextView *_textViewBack;
    CancelQuoteFilterView *_filterView;
    NSMutableArray *_saveArray;
    NSNumber *_saveItemId;
    NSString *_saveReason;
}

@property(copy, nonatomic) NSString *saveReason; // @synthesize saveReason=_saveReason;
@property(retain, nonatomic) NSNumber *saveItemId; // @synthesize saveItemId=_saveItemId;
@property(nonatomic) _Bool isSelectLast; // @synthesize isSelectLast=_isSelectLast;
@property(retain, nonatomic) NSMutableArray *saveArray; // @synthesize saveArray=_saveArray;
@property(retain, nonatomic) CancelQuoteFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) YMMCancelQuoteTextView *textViewBack; // @synthesize textViewBack=_textViewBack;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(copy, nonatomic) CDUnknownBlockType confirmBack; // @synthesize confirmBack=_confirmBack;
- (void).cxx_destruct;
- (void)setPopupViewPosition:(_Bool)arg1 keyBoardHeight:(double)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)confirmQute;
- (void)show;
- (void)setConstraints;
- (void)updateBackgroudViewTextViewHeight:(_Bool)arg1;
- (void)reloadView:(id)arg1;
- (void)updateConformButtonCanUse:(_Bool)arg1 isTextExist:(_Bool)arg2;
- (void)configSubViews;
- (void)ymm_loadView;
- (void)dealloc;
- (id)init;

@end

