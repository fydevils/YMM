//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TangramLayoutProtocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<TangramItemModelProtocol>, NSString, TangramBus, TangramView, UIImageView;

@interface TangramFlowLayout : UIView <TangramLayoutProtocol>
{
    _Bool _autoFill;
    _Bool _enableMarginDeduplication;
    _Bool _disableUserInteraction;
    _Bool _enableInnerZIndexLayout;
    int _numberOfReloadRequests;
    NSArray *_itemModels;
    unsigned long long _numberOfColumns;
    NSArray *_cols;
    NSString *_aspectRatio;
    NSArray *_margin;
    NSArray *_padding;
    double _hGap;
    double _vGap;
    NSString *_layoutLoadAPI;
    UIImageView *_bgImageView;
    NSString *_bgImgURL;
    TangramBus *_tangramBus;
    TangramView *_tangramView;
    unsigned long long _bgScaleType;
    NSDictionary *_loadParams;
    long long _loadType;
    NSDictionary *_subLayoutDict;
    NSArray *_subLayoutIdentifiers;
    double _zIndex;
    NSString *_layoutIdentifier;
    double _firstReloadRequestTS;
    NSMutableArray *_firstElementModelInRow;
    NSMutableDictionary *_layoutModelDict;
    NSObject<TangramItemModelProtocol> *_headerItemModel;
    NSObject<TangramItemModelProtocol> *_footerItemModel;
    unsigned long long _contentItemModelCount;
    NSString *_subLayoutIndex;
    NSMutableDictionary *_zIndexItemDict;
}

@property(retain, nonatomic) NSMutableDictionary *zIndexItemDict; // @synthesize zIndexItemDict=_zIndexItemDict;
@property(retain, nonatomic) NSString *subLayoutIndex; // @synthesize subLayoutIndex=_subLayoutIndex;
@property(nonatomic) unsigned long long contentItemModelCount; // @synthesize contentItemModelCount=_contentItemModelCount;
@property(retain, nonatomic) NSObject<TangramItemModelProtocol> *footerItemModel; // @synthesize footerItemModel=_footerItemModel;
@property(retain, nonatomic) NSObject<TangramItemModelProtocol> *headerItemModel; // @synthesize headerItemModel=_headerItemModel;
@property(retain, nonatomic) NSMutableDictionary *layoutModelDict; // @synthesize layoutModelDict=_layoutModelDict;
@property(retain, nonatomic) NSMutableArray *firstElementModelInRow; // @synthesize firstElementModelInRow=_firstElementModelInRow;
@property double firstReloadRequestTS; // @synthesize firstReloadRequestTS=_firstReloadRequestTS;
@property int numberOfReloadRequests; // @synthesize numberOfReloadRequests=_numberOfReloadRequests;
@property(retain, nonatomic) NSString *layoutIdentifier; // @synthesize layoutIdentifier=_layoutIdentifier;
@property(nonatomic) _Bool enableInnerZIndexLayout; // @synthesize enableInnerZIndexLayout=_enableInnerZIndexLayout;
@property(nonatomic) _Bool disableUserInteraction; // @synthesize disableUserInteraction=_disableUserInteraction;
@property(nonatomic) double zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) _Bool enableMarginDeduplication; // @synthesize enableMarginDeduplication=_enableMarginDeduplication;
@property(retain, nonatomic) NSArray *subLayoutIdentifiers; // @synthesize subLayoutIdentifiers=_subLayoutIdentifiers;
@property(retain, nonatomic) NSDictionary *subLayoutDict; // @synthesize subLayoutDict=_subLayoutDict;
@property(nonatomic) long long loadType; // @synthesize loadType=_loadType;
@property(retain, nonatomic) NSDictionary *loadParams; // @synthesize loadParams=_loadParams;
@property(nonatomic) unsigned long long bgScaleType; // @synthesize bgScaleType=_bgScaleType;
@property(nonatomic) __weak TangramView *tangramView; // @synthesize tangramView=_tangramView;
@property(nonatomic) __weak TangramBus *tangramBus; // @synthesize tangramBus=_tangramBus;
@property(retain, nonatomic) NSString *bgImgURL; // @synthesize bgImgURL=_bgImgURL;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSString *layoutLoadAPI; // @synthesize layoutLoadAPI=_layoutLoadAPI;
@property(nonatomic) _Bool autoFill; // @synthesize autoFill=_autoFill;
@property(nonatomic) double vGap; // @synthesize vGap=_vGap;
@property(nonatomic) double hGap; // @synthesize hGap=_hGap;
@property(retain, nonatomic) NSArray *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSArray *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSString *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) NSArray *cols; // @synthesize cols=_cols;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (void).cxx_destruct;
- (void)removeUnuseSubLayouts;
- (void)addSubLayouts;
- (void)buildInnerSubLayoutByModel:(id)arg1;
- (void)setItemWidth:(double)arg1 withModel:(id)arg2;
- (void)setItemTop:(double)arg1 withModel:(id)arg2;
- (void)setItemLeft:(double)arg1 withModel:(id)arg2;
@property(retain, nonatomic) NSString *identifier;
- (id)loadAPI;
- (void)heightChangedWithElement:(id)arg1 model:(id)arg2;
- (void)calculateLayout;
- (void)didMoveToSuperview;
- (void)buildZIndexView;
- (void)addSubView:(id)arg1 withModel:(id)arg2;
- (void)addFooterView:(id)arg1;
- (void)addHeaderView:(id)arg1;
- (double)marginLeft;
- (double)marginBottom;
- (double)marginRight;
- (double)marginTop;
@property(retain, nonatomic) NSArray *itemModels; // @synthesize itemModels=_itemModels;
- (id)position;
- (struct NSString *)layoutType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

