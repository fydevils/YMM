//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface VFSDKCardPaymentCardCell : UITableViewCell
{
    UIImageView *_iconIV;
    UILabel *_bankInfoLB;
    UILabel *_bankCardTailLB;
}

@property(nonatomic) __weak UILabel *bankCardTailLB; // @synthesize bankCardTailLB=_bankCardTailLB;
@property(nonatomic) __weak UILabel *bankInfoLB; // @synthesize bankInfoLB=_bankInfoLB;
@property(nonatomic) __weak UIImageView *iconIV; // @synthesize iconIV=_iconIV;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1;
- (void)awakeFromNib;

@end

