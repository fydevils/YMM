//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, UIButton, UITableView;

@interface HCBCreditUploadPapersViewController : HCBETCBaseViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    NSString *_creditApplicantId;
    long long _uploadType;
    UIButton *_nextBtn;
    UITableView *_tableView;
    NSArray *_dataSource;
    NSMutableDictionary *_imageDic;
    NSIndexPath *_selectedIndexPath;
    long long _uploadIndex;
    long long _tryTimes;
    NSMutableDictionary *_distinguishDic;
    long long _mid;
    long long _addTime;
    NSMutableDictionary *_coverImgDic;
}

@property(retain, nonatomic) NSMutableDictionary *coverImgDic; // @synthesize coverImgDic=_coverImgDic;
@property(nonatomic) long long addTime; // @synthesize addTime=_addTime;
@property(nonatomic) long long mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSMutableDictionary *distinguishDic; // @synthesize distinguishDic=_distinguishDic;
@property(nonatomic) long long tryTimes; // @synthesize tryTimes=_tryTimes;
@property(nonatomic) long long uploadIndex; // @synthesize uploadIndex=_uploadIndex;
@property(nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSMutableDictionary *imageDic; // @synthesize imageDic=_imageDic;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(nonatomic) long long uploadType; // @synthesize uploadType=_uploadType;
@property(retain, nonatomic) NSString *creditApplicantId; // @synthesize creditApplicantId=_creditApplicantId;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)pickerVCBottomTitleWithTitle:(id)arg1;
- (void)album;
- (void)takePhoto;
- (void)showActionSheet;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)filterDistinguishDic;
- (void)savestoreImageIds:(id)arg1 coverImg:(id)arg2;
- (void)uploadImage:(id)arg1 withTitle:(id)arg2;
- (void)uploadSupplementImage;
- (void)uploadDriverCertificate;
- (void)uploadIdentifier;
- (void)uploadImage;
- (void)jumpAfterUpload;
- (void)clickNextBtn;
- (void)initView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

