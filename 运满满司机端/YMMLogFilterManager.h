//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YMMScreenshotService, YMMSystemLogServer;

@interface YMMLogFilterManager : NSObject
{
    YMMSystemLogServer *_systemLogServer;
    YMMScreenshotService *_screenShotService;
}

+ (id)sharedFilterManager;
@property(retain, nonatomic) YMMScreenshotService *screenShotService; // @synthesize screenShotService=_screenShotService;
@property(retain, nonatomic) YMMSystemLogServer *systemLogServer; // @synthesize systemLogServer=_systemLogServer;
- (void).cxx_destruct;
- (id)nslogServerURL;
- (_Bool)validationByRegex:(id)arg1 inTarget:(id)arg2;
- (void)startScreenShotService;
- (void)startLogServer;
- (void)startAutoLog;
- (void)dealloc;

@end

