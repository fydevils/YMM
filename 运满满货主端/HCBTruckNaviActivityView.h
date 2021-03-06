//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface HCBTruckNaviActivityView : UIView
{
    _Bool _hiddenContent;
    NSString *_skipLink;
    long long _activityStatus;
    CDUnknownBlockType _closedBlock;
    NSString *_link;
    UIButton *_redBtn;
    UIView *_contentView;
    UILabel *_contentLabel;
    UIImageView *_closeImageView;
    UIView *_activityView;
}

@property(nonatomic) __weak UIView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) __weak UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIButton *redBtn; // @synthesize redBtn=_redBtn;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) CDUnknownBlockType closedBlock; // @synthesize closedBlock=_closedBlock;
@property(nonatomic) long long activityStatus; // @synthesize activityStatus=_activityStatus;
- (void).cxx_destruct;
- (void)closeContetn;
- (void)closeContentAnimation;
- (void)setContentHidden:(_Bool)arg1;
- (void)redBtnPress:(id)arg1;
- (void)closeBtnPress:(id)arg1;
- (void)linkBtnPress:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;

@end

