//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EaseConversationModel, EaseMessageModel, NSArray, NSError, NSMutableArray, NSString;

@protocol YMMIMClientProtocol <NSObject>
- (void)loadMessagesFromServerFrom:(NSString *)arg1 to:(NSString *)arg2 timestamp:(long long)arg3 withCallback:(void (^)(NSDictionary *))arg4;
- (void)resendMessage:(EaseMessageModel *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EaseMessageModel *, NSError *, NSDictionary *))arg3;
- (void)sendMessage:(EaseMessageModel *)arg1 progress:(void (^)(int))arg2 completion:(void (^)(EaseMessageModel *, NSError *, NSDictionary *))arg3;
- (void)downloadMessageAttachment:(EaseMessageModel *)arg1 responseId:(NSString *)arg2 progress:(void (^)(int))arg3 completion:(void (^)(id <IMessageModel>, NSError *))arg4;
- (void)downloadMessageThumbnail:(EaseMessageModel *)arg1 responseId:(NSString *)arg2 progress:(void (^)(int))arg3 completion:(void (^)(id <IMessageModel>, NSError *))arg4;
- (void)loadMessagesStartFromId:(NSString *)arg1 withConversation:(EaseConversationModel *)arg2 count:(int)arg3 withTime:(long long)arg4 searchDirection:(int)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)sendBatchMessageReadAck:(NSArray *)arg1;
- (void)sendMessageReadAck:(EaseMessageModel *)arg1 completion:(void (^)(EaseMessageModel *, NSError *))arg2;
- (void)updateMessage:(EaseMessageModel *)arg1 completion:(void (^)(EaseMessageModel *, NSError *))arg2;
- (void)importConversations:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)importMessagesToDB:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getBlackListFromServer:(void (^)(NSArray *, NSError *))arg1;
- (void)operateBlackList:(NSString *)arg1 status:(_Bool)arg2 complete:(void (^)(NSError *))arg3;
- (void)markAllMessagesAsReadWithConversation:(EaseConversationModel *)arg1 error:(void (^)(NSError *))arg2;
- (void)markMessageAsReadWithId:(NSString *)arg1 forConversation:(EaseConversationModel *)arg2 error:(void (^)(NSError *))arg3;
- (long long)getUnreadMessageCountByConversation:(NSString *)arg1;
- (NSMutableArray *)getAllConversations;
- (void)deleteMessageWithId:(NSString *)arg1 forConversation:(EaseConversationModel *)arg2 error:(void (^)(NSError *))arg3;
- (void)deleteMessagesByConversation:(NSString *)arg1 completeBlock:(void (^)(NSError *))arg2;
- (void)removeAllConversationAndMessages:(void (^)(NSError *))arg1;
- (void)removeConversation:(NSString *)arg1 isDeleteMessages:(_Bool)arg2 complete:(void (^)(NSError *))arg3;
- (EaseConversationModel *)getConversationById:(NSString *)arg1 andType:(int)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)isLoggedIn;
- (void)logoutChatAccount;
- (void)loginChatWithUserName:(NSString *)arg1 password:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (NSError *)startChatSDK;
- (void)configSinkDelegate:(id <YMMIMSinkProtocol>)arg1;
@end

