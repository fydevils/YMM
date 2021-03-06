//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface XSInfoViewStyle : NSObject
{
    UIColor *_backgroundColor;
    UIImage *_image;
    NSString *_info;
    double _fontSize;
    UIColor *_textColor;
    double _maxLabelWidth;
    long long _durationSeconds;
    long long _layoutStyle;
    struct CGSize _imageSize;
}

@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) long long durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(nonatomic) double maxLabelWidth; // @synthesize maxLabelWidth=_maxLabelWidth;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)init;

@end

