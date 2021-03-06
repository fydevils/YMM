//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLKView.h"

@class CADisplayLink, MAMapEngine, NSString, UIBezierPath, UIImage;

@interface MAMapRender : GLKView
{
    MAMapEngine *_internalMapEngine;
    CADisplayLink *_displayLink;
    _Bool _isNeedReloadMap;
    double _prevDrawableWidth;
    double _prevDrawableHeight;
    _Bool _isInDrawRectCycle;
    NSString *_runLoopMode;
    _Bool _willResignActiveReceived;
    _Bool _checkContextInDrawRect;
    _Bool _isOpenGlDisabled;
    _Bool _isAllowDecreaseRenderFrame;
    int _trueFPS;
    id <MAMapRenderDelegate> _internalDelegate;
    unsigned long long _currentFPS;
    UIBezierPath *_snapshotPath;
    UIImage *_snapshotImage;
    double _lastTime;
}

@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) UIBezierPath *snapshotPath; // @synthesize snapshotPath=_snapshotPath;
@property(nonatomic) _Bool isAllowDecreaseRenderFrame; // @synthesize isAllowDecreaseRenderFrame=_isAllowDecreaseRenderFrame;
@property(nonatomic) unsigned long long currentFPS; // @synthesize currentFPS=_currentFPS;
@property(nonatomic) int trueFPS; // @synthesize trueFPS=_trueFPS;
@property(nonatomic) _Bool isOpenGlDisabled; // @synthesize isOpenGlDisabled=_isOpenGlDisabled;
@property(nonatomic) __weak id <MAMapRenderDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
- (void).cxx_destruct;
- (void)updateEngineSize:(double)arg1 height:(double)arg2;
- (void)onWillResignActiveNotification;
- (void)onDidBecomeActiveNotification;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)commonInit;
- (void)MAMapRenderDeallocOperation;
- (void)dealloc;
- (void)outterControlledDisplay;
- (void)drawRect:(struct CGRect)arg1;
- (void)display;
- (void)onDisplayLink;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)calculateTrueFPS;
- (_Bool)canPerformDrawing;
- (_Bool)isiPhoneX;
- (void)setNeedsDisplay:(_Bool)arg1;
- (void)layoutSubviews;
- (void)willDestroy;
- (_Bool)isPaused;
- (void)resumeFPS;
- (void)testShouldStartRender;
- (void)stopRender;
- (void)startRender;
- (void)reloadMap;
- (void)updateRunLoopMode:(id)arg1;
@property(readonly, nonatomic) __weak MAMapEngine *mapEngine;

@end

