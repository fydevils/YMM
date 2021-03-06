//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAShape.h"

#import "MAOverlay.h"

@class MAParticleOverlayOptions, NSString;

@interface MAParticleOverlay : MAShape <MAOverlay>
{
    _Bool _needUpdateOption;
    MAParticleOverlayOptions *_overlayOption;
}

+ (id)particleOverlayWithOption:(id)arg1;
@property(nonatomic) _Bool needUpdateOption; // @synthesize needUpdateOption=_needUpdateOption;
@property(retain, nonatomic) MAParticleOverlayOptions *overlayOption; // @synthesize overlayOption=_overlayOption;
- (void).cxx_destruct;
- (void)updateOverlayOption:(id)arg1;
@property(readonly, nonatomic) struct MAMapRect boundingMapRect;
- (void)dealloc;
- (void)buildParticleOverlayOption;
- (id)initWithParticleOverlayWithOption:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

