//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDate, NSIndexPath, NSString, UIImage, UIImageView, UITableView, UITapGestureRecognizer;

@interface YMMCallListAlertView : YMMPopupMaskView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showTelephone;
    _Bool _showIMCell;
    id <YMMCallListAlertViewDelegate> _callDelegate;
    UIImageView *_adsImageView;
    UIImage *_adDefaultImage;
    CDUnknownBlockType _imageBlock;
    UIImageView *_rightCornerCloseButton;
    UITableView *_tableView;
    UITapGestureRecognizer *_rightCornerDismissGesture;
    UITapGestureRecognizer *_advertisementSegueGesture;
    NSString *_requestTitle;
    long long _type;
    NSArray *_telephones;
    NSString *_segueFromValue;
    NSString *_subSegueFromValue;
    NSDate *_alertViewAppearTime;
    NSIndexPath *_selectIndex;
    struct CGRect _beginFrame;
}

@property(retain, nonatomic) NSIndexPath *selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSDate *alertViewAppearTime; // @synthesize alertViewAppearTime=_alertViewAppearTime;
@property(retain, nonatomic) NSString *subSegueFromValue; // @synthesize subSegueFromValue=_subSegueFromValue;
@property(retain, nonatomic) NSString *segueFromValue; // @synthesize segueFromValue=_segueFromValue;
@property(retain, nonatomic) NSArray *telephones; // @synthesize telephones=_telephones;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *requestTitle; // @synthesize requestTitle=_requestTitle;
@property(retain, nonatomic) UITapGestureRecognizer *advertisementSegueGesture; // @synthesize advertisementSegueGesture=_advertisementSegueGesture;
@property(retain, nonatomic) UITapGestureRecognizer *rightCornerDismissGesture; // @synthesize rightCornerDismissGesture=_rightCornerDismissGesture;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImageView *rightCornerCloseButton; // @synthesize rightCornerCloseButton=_rightCornerCloseButton;
@property(nonatomic) _Bool showIMCell; // @synthesize showIMCell=_showIMCell;
@property(nonatomic) struct CGRect beginFrame; // @synthesize beginFrame=_beginFrame;
@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
@property(retain, nonatomic) UIImage *adDefaultImage; // @synthesize adDefaultImage=_adDefaultImage;
@property(nonatomic) _Bool showTelephone; // @synthesize showTelephone=_showTelephone;
@property(retain, nonatomic) UIImageView *adsImageView; // @synthesize adsImageView=_adsImageView;
@property(nonatomic) __weak id <YMMCallListAlertViewDelegate> callDelegate; // @synthesize callDelegate=_callDelegate;
- (void).cxx_destruct;
- (void)customDidSelectCellActionAtIndexPath:(id)arg1;
- (void)callDidSelectCellActionAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 customDidSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 callCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)telephoneList;
- (id)telephoneNumber;
- (_Bool)hasTelephone;
- (void)dismiss;
- (void)ymm_maskDoDisappear;
- (void)ymm_maskDidAppear;
- (void)ymm_maskDoAppear;
- (void)ymm_loadView;
- (double)ymm_animationDuration;
- (long long)cellNumber;
- (double)tableViewHeight;
- (double)heightOfButton;
- (double)widthOfContent;
- (double)heightOfFlexibleWidth;
- (double)heightOfFlexibleHeight;
- (void)segueSchemeAdvertisement:(id)arg1;
- (void)closeAdsAlertView:(id)arg1;
- (void)reloadView;
- (void)reloadAdImage:(id)arg1;
- (void)showAlertView;
- (void)showForTelephones:(id)arg1 beginFrame:(struct CGRect)arg2;
- (id)initWithSegueFrom:(id)arg1 subSegueFrom:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

