//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BargainUserInfoModel, NSString, UIViewController, YMMBargainChatManager, YMMIMUserInfoModel;

@interface YMMBargainChatCenter : NSObject
{
    unsigned int _sound;
    _Bool _isSoundPlaying;
    YMMBargainChatManager *_chatManager;
    BargainUserInfoModel *_toUserInfo;
    YMMIMUserInfoModel *_userInfo;
    UIViewController *_referCtrl;
    NSString *_loginUserId;
}

+ (id)defaultCenter;
@property(copy, nonatomic) NSString *loginUserId; // @synthesize loginUserId=_loginUserId;
@property(nonatomic) __weak UIViewController *referCtrl; // @synthesize referCtrl=_referCtrl;
@property(retain, nonatomic) YMMIMUserInfoModel *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) BargainUserInfoModel *toUserInfo; // @synthesize toUserInfo=_toUserInfo;
@property(nonatomic) _Bool isSoundPlaying; // @synthesize isSoundPlaying=_isSoundPlaying;
@property(retain, nonatomic) YMMBargainChatManager *chatManager; // @synthesize chatManager=_chatManager;
- (void).cxx_destruct;
- (void)sendGroupVoiceWithLocalPath:(id)arg1 voiceContent:(id)arg2 duration:(long long)arg3 toUIds:(id)arg4 cargoId:(id)arg5 result:(CDUnknownBlockType)arg6;
- (void)sendGroupVoiceMessageWithLocalPath:(id)arg1 voiceContent:(id)arg2 duration:(long long)arg3 toUIds:(id)arg4 cargoId:(id)arg5 result:(CDUnknownBlockType)arg6;
- (void)sendVoiceWithLocalPath:(id)arg1 voiceContent:(id)arg2 duration:(long long)arg3 toImUser:(id)arg4 toYmmUserId:(id)arg5 cargoId:(id)arg6 result:(CDUnknownBlockType)arg7;
- (void)sendVoiceMessageWithLocalPath:(id)arg1 voiceContent:(id)arg2 duration:(long long)arg3 toImUser:(id)arg4 toYmmUserId:(id)arg5 cargoId:(id)arg6 result:(CDUnknownBlockType)arg7;
- (void)unreadMessagesCount:(CDUnknownBlockType)arg1;
- (void)_userLoginOut;
- (void)_userYMMLoginSuccess;
- (id)_convertDicType:(id)arg1;
- (_Bool)haveIMRight;
- (_Bool)isPlayingNotificationAlert;
- (void)stopPlaySound;
- (void)configOwnInfo;
- (void)addSelfToIMSeedUserCallback:(CDUnknownBlockType)arg1;
- (void)getSelfIMInfoNeedAutoLogin:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (id)loginUserYmmUserId;
- (void)logoutChatAccount;
- (void)loginChatCompletion:(CDUnknownBlockType)arg1;
- (void)openControllerWithChatter:(id)arg1 cargoId:(id)arg2 viewController:(id)arg3;
- (void)innerOpenControllerWithChatter:(id)arg1 cargoId:(id)arg2 viewController:(id)arg3;
- (void)configControllerWithUserId:(id)arg1 cargoId:(id)arg2 viewController:(id)arg3;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)initChatConfigure;
- (void)dealloc;
- (id)init;

@end

