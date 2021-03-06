//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImage;

@interface HCBLoanUploadPhotoViewController : HCBLoanBaseViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate>
{
    NSArray *_identityCardInfo;
    UIButton *_selectFrontButton;
    UIButton *_selectBackButton;
    UIButton *_submitButton;
    UIButton *_sender;
    UIImage *_frontImage;
    UIImage *_backImage;
    NSMutableArray *_imageUploadInfos;
}

@property(retain, nonatomic) NSMutableArray *imageUploadInfos; // @synthesize imageUploadInfos=_imageUploadInfos;
@property(retain, nonatomic) UIImage *backImage; // @synthesize backImage=_backImage;
@property(retain, nonatomic) UIImage *frontImage; // @synthesize frontImage=_frontImage;
@property(nonatomic) __weak UIButton *sender; // @synthesize sender=_sender;
@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) __weak UIButton *selectBackButton; // @synthesize selectBackButton=_selectBackButton;
@property(nonatomic) __weak UIButton *selectFrontButton; // @synthesize selectFrontButton=_selectFrontButton;
@property(retain, nonatomic) NSArray *identityCardInfo; // @synthesize identityCardInfo=_identityCardInfo;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)showNextWithContent:(id)arg1;
- (void)finishUploading;
- (void)uploadImage:(id)arg1 type:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)uploadImages;
- (id)compressImage:(id)arg1;
- (void)pickPhotoIn:(long long)arg1;
- (void)selectPhoto:(id)arg1;
- (void)submit:(id)arg1;
- (void)selectBackPhoto:(id)arg1;
- (void)selectFrontPhoto:(id)arg1;
- (void)loadImageWithURL:(id)arg1 type:(unsigned long long)arg2;
- (void)loadImages;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

