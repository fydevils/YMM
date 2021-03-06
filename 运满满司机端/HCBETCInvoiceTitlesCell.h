//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CALayer, HCBETCInvoiceTitlesLayout, UIButton, UILabel;

@interface HCBETCInvoiceTitlesCell : UITableViewCell
{
    HCBETCInvoiceTitlesLayout *_titleLayout;
    CDUnknownBlockType _deleteBlock;
    CDUnknownBlockType _editBlock;
    UILabel *_labTitle;
    UILabel *_labCount;
    CALayer *_layerLine;
    UIButton *_buttonDelete;
    UIButton *_buttonEdit;
}

@property(retain, nonatomic) UIButton *buttonEdit; // @synthesize buttonEdit=_buttonEdit;
@property(retain, nonatomic) UIButton *buttonDelete; // @synthesize buttonDelete=_buttonDelete;
@property(retain, nonatomic) CALayer *layerLine; // @synthesize layerLine=_layerLine;
@property(retain, nonatomic) UILabel *labCount; // @synthesize labCount=_labCount;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(retain, nonatomic) HCBETCInvoiceTitlesLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
- (void).cxx_destruct;
- (void)actionDelete:(id)arg1;
- (void)actionEdit:(id)arg1;
- (id)getButtonWithTitle:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateSubviewsFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

