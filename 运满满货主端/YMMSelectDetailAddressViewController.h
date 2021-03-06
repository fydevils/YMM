//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "BMKPoiSearchDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class BMKPoiInfo, BMKPoiSearch, NSArray, NSString, UILabel, UITableView, UITextView, UIView, YMMGoodsAddressCoordinateModel, YMMRegion;

@interface YMMSelectDetailAddressViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, BMKPoiSearchDelegate>
{
    NSArray *_addressArr;
    BMKPoiInfo *_currentPoiInfo;
    unsigned long long _goodsHandlingType;
    YMMRegion *_currentRegion;
    NSString *_currentAddress;
    YMMGoodsAddressCoordinateModel *_coordinateModel;
    CDUnknownBlockType _callback;
    UIView *_addressView;
    UILabel *_titleLabel;
    UILabel *_regionLabel;
    UIView *_lineView;
    UILabel *_detailAddressLabel;
    UILabel *_addressTipLabel;
    UITextView *_textView;
    UITableView *_detailAddressTableView;
    BMKPoiSearch *_bmkPoiSearch;
}

@property(retain, nonatomic) BMKPoiSearch *bmkPoiSearch; // @synthesize bmkPoiSearch=_bmkPoiSearch;
@property(retain, nonatomic) UITableView *detailAddressTableView; // @synthesize detailAddressTableView=_detailAddressTableView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *addressTipLabel; // @synthesize addressTipLabel=_addressTipLabel;
@property(retain, nonatomic) UILabel *detailAddressLabel; // @synthesize detailAddressLabel=_detailAddressLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *regionLabel; // @synthesize regionLabel=_regionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *addressView; // @synthesize addressView=_addressView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) YMMGoodsAddressCoordinateModel *coordinateModel; // @synthesize coordinateModel=_coordinateModel;
@property(retain, nonatomic) NSString *currentAddress; // @synthesize currentAddress=_currentAddress;
@property(retain, nonatomic) YMMRegion *currentRegion; // @synthesize currentRegion=_currentRegion;
@property(nonatomic) unsigned long long goodsHandlingType; // @synthesize goodsHandlingType=_goodsHandlingType;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onGetPoiResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChanged:(id)arg1;
- (void)removeObserverForTextView;
- (void)addObserverForTextView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)rightBarItemClick;
- (void)setRightBarItem;
- (void)initControls;
- (void)setViewConstraints;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

