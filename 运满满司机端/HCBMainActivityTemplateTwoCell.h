//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBBaseActivityCell.h"

@class HCBMainActivityTemplateTwoView;

@interface HCBMainActivityTemplateTwoCell : HCBBaseActivityCell
{
    HCBMainActivityTemplateTwoView *_viewLeftMainActivity;
    HCBMainActivityTemplateTwoView *_viewRightMainActivity;
}

@property(nonatomic) __weak HCBMainActivityTemplateTwoView *viewRightMainActivity; // @synthesize viewRightMainActivity=_viewRightMainActivity;
@property(nonatomic) __weak HCBMainActivityTemplateTwoView *viewLeftMainActivity; // @synthesize viewLeftMainActivity=_viewLeftMainActivity;
- (void).cxx_destruct;
- (void)setupCellInfo:(id)arg1;
- (void)setupCellView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

