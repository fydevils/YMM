//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, YMMAlertAction;

@interface YMMAlertControllerActionView : UIView
{
    id _target;
    SEL _methodAction;
    YMMAlertAction *_action;
    UIButton *_actionButton;
    NSMutableArray *_actionButtonConstraints;
    double _afterSpacing;
}

@property(nonatomic) double afterSpacing; // @synthesize afterSpacing=_afterSpacing;
@property(retain, nonatomic) NSMutableArray *actionButtonConstraints; // @synthesize actionButtonConstraints=_actionButtonConstraints;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) YMMAlertAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)touchDragExit:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

@end

