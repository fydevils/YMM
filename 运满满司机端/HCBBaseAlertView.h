//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface HCBBaseAlertView : UIView
{
    long long _showType;
    UIView *_backView;
}

@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
- (void).cxx_destruct;
- (void)addBackView;
- (void)dismiss;
- (void)showAlertViewWithShowType:(long long)arg1;

@end

