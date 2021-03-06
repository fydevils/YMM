//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MBDataObserver.h"

@class MBJson, NSString;

@interface MBComponentButton : UIButton <MBDataObserver>
{
    MBJson *_contentJson;
    NSString *_componentId;
    id <MBComponentButtonProtocol> _delegate;
}

+ (id)buttonWithConfigJson:(id)arg1;
@property(nonatomic) __weak id <MBComponentButtonProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) MBJson *contentJson; // @synthesize contentJson=_contentJson;
- (void).cxx_destruct;
- (void)requestFailedForTask:(id)arg1 withError:(id)arg2;
- (void)requestSuccessForTask:(id)arg1;
- (void)moudleDynamicActionTaskSend;
- (void)moudleDynamicActionSchemeJump;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)handleDymamicAction;
- (id)getKeyBindValueWithComponentId:(id)arg1 property:(id)arg2;
- (id)getKeyBindValueWithKeyPath:(id)arg1;
- (id)getKeyBindValues:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

