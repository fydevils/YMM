//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WLJsApiManager;

@interface WLJsApiClass : NSObject
{
    WLJsApiManager *_apiManager;
    NSMutableArray *_apiMArr;
}

@property(retain, nonatomic) NSMutableArray *apiMArr; // @synthesize apiMArr=_apiMArr;
@property(nonatomic) __weak WLJsApiManager *apiManager; // @synthesize apiManager=_apiManager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)objcMethodNameToJS:(SEL)arg1;
- (_Bool)validApi:(id)arg1 jsonStr:(id)arg2;
- (_Bool)validApi:(id)arg1;
- (void)registerApi;

@end

