//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface HCBIdentificationPhotoSheet : UIView
{
    CDUnknownBlockType _takePhotoHandler;
    CDUnknownBlockType _albumHandler;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _removeHandler;
    UIView *_bgView;
    UIButton *_albumButton;
    UIView *_grayline2;
    UILabel *_lblTips;
    UIImageView *_imageView;
    NSLayoutConstraint *_imageWidthCons;
    NSLayoutConstraint *_imageHeightCons;
    NSLayoutConstraint *_bottomViewHeightConst;
    NSLayoutConstraint *_albumButtonHeightConst;
    NSLayoutConstraint *_grayline2HeightConst;
}

+ (void)showAlertInfo;
+ (_Bool)checkCameraIsVisible;
+ (id)createFromNib;
@property(nonatomic) __weak NSLayoutConstraint *grayline2HeightConst; // @synthesize grayline2HeightConst=_grayline2HeightConst;
@property(nonatomic) __weak NSLayoutConstraint *albumButtonHeightConst; // @synthesize albumButtonHeightConst=_albumButtonHeightConst;
@property(nonatomic) __weak NSLayoutConstraint *bottomViewHeightConst; // @synthesize bottomViewHeightConst=_bottomViewHeightConst;
@property(nonatomic) __weak NSLayoutConstraint *imageHeightCons; // @synthesize imageHeightCons=_imageHeightCons;
@property(nonatomic) __weak NSLayoutConstraint *imageWidthCons; // @synthesize imageWidthCons=_imageWidthCons;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *lblTips; // @synthesize lblTips=_lblTips;
@property(nonatomic) __weak UIView *grayline2; // @synthesize grayline2=_grayline2;
@property(nonatomic) __weak UIButton *albumButton; // @synthesize albumButton=_albumButton;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType removeHandler; // @synthesize removeHandler=_removeHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType albumHandler; // @synthesize albumHandler=_albumHandler;
@property(copy, nonatomic) CDUnknownBlockType takePhotoHandler; // @synthesize takePhotoHandler=_takePhotoHandler;
- (void).cxx_destruct;
- (void)updateTextWithType:(unsigned long long)arg1;
- (void)setupImageWithType:(unsigned long long)arg1;
- (void)cancelTUI:(id)arg1;
- (void)albumTUI:(id)arg1;
- (void)takephotoTUI:(id)arg1;
- (void)show;
- (void)updateWithType:(unsigned long long)arg1 pic:(id)arg2 description:(id)arg3 takePhotoHandler:(CDUnknownBlockType)arg4 cancelHandler:(CDUnknownBlockType)arg5;
- (void)updateWithType:(unsigned long long)arg1 pic:(id)arg2 description:(id)arg3 takePhotoHandler:(CDUnknownBlockType)arg4 albumHandler:(CDUnknownBlockType)arg5 cancelHandler:(CDUnknownBlockType)arg6;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

