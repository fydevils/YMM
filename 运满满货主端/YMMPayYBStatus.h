//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebAPI.h"

@class NSString, UIView;

@interface YMMPayYBStatus : NSObject <WebAPI>
{
    UIView *_webView;
}

@property(retain, nonatomic) UIView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)call:(id)arg1 from:(id)arg2;
- (long long)version;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

