//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseAlertView.h"

@class UIView, YMMDTAttributedTextView, YMMPrivacySettingItemModel;

@interface YMMAuthorizationItemAlert : YMMBaseAlertView
{
    CDUnknownBlockType _submitBlock;
    CDUnknownBlockType _noSubmitBlock;
    YMMPrivacySettingItemModel *_itemModel;
    UIView *_superView;
    YMMDTAttributedTextView *_textView;
    YMMDTAttributedTextView *_readTxtView;
    UIView *_contentV;
}

@property(retain, nonatomic) UIView *contentV; // @synthesize contentV=_contentV;
@property(retain, nonatomic) YMMDTAttributedTextView *readTxtView; // @synthesize readTxtView=_readTxtView;
@property(retain, nonatomic) YMMDTAttributedTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) YMMPrivacySettingItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(copy, nonatomic) CDUnknownBlockType noSubmitBlock; // @synthesize noSubmitBlock=_noSubmitBlock;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
- (void).cxx_destruct;
- (void)setup;
- (void)show;
- (id)contentView;
- (id)init;

@end

