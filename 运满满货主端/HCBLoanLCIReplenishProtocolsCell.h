//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HCBLoanAgreementCheckMarkView;

@interface HCBLoanLCIReplenishProtocolsCell : UITableViewCell
{
    CDUnknownBlockType _checkStatusDidChanged;
    CDUnknownBlockType _didTapUrl;
    HCBLoanAgreementCheckMarkView *_checkView;
}

@property(retain, nonatomic) HCBLoanAgreementCheckMarkView *checkView; // @synthesize checkView=_checkView;
@property(copy, nonatomic) CDUnknownBlockType didTapUrl; // @synthesize didTapUrl=_didTapUrl;
@property(copy, nonatomic) CDUnknownBlockType checkStatusDidChanged; // @synthesize checkStatusDidChanged=_checkStatusDidChanged;
- (void).cxx_destruct;
- (void)updateCellWithInfo:(id)arg1 lastChecked:(_Bool)arg2;
- (void)p_setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

