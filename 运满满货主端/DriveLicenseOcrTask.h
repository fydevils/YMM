//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface DriveLicenseOcrTask : YMMCommonNetworkTask
{
    NSString *_identityNo;
    NSString *_licensePicture;
}

@property(copy, nonatomic) NSString *licensePicture; // @synthesize licensePicture=_licensePicture;
@property(copy, nonatomic) NSString *identityNo; // @synthesize identityNo=_identityNo;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

