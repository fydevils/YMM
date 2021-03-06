//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBSecurityConfig, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface HCBSecurityService : NSObject
{
    HCBSecurityConfig *_currentConfig;
    CDUnknownBlockType _dataCompressHandler;
    CDUnknownBlockType _dataEncryptionHandler;
    NSMutableArray *_configArr;
    NSObject<OS_dispatch_queue> *_configQueue;
}

+ (id)configWithKeyID:(long long)arg1;
+ (id)dataWithValue:(long long)arg1;
+ (id)decryptData:(id)arg1 withKeyID:(id)arg2;
+ (id)encryptData:(id)arg1;
+ (id)decryptData:(id)arg1 withToken:(id)arg2 withKeyID:(id)arg3;
+ (id)encryptData:(id)arg1 withSID:(long long)arg2 withToken:(id)arg3;
+ (void)setupWithLocalConfig:(id)arg1 dataEncryptionHandler:(CDUnknownBlockType)arg2 dataCompressHandler:(CDUnknownBlockType)arg3;
+ (id)getCurrentNoSessionToken;
+ (id)doDecryptWithText:(id)arg1 withKey:(id)arg2;
+ (id)doDecryptWithData:(id)arg1 withKey:(id)arg2;
+ (id)doEncryptWithText:(id)arg1 withKey:(id)arg2;
+ (id)doEncryptWithData:(id)arg1 withKey:(id)arg2;
+ (int)recordSecurityServiceErrorCount;
+ (void)recordSecurityServiceError;
+ (id)fileNameForLocalConfigWithProductType:(unsigned long long)arg1;
+ (id)filePathForLocalConfigFromBundleWithProductType:(unsigned long long)arg1;
+ (id)filePathForLocalConfigFromDocumentDirectoryWithProductType:(unsigned long long)arg1;
+ (id)localConfigFromFilePath:(id)arg1;
+ (id)localConfigFromBundleWithProductType:(unsigned long long)arg1;
+ (id)localConfigFromDocumentDirectoryWithProductType:(unsigned long long)arg1;
+ (id)localConfigWithProductType:(unsigned long long)arg1;
+ (id)localConfigWithProductType:(unsigned long long)arg1 ignoreDocumentConfig:(_Bool)arg2;
+ (_Bool)saveConfigToLocal:(id)arg1;
+ (id)pureString:(id)arg1;
+ (id)jsonFromDic:(id)arg1;
+ (id)dicFromJson:(id)arg1;
+ (_Bool)checkEncryptKey:(id)arg1 decryptKey:(id)arg2 keyID:(long long)arg3 withToken:(id)arg4;
+ (CDUnknownBlockType)handleUpdatedConfigResult;
+ (CDUnknownBlockType)handleDataCompress;
+ (CDUnknownBlockType)handleDataEncryption;
+ (id)stringFromNetworkServerEnv:(unsigned long long)arg1;
+ (void)setupWithProductType:(unsigned long long)arg1 networkServerEnv:(unsigned long long)arg2 updateConfigRequestBlock:(CDUnknownBlockType)arg3;
+ (void)setupWithProductType:(unsigned long long)arg1 updateConfigRequestBlock:(CDUnknownBlockType)arg2;
+ (id)sharedService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *configQueue; // @synthesize configQueue=_configQueue;
@property(retain, nonatomic) NSMutableArray *configArr; // @synthesize configArr=_configArr;
@property(copy, nonatomic) CDUnknownBlockType dataEncryptionHandler; // @synthesize dataEncryptionHandler=_dataEncryptionHandler;
@property(copy, nonatomic) CDUnknownBlockType dataCompressHandler; // @synthesize dataCompressHandler=_dataCompressHandler;
- (void).cxx_destruct;
@property(retain, nonatomic) HCBSecurityConfig *currentConfig; // @synthesize currentConfig=_currentConfig;
- (id)init;

@end

