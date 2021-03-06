//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIColor;

@interface MAOverlayCommonDrawInput : NSObject
{
    float _reduceThreshHold;
    float _alpha;
    unsigned int _strokeTextureId;
    struct CGPoint *_points;
    unsigned long long _pointCount;
    NSArray *_drawStyleIndexArr;
    UIColor *_strokeColor;
}

@property(nonatomic) unsigned int strokeTextureId; // @synthesize strokeTextureId=_strokeTextureId;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) float reduceThreshHold; // @synthesize reduceThreshHold=_reduceThreshHold;
@property(retain, nonatomic) NSArray *drawStyleIndexArr; // @synthesize drawStyleIndexArr=_drawStyleIndexArr;
@property(nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property(nonatomic) struct CGPoint *points; // @synthesize points=_points;
- (void).cxx_destruct;
- (id)init;

@end

