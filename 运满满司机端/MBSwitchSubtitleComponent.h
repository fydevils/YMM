//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBBaseModuleView.h"

@class MBTextSubview, UILabel, UISwitch;

@interface MBSwitchSubtitleComponent : MBBaseModuleView
{
    UILabel *_titleLabel;
    MBTextSubview *_subTitleView;
    UISwitch *_switchView;
}

+ (double)heightForViewModel:(id)arg1;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) MBTextSubview *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)componentViewModel;
- (void)balanceSwitch:(id)arg1;
- (void)refreshView;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

