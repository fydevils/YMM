//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UITextField;

@interface HCBLoanPPCustomerInfoTextCell : UITableViewCell
{
    UILabel *_titleLabel;
    UITextField *_textField;
    CDUnknownBlockType _textFieldDidChangeText;
}

@property(copy, nonatomic) CDUnknownBlockType textFieldDidChangeText; // @synthesize textFieldDidChangeText=_textFieldDidChangeText;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_textFieldTextDidChangeNotification:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)dealloc;

@end

