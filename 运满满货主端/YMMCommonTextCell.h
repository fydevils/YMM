//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, UITextField;

@interface YMMCommonTextCell : YMMBaseTableViewCell
{
    UIButton *_updateBtn;
    CDUnknownBlockType _btnCallBack;
    long long _cellType;
    UIImageView *_leftIcon;
    UILabel *_cellTitleLab;
    UILabel *_cellInfoLab;
    UITextField *_infoTextField;
    UIImageView *_arrowIcon;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)indentifier:(long long)arg1;
+ (id)ymm_createCellForTableView:(id)arg1 cellType:(long long)arg2;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UITextField *infoTextField; // @synthesize infoTextField=_infoTextField;
@property(retain, nonatomic) UILabel *cellInfoLab; // @synthesize cellInfoLab=_cellInfoLab;
@property(retain, nonatomic) UILabel *cellTitleLab; // @synthesize cellTitleLab=_cellTitleLab;
@property(retain, nonatomic) UIImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(readonly, nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(copy, nonatomic) CDUnknownBlockType btnCallBack; // @synthesize btnCallBack=_btnCallBack;
@property(retain, nonatomic) UIButton *updateBtn; // @synthesize updateBtn=_updateBtn;
- (void).cxx_destruct;
- (void)clickedAction:(id)arg1;
- (void)ymm_configureWithCellModel:(id)arg1;
- (void)ymm_configCellWithLeftIcon:(id)arg1 leftTitle:(id)arg2 rightTitle:(id)arg3 rightBtnTitle:(id)arg4 showArrowOrBtn:(_Bool)arg5;
- (void)ymm_configCellWithLeftTitle:(id)arg1 rightTitle:(id)arg2 rightBtnTitle:(id)arg3 showArrowOrBtn:(_Bool)arg4;
- (void)ymm_configCellWithLeftTitle:(id)arg1 rightTitle:(id)arg2 showArrowOrBtn:(_Bool)arg3;
- (void)updateConstraints;
- (void)configConstraints;
- (void)configSubViews;
- (id)initWithCellType:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

