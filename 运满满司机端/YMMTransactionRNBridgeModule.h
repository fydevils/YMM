//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "YMMImagePickerManagerDelegate.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, RCTBridge, UIViewController;

@interface YMMTransactionRNBridgeModule : NSObject <YMMImagePickerManagerDelegate, RCTBridgeModule>
{
    NSDictionary *_uploadReceitDic;
    UIViewController *_saveOrderDetailViewController;
}

+ (const struct RCTMethodInfo *)__rct_export__rn_ios_uploadReceiptImagePicker310;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) __weak UIViewController *saveOrderDetailViewController; // @synthesize saveOrderDetailViewController=_saveOrderDetailViewController;
@property(retain, nonatomic) NSDictionary *uploadReceitDic; // @synthesize uploadReceitDic=_uploadReceitDic;
- (void).cxx_destruct;
- (void)ymm_imagePickerManagerDidSelectItem:(id)arg1 dataStringArray:(id)arg2;
- (void)showImagePickerWithParam:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

