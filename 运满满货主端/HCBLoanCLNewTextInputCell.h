//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class CAShapeLayer, NSDictionary, NSString, UILabel, UITextField, UIView;

@interface HCBLoanCLNewTextInputCell : UITableViewCell <UITextFieldDelegate>
{
    _Bool _showTopRadius;
    _Bool _showBottomRadius;
    CDUnknownBlockType _textChangedHandler;
    UIView *_backView;
    UILabel *_titleLabel;
    UITextField *_contentTF;
    UIView *_lineView;
    NSDictionary *_info;
    CAShapeLayer *_radiusLayer;
}

@property(retain, nonatomic) CAShapeLayer *radiusLayer; // @synthesize radiusLayer=_radiusLayer;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UITextField *contentTF; // @synthesize contentTF=_contentTF;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(copy, nonatomic) CDUnknownBlockType textChangedHandler; // @synthesize textChangedHandler=_textChangedHandler;
@property(nonatomic) _Bool showBottomRadius; // @synthesize showBottomRadius=_showBottomRadius;
@property(nonatomic) _Bool showTopRadius; // @synthesize showTopRadius=_showTopRadius;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)sharpPath;
- (void)updateCellWithInfo:(id)arg1 showLine:(_Bool)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (_Bool)becomeFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

