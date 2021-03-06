//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel, YMMLinkLabel;

@interface YMMUserAuthAgreementView : UIView
{
    _Bool _agreemented;
    NSString *_allText;
    CDUnknownBlockType _clickedBtnBlock;
    UILabel *_tipLabel;
    UIButton *_selectBtn;
    YMMLinkLabel *_textLabel;
}

@property(retain, nonatomic) YMMLinkLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(readonly, nonatomic) _Bool agreemented; // @synthesize agreemented=_agreemented;
@property(copy, nonatomic) CDUnknownBlockType clickedBtnBlock; // @synthesize clickedBtnBlock=_clickedBtnBlock;
@property(copy, nonatomic) NSString *allText; // @synthesize allText=_allText;
- (void).cxx_destruct;
- (void)clickedSelectedBtn:(id)arg1;
- (void)showTipLabel:(_Bool)arg1;
- (void)addLinkText:(id)arg1 linkAddAttribute:(id)arg2 linkBlock:(CDUnknownBlockType)arg3;
- (void)updateConstraints;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAgreemented:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 agreemented:(_Bool)arg2;

@end

