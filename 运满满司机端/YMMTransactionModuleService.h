//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMTransactionServiceProtocol.h"

@class NSString;

@interface YMMTransactionModuleService : NSObject <YMMTransactionServiceProtocol>
{
}

+ (_Bool)singleton;
- (void)bargainUnreadMessagesCount:(CDUnknownBlockType)arg1;
- (void)transRequestUserWaittingConfirmProtocol;
- (void)goToPayCenter:(id)arg1 orderAmount:(id)arg2 tradeType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

