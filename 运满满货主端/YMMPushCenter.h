//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMPushServiceProtocol.h"

@class NSDictionary, NSString, NSTimer, YMMPushHandler;

@interface YMMPushCenter : NSObject <YMMPushServiceProtocol>
{
    long long _retryCount;
    NSTimer *_retryTimer;
    _Bool _isRegistering;
    NSString *_deviceToken;
    YMMPushHandler *_pushHandler;
    NSDictionary *_userInfo;
    id <YMMUserServiceProtocol> _userService;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)logPushState;
- (void)onLoginSuccess;
- (void)stopRetryTimer;
- (void)clearPushInfo;
- (void)savePushInfo;
- (void)onRegisterDeviceFailure;
- (void)onRegisterDeviceSuccess;
- (void)resetCondition;
- (void)retryRegisterDevice;
- (_Bool)needRegisterToken;
- (void)registerNotifications;
- (_Bool)isAllowedNotification;
@property(readonly, nonatomic) id <YMMUserServiceProtocol> userService; // @dynamic userService;
- (void)resetNewNotificationCountWithType:(unsigned long long)arg1;
- (long long)getNewNotificationCountWithType:(unsigned long long)arg1;
- (void)stopWithType:(unsigned long long)arg1;
- (void)startWithType:(unsigned long long)arg1;
- (void)resumeHandle;
- (void)pauseHandle;
- (void)removeAll;
- (void)removeAllWithNotificationType:(unsigned long long)arg1;
- (void)handleUserInfoWithDelay;
- (void)registerDeviceToken;
- (void)handleLongConnectInfo:(id)arg1 optType:(id)arg2;
- (void)handlePushInfo:(id)arg1 forApplicationState:(long long)arg2;
- (void)registerDevice;
- (void)updateDeviceToken:(id)arg1;
- (void)setupWithUserInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

