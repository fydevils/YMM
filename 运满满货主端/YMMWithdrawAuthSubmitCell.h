//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSString, UIButton, UILabel;

@interface YMMWithdrawAuthSubmitCell : YMMBaseTableViewCell
{
    UIButton *_submitBtn;
    NSString *_submitBakStr;
    CDUnknownBlockType _authSubmitCallBack;
    UILabel *_desLab;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)cellWithTableView:(id)arg1;
@property(retain, nonatomic) UILabel *desLab; // @synthesize desLab=_desLab;
@property(copy, nonatomic) CDUnknownBlockType authSubmitCallBack; // @synthesize authSubmitCallBack=_authSubmitCallBack;
@property(copy, nonatomic) NSString *submitBakStr; // @synthesize submitBakStr=_submitBakStr;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
- (void).cxx_destruct;
- (void)doSubmit;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

