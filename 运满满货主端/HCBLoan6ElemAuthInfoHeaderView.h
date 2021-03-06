//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class HCBLoanCountdownButton, NSArray, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface HCBLoan6ElemAuthInfoHeaderView : UITableViewHeaderFooterView
{
    _Bool _hideLastTextField;
    UIImageView *_bottomBGView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_tipsLabel;
    UILabel *_containerTitleLabel;
    UILabel *_containerStateLabel;
    NSArray *_textFields;
    HCBLoanCountdownButton *_sendCodeButton;
    UIView *_containerView;
    NSLayoutConstraint *_containerViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *containerViewHeightConstraint; // @synthesize containerViewHeightConstraint=_containerViewHeightConstraint;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool hideLastTextField; // @synthesize hideLastTextField=_hideLastTextField;
@property(retain, nonatomic) HCBLoanCountdownButton *sendCodeButton; // @synthesize sendCodeButton=_sendCodeButton;
@property(retain, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(retain, nonatomic) UILabel *containerStateLabel; // @synthesize containerStateLabel=_containerStateLabel;
@property(retain, nonatomic) UILabel *containerTitleLabel; // @synthesize containerTitleLabel=_containerTitleLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bottomBGView; // @synthesize bottomBGView=_bottomBGView;
- (void).cxx_destruct;
- (void)p_setupSendCodeButtonOnField:(id)arg1;
- (void)p_setupRightMargin:(double)arg1 forField:(id)arg2;
- (void)p_setupLeftTitle:(id)arg1 width:(double)arg2 forField:(id)arg3;
- (void)awakeFromNib;

@end

