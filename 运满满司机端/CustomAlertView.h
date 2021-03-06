//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMTextViewCellDelegate.h"

@class CustomFooterView, CustomHeaderView, NSArray, NSDictionary, NSNumber, NSString, UIControl, UITableView;

@interface CustomAlertView : UIView <UITableViewDelegate, UITableViewDataSource, YMMTextViewCellDelegate>
{
    long long currentIndex;
    _Bool _fromCancelOrder;
    _Bool _refundOrder;
    NSDictionary *_resonDict;
    CDUnknownBlockType _callBackBlock;
    unsigned long long _customAlerttype;
    NSNumber *_refund;
    UITableView *_tableView;
    CustomHeaderView *_headerView;
    CustomFooterView *_footerView;
    UIControl *_overlayView;
    NSArray *_keyArray;
    NSArray *_resonArray;
    NSString *_othersReason;
}

+ (id)initWithCustomAlertRefund:(id)arg1;
+ (id)initWithCustomAlertCancelOrder;
@property(copy, nonatomic) NSString *othersReason; // @synthesize othersReason=_othersReason;
@property(retain, nonatomic) NSArray *resonArray; // @synthesize resonArray=_resonArray;
@property(retain, nonatomic) NSArray *keyArray; // @synthesize keyArray=_keyArray;
@property(retain, nonatomic) UIControl *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) CustomFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) CustomHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool refundOrder; // @synthesize refundOrder=_refundOrder;
@property(nonatomic) _Bool fromCancelOrder; // @synthesize fromCancelOrder=_fromCancelOrder;
@property(retain, nonatomic) NSNumber *refund; // @synthesize refund=_refund;
@property(nonatomic) unsigned long long customAlerttype; // @synthesize customAlerttype=_customAlerttype;
@property(copy, nonatomic) CDUnknownBlockType callBackBlock; // @synthesize callBackBlock=_callBackBlock;
@property(retain, nonatomic) NSDictionary *resonDict; // @synthesize resonDict=_resonDict;
- (void).cxx_destruct;
- (void)currentCellDidEndEditing:(id)arg1;
- (void)currentCellShouldEndEditing:(id)arg1;
- (void)currentCellDidBeginEditing:(id)arg1;
- (void)currentCellShouldBeginEditing:(id)arg1;
- (void)rightBottomAction:(id)arg1;
- (void)leftBottomAction:(id)arg1;
- (void)dismiss;
- (void)show;
- (void)fadeOut;
- (void)fadeIn;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutSubviews;
- (double)alertViewHeight;
- (double)alertHeaderViewHeight;
- (double)tableViewHeight;
- (void)defalutInit;
- (id)initWithCustomAlerttype:(unsigned long long)arg1 withRefund:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

