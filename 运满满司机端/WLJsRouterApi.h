//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WLJsBridgeApi.h"

@class NSString;

@interface WLJsRouterApi : WLJsBridgeApi
{
    _Bool _closeWindow;
    _Bool _hasCalledRouteResult;
    _Bool _hasCalledCallback;
    NSString *_uri;
    NSString *_routeResult;
    NSString *_callback;
}

+ (id)parseToApi:(id)arg1;
@property(nonatomic) _Bool hasCalledCallback; // @synthesize hasCalledCallback=_hasCalledCallback;
@property(nonatomic) _Bool hasCalledRouteResult; // @synthesize hasCalledRouteResult=_hasCalledRouteResult;
@property(copy, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *routeResult; // @synthesize routeResult=_routeResult;
@property(nonatomic) _Bool closeWindow; // @synthesize closeWindow=_closeWindow;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;

@end

