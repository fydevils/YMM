//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMLongConnectReadDataProtocol.h"
#import "YMMModuleProtocol.h"

@class NSString, UIWindow;

@interface YMMUserAuditLongConnectHandle : NSObject <YMMLongConnectReadDataProtocol, YMMModuleProtocol>
{
}

+ (_Bool)singleton;
+ (id)sharedYMMUserAuditLongConnectHandle;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (_Bool)ymmLongConnectResultDataHandle:(id)arg1 content:(id)arg2 userInfo:(id)arg3;
- (id)serviceName;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

