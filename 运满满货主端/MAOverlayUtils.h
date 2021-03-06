//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MAOverlayUtils : NSObject
{
}

+ (void)drawWithAction:(id)arg1 reduceFilter:(CDUnknownBlockType)arg2 clipFilter:(CDUnknownBlockType)arg3 triangulatFilter:(CDUnknownBlockType)arg4 drawFilter:(CDUnknownBlockType)arg5;
+ (void)glesDrawTexturePolygonWith:(struct MAMapPoint *)arg1 pointCount:(unsigned long long)arg2 textureCoords:(struct CGPoint *)arg3 textureId:(unsigned int)arg4 modulateColor:(id)arg5 alpha:(float)arg6 shader:(id)arg7 viewMatrix:(float *)arg8 projectionMatrix:(float *)arg9;
+ (void)glesDrawNormalColorOrTextureLineWith:(vector_0ca85528 *)arg1 glesResProvider:(id)arg2 lineWidth:(float)arg3 strokeTextureId:(unsigned int)arg4 strokeColor:(id)arg5 lineDashType:(unsigned long long)arg6 alpha:(float)arg7 viewMatrix:(float *)arg8 projectionMatrix:(float *)arg9;
+ (void)glesDrawGradientColorLineWith:(vector_3729920e *)arg1 textureId:(unsigned int)arg2 alpha:(float)arg3 shader:(id)arg4 viewMatrix:(float *)arg5 projectionMatrix:(float *)arg6;
+ (void)glesDrawTextureLineWith:(vector_0ca85528 *)arg1 textureArrArr:(id)arg2 alpha:(float)arg3 shader:(id)arg4 viewMatrix:(float *)arg5 projectionMatrix:(float *)arg6;
+ (void)glesDrawNormalColorLineWith:(vector_0ca85528 *)arg1 textureId:(unsigned int)arg2 colorArrArr:(id)arg3 alpha:(float)arg4 shader:(id)arg5 viewMatrix:(float *)arg6 projectionMatrix:(float *)arg7;
+ (void)normalizeDrawStyleArr:(id)arg1 andDrawStyleIndexArr:(id)arg2 resultDrawStyleArr:(id *)arg3 resultDrawStyleIndexArr:(id *)arg4 isGradient:(_Bool)arg5;
+ (void)calcIndexArrsWithOrigDrawStyleArr:(id)arg1 resultDrawStyleIndexArr:(id *)arg2 indexArrAfterReduce:(id)arg3 mergedIndexArr:(id *)arg4;
+ (const Drawable_98991264 *)gradientPolyLineTriangulate:(vector_f60ea51c *)arg1 lineWidth:(float)arg2 drawStyleIndexArr:(id)arg3 colorArr:(id)arg4 overlayAlpha:(float)arg5 looped:(_Bool)arg6 lineDashType:(unsigned long long)arg7 joinType:(int)arg8 capType:(int)arg9 lineBuilder:(MALineBuilder_3b276b09 *)arg10;
+ (const Drawable_97df83bd *)normalPolyLineTriangulate:(vector_f60ea51c *)arg1 lineWidth:(float)arg2 strip:(_Bool)arg3 drawStyleIndexArr:(id)arg4 drawStyleCount:(int)arg5 looped:(_Bool)arg6 lineDashType:(unsigned long long)arg7 joinType:(int)arg8 capType:(int)arg9 lineBuilder:(MALineBuilder_6dabcb35 *)arg10;
+ (const vector_195fe69b *)polygonTriangulate:(vector_f60ea51c *)arg1 triangulator:(struct MAPolygonTriangulator *)arg2;
+ (_Bool)clipPointsForPolyline:(vector_f60ea51c *)arg1 clipWindow:(struct MAMapRect)arg2 resultPoints:(vector_aac46ba0 *)arg3;
+ (_Bool)clipPointsForPolygon:(vector_f60ea51c *)arg1 clipWindow:(struct MAMapRect)arg2 resultPoints:(vector_aac46ba0 *)arg3 clipper:(struct MAPolygonClipper *)arg4;
+ (_Bool)isThinLine:(float)arg1;

@end

