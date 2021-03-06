//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BargainChatProtocol.h"

@class NSString, YMMBargainCargoDetailView, YMMBargainHomePageModel, YMMBargainOperationView, YMMBargainTimeCounter;

@interface YMMBargainChatHeaderCargoInfoView : UIView <BargainChatProtocol>
{
    CDUnknownBlockType _stopCutdownTimerBlock;
    CDUnknownBlockType _operationBlock;
    CDUnknownBlockType _clickBlock;
    YMMBargainHomePageModel *_pageModel;
    YMMBargainTimeCounter *_timerCounter;
    YMMBargainCargoDetailView *_cargoDetailView;
    YMMBargainOperationView *_operationView;
}

+ (double)itemHeight:(id)arg1;
@property(retain, nonatomic) YMMBargainOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) YMMBargainCargoDetailView *cargoDetailView; // @synthesize cargoDetailView=_cargoDetailView;
@property(retain, nonatomic) YMMBargainTimeCounter *timerCounter; // @synthesize timerCounter=_timerCounter;
@property(retain, nonatomic) YMMBargainHomePageModel *pageModel; // @synthesize pageModel=_pageModel;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(copy, nonatomic) CDUnknownBlockType stopCutdownTimerBlock; // @synthesize stopCutdownTimerBlock=_stopCutdownTimerBlock;
- (void).cxx_destruct;
- (void)onBargainMessagesReceived:(id)arg1;
- (void)clickAction;
- (void)addConstraint;
- (void)updateHeaderOperationView:(id)arg1;
- (void)updateCargoDetailView:(id)arg1;
- (void)setupHeaderCargoInfoView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

