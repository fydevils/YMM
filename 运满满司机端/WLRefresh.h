//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WLJsApiClass.h"

#import "WLRefreshJSExport.h"

@class WLRefreshConfigApi;

@interface WLRefresh : WLJsApiClass <WLRefreshJSExport>
{
    WLRefreshConfigApi *_configApi;
}

@property(retain, nonatomic) WLRefreshConfigApi *configApi; // @synthesize configApi=_configApi;
- (void).cxx_destruct;
- (void)startRefresh:(id)arg1;
- (void)refreshDone:(id)arg1;
- (void)config:(id)arg1;
- (void)registerApi;

@end

