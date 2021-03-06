//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface YMMPushQueue : NSObject
{
    NSMutableArray *_queue;
    unsigned long long _limitCount;
    NSMutableArray *_reverseListForType;
}

- (void).cxx_destruct;
- (void)clear;
- (void)removeAllWithNotificationType:(unsigned long long)arg1;
- (void)setReverseForNotificationType:(unsigned long long)arg1;
- (void)resize;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)back;
- (id)front;
@property(readonly, nonatomic, getter=isEmpty) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long size;
- (id)init;
- (id)initWithLimitCount:(unsigned long long)arg1;

@end

