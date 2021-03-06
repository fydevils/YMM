//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MAAnnotationViewDelegate.h"

@class MAAnnotationView, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSString;

@interface MAAnnotationContainerView : UIView <MAAnnotationViewDelegate>
{
    id <MAAnnotationContainerViewDelegate> _delegate;
    id <MAAnnotation> _selectedAnnotation;
    MAAnnotationView *_selectedAnnotationView;
    NSMutableSet *_annotationSet;
    NSMutableSet *_animatedAnnotationSet;
    NSMutableSet *_animatingAnnotationSet;
    NSMutableArray *_glesAnnotationViews;
    NSMapTable *_annotationAndViewsTable;
}

@property(retain, nonatomic) NSMapTable *annotationAndViewsTable; // @synthesize annotationAndViewsTable=_annotationAndViewsTable;
@property(retain, nonatomic) NSMutableArray *glesAnnotationViews; // @synthesize glesAnnotationViews=_glesAnnotationViews;
@property(retain, nonatomic) NSMutableSet *animatingAnnotationSet; // @synthesize animatingAnnotationSet=_animatingAnnotationSet;
@property(retain, nonatomic) NSMutableSet *animatedAnnotationSet; // @synthesize animatedAnnotationSet=_animatedAnnotationSet;
@property(retain, nonatomic) NSMutableSet *annotationSet; // @synthesize annotationSet=_annotationSet;
@property(readonly, nonatomic) MAAnnotationView *selectedAnnotationView; // @synthesize selectedAnnotationView=_selectedAnnotationView;
@property(readonly, nonatomic) id <MAAnnotation> selectedAnnotation; // @synthesize selectedAnnotation=_selectedAnnotation;
@property(nonatomic) __weak id <MAAnnotationContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDrawGLESAnnotations;
- (_Bool)isAnnotationAnimatable:(id)arg1;
- (void)step:(double)arg1;
- (unsigned long long)animatedAnnotationCount;
- (void)onAnnotationNeedsStartAnimation:(id)arg1;
- (void)MAAnnotationContainerViewDeallocOperation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)viewForAnnotation:(id)arg1;
- (void)sortAnnotationViewsWithView:(id)arg1;
- (void)removeAllAnnotationViews;
- (void)removeAnnotationView:(id)arg1;
- (void)addAnnotationView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverForAnnotation:(id)arg1;
- (void)addObserverForAnnotation:(id)arg1;
- (void)removeAllAnnotations;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (_Bool)containsAnnotation:(id)arg1;
- (void)updateAnnotationViewsCameraDegree;
- (void)updateAnnotationViewsCenter;
- (void)bringSelectedAnnotationViewToFront;
- (_Bool)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (_Bool)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (double)annotationViewRotateDegree;
- (id)getOverlayRendererDelegate;
- (double)annotationViewCalloutView:(id)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (_Bool)annotationViewCalloutViewShouldHighlight:(id)arg1;
- (void)annotationViewCalloutViewClicked:(id)arg1;
- (void)annotationView:(id)arg1 calloutAccessoryControlTapped:(id)arg2;
- (void)annotationView:(id)arg1 didChangeDragState:(long long)arg2 fromOldState:(long long)arg3;
- (struct CLLocationCoordinate2D)annotationViewConvertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)annotationViewPointForMapPoint:(struct MAMapPoint)arg1;
- (struct CGRect)annotationViewVisibleRect;
- (unsigned long long)countOfAnnotationViewArray;
- (unsigned long long)countOfAnnotationArray;
@property(readonly, nonatomic) NSArray *annotationArray;
@property(readonly, nonatomic) NSArray *annotationViewArray;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

