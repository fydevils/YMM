//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YMMChatMessageCell;

@protocol EaseMessageCellDelegate <NSObject>

@optional
- (void)downloadCellMessageAttachment:(id <IMessageModel>)arg1 progress:(void (^)(int))arg2 completion:(void (^)(id <IMessageModel>, NSError *))arg3;
- (void)downloadCellMessageThumbnail:(id <IMessageModel>)arg1 progress:(void (^)(int))arg2 completion:(void (^)(id <IMessageModel>, NSError *))arg3;
- (void)requestCellCardGrayStatusWithModel:(id <IMessageModel>)arg1 completion:(void (^)(long long, _Bool, NSError *))arg2;
- (void)cardMessageButtonSelected:(NSString *)arg1 withTitle:(NSString *)arg2 withModel:(id <IMessageModel>)arg3;
- (void)orderMessageResendSelected:(id <IMessageModel>)arg1;
- (void)avatarViewSelcted:(id <IMessageModel>)arg1;
- (void)statusButtonSelcted:(id <IMessageModel>)arg1 withMessageCell:(YMMChatMessageCell *)arg2;
- (void)messageCellSelected:(id <IMessageModel>)arg1 withCell:(YMMChatMessageCell *)arg2;
- (void)messageCellActionBtnDidClickWithModel:(id <IMessageModel>)arg1 actionType:(unsigned long long)arg2;
@end

