//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HCBPetrolOrderBotCellModel, UILabel;

@interface HCBPetrolOrderBotCell : UITableViewCell
{
    HCBPetrolOrderBotCellModel *_cellModel;
    CDUnknownBlockType _toProtocal;
    UILabel *_timeTitle;
    UILabel *_timeLabel;
    UILabel *_proTitle;
    UILabel *_proLabel;
}

@property(retain, nonatomic) UILabel *proLabel; // @synthesize proLabel=_proLabel;
@property(retain, nonatomic) UILabel *proTitle; // @synthesize proTitle=_proTitle;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *timeTitle; // @synthesize timeTitle=_timeTitle;
@property(copy, nonatomic) CDUnknownBlockType toProtocal; // @synthesize toProtocal=_toProtocal;
@property(retain, nonatomic) HCBPetrolOrderBotCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)toProtocalView;
- (void)updateUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

