//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface HCBLoanLRBillOtherRepayCell : UITableViewCell
{
    _Bool _select;
    _Bool _showLine;
    NSString *_repaidAmountStr;
    NSString *_intervalStr;
    NSString *_detailStr;
    UIImageView *_selectImageView;
    UILabel *_repayAmountLabel;
    UILabel *_remainDaysLabel;
    UILabel *_detailLabel;
    UIView *_lineView;
}

@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak UILabel *remainDaysLabel; // @synthesize remainDaysLabel=_remainDaysLabel;
@property(nonatomic) __weak UILabel *repayAmountLabel; // @synthesize repayAmountLabel=_repayAmountLabel;
@property(nonatomic) __weak UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(nonatomic) _Bool showLine; // @synthesize showLine=_showLine;
@property(nonatomic) _Bool select; // @synthesize select=_select;
@property(copy, nonatomic) NSString *detailStr; // @synthesize detailStr=_detailStr;
@property(copy, nonatomic) NSString *intervalStr; // @synthesize intervalStr=_intervalStr;
@property(copy, nonatomic) NSString *repaidAmountStr; // @synthesize repaidAmountStr=_repaidAmountStr;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

