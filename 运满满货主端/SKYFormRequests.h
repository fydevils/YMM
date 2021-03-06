//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSData, NSDictionary, NSMutableDictionary, NSMutableURLRequest, NSOperationQueue, NSString, NSURL;

@interface SKYFormRequests : NSObject <NSURLConnectionDelegate>
{
    NSString *strUrl;
    double reqTimeOut;
    NSMutableDictionary *reqParams;
    NSOperationQueue *queue;
    NSMutableURLRequest *request;
    NSURL *mUrl;
    NSData *postData;
    NSString *postStr;
    NSString *srcFilePath;
    NSDictionary *params;
    id <SKYFormRequestDelegate> requestDelegate;
}

@property(retain, nonatomic) id <SKYFormRequestDelegate> requestDelegate; // @synthesize requestDelegate;
- (void).cxx_destruct;
- (id)getContentType:(id)arg1;
- (void)httpCancelOperation;
- (void)httpPostUploadAsyn;
- (id)getHttpParamStr;
- (void)httpPostAsyn;
- (void)sytHttpPostAsyn;
- (id)paramValueForKey:(id)arg1;
- (void)addParam:(id)arg1 value:(id)arg2;
- (id)init:(id)arg1 srcFilePath:(id)arg2 params:(id)arg3 timeOut:(double)arg4;
- (id)init:(id)arg1 timeOut:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

