//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (VFSDKAipCameraAddition)
+ (id)vf_sapicamera_rotateImageEx:(struct CGImage *)arg1 orientation:(long long)arg2;
+ (id)vf_sapicamera_rotateImageEx:(struct CGImage *)arg1 byDeviceOrientation:(long long)arg2;
+ (id)vf_sapicamera_imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)vf_sapicamera_fixOrientation;
@end

