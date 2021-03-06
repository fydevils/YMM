//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIControl;

@interface HCBActivityView : UIView
{
    _Bool _isShowAll;
    CDUnknownBlockType _actionShowAll;
    UIControl *_crlMoreActivity;
    double _viewWidth;
    NSMutableArray *_activityItemArray;
}

+ (id)getActivityView;
@property(retain, nonatomic) NSMutableArray *activityItemArray; // @synthesize activityItemArray=_activityItemArray;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) __weak UIControl *crlMoreActivity; // @synthesize crlMoreActivity=_crlMoreActivity;
@property(copy, nonatomic) CDUnknownBlockType actionShowAll; // @synthesize actionShowAll=_actionShowAll;
@property(nonatomic) _Bool isShowAll; // @synthesize isShowAll=_isShowAll;
- (void).cxx_destruct;
- (void)clickedMoreActivity:(id)arg1;
- (void)setupViewNotShowAll;
- (void)setupViewShowAll;
- (void)setupActivityView:(id)arg1 width:(double)arg2;

@end

