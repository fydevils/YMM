//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "WLJsApiManagerDelegate.h"

@class NSMutableArray, NSString, UIImage, UIImagePickerController, UIView<HCBWebViewProtocol><HCBWebViewProtocol_Refresh><HCBWebViewSDK_OverrideWLJSProtocol_WebView>, WLJsFilePhotoApi;

@interface HCBWLJSDelegate_Base : NSObject <UIActionSheetDelegate, UIImagePickerControllerDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, WLJsApiManagerDelegate>
{
    UIView<HCBWebViewProtocol><HCBWebViewProtocol_Refresh><HCBWebViewSDK_OverrideWLJSProtocol_WebView> *_webView;
    NSMutableArray *_autoLoginDoneBlocks;
    UIImagePickerController *_imgPicker;
    UIImage *_selectedImg;
    WLJsFilePhotoApi *_uploadImageApi;
    CDUnknownBlockType _uploadPhotoDoneBlock;
}

+ (_Bool)wlfileSaveDataToDocument:(id)arg1 forKey:(id)arg2;
+ (id)wlfileSaveDataFilePath;
+ (id)wlfileSavedData;
@property(copy, nonatomic) CDUnknownBlockType uploadPhotoDoneBlock; // @synthesize uploadPhotoDoneBlock=_uploadPhotoDoneBlock;
@property(retain, nonatomic) WLJsFilePhotoApi *uploadImageApi; // @synthesize uploadImageApi=_uploadImageApi;
@property(retain, nonatomic) UIImage *selectedImg; // @synthesize selectedImg=_selectedImg;
@property(retain, nonatomic) UIImagePickerController *imgPicker; // @synthesize imgPicker=_imgPicker;
@property(retain, nonatomic) NSMutableArray *autoLoginDoneBlocks; // @synthesize autoLoginDoneBlocks=_autoLoginDoneBlocks;
@property(nonatomic) __weak UIView<HCBWebViewProtocol><HCBWebViewProtocol_Refresh><HCBWebViewSDK_OverrideWLJSProtocol_WebView> *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)wlJsApiManager:(id)arg1 sendRequestWithApiInfo:(id)arg2 sendedBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (id)subString:(id)arg1 withRegex:(id)arg2;
- (void)wlJsApiManager:(id)arg1 selectRegionWithName:(id)arg2 level:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)wlJsApiManager:(id)arg1 selectRegionWithID:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (_Bool)wlJsApiManager:(id)arg1 webPageReportAdvertEvent:(id)arg2 type:(id)arg3;
- (_Bool)wlJsApiManager:(id)arg1 webPageStartWithPageName:(id)arg2 values:(id)arg3;
- (void)wlJsApiManagerStartRefresh:(id)arg1;
- (void)wlJsApiManagerRefreshDone:(id)arg1;
- (void)wlJsApiManager:(id)arg1 enableRefresh:(_Bool)arg2 refreshingStartBlock:(CDUnknownBlockType)arg3;
- (void)wlJSApiManager:(id)arg1 checkUserLocationAuthority:(unsigned long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)wlJsApiManager:(id)arg1 getUserLocationWithCompleteBlock:(CDUnknownBlockType)arg2;
- (void)wlJsApiManager:(id)arg1 recognizeQRCodeWithImageURL:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)wlJsApiManager:(id)arg1 uploadPhotoWithInfo:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)wlJsApiManager:(id)arg1 saveData:(id)arg2 forKey:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)wlJsApiManager:(id)arg1 handleFile:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)wlJsApiManager:(id)arg1 trackWebActionWithUrl:(id)arg2 userAgent:(id)arg3 durationTime:(id)arg4;
- (void)wlJsApiManager:(id)arg1 trackWebActionWithUrl:(id)arg2 userAgent:(id)arg3 label:(id)arg4 values:(id)arg5;
- (void)wlJsApiManager:(id)arg1 openAppWithUrl:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)wlJsApiManager:(id)arg1 routerWithUrl:(id)arg2 closeWebWindowBeforeRoute:(_Bool)arg3 routeResultBlock:(CDUnknownBlockType)arg4 contentResultBlcok:(CDUnknownBlockType)arg5;
- (void)wlJsApiManager:(id)arg1 shareWithInfo:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)wlJsApiManager:(id)arg1 shareStartWithConfig:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)wlJsApiManager:(id)arg1 setRightBtnWithBtnInfos:(id)arg2 btnPressedBlock:(CDUnknownBlockType)arg3;
- (void)wlJsApiManager:(id)arg1 setWindowTitle:(id)arg2;
- (void)wlJsApiManagerNavigationGoBack:(id)arg1;
- (void)wlJsApiManager:(id)arg1 closeWindowWithContent:(id)arg2;
- (void)wlJsApiManagerNavigationCloseWindow:(id)arg1;
- (void)wlJsApiManager:(id)arg1 autoLoginWithCompleteBlock:(CDUnknownBlockType)arg2;
- (void)kHCB_UserDidLogoutedNotify:(id)arg1;
- (void)kHCB_UserDidAutoLoginedNotify:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)compressImage:(id)arg1 withMaxLength:(long long)arg2;
- (id)normalizedImage:(id)arg1;
- (void)uploadImage:(id)arg1;
- (_Bool)checkCamera;
- (void)dismissIamgePicker;
- (void)takePhoto;
- (void)localPhoto;
- (void)didSaveImageToPhotosAlbumImage:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (_Bool)checkPHPhotoLibraryAuthorization;
- (void)webViewHeaderEndRefreshing;
- (void)webViewHeaderBeginRefreshing;
- (void)disableWebViewRefreshHeader;
- (void)setupWebViewRefreshHeaderWithRefreshingBlock:(CDUnknownBlockType)arg1;
- (void)fetchAGPSStatusWithTimeOut:(double)arg1 onCompleteBlock:(CDUnknownBlockType)arg2 onFailedBlock:(CDUnknownBlockType)arg3;
- (id)regionFromHCBRegion:(id)arg1;
- (id)regionArrayFromHCBRegionArray:(id)arg1;
- (id)getAllCountryRegionInfo;
- (id)viewControllerForView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

