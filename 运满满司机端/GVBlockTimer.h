//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface GVBlockTimer : NSObject
{
    NSObject<OS_dispatch_source> *timer;
    CDUnknownBlockType _block;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 userInfo:(id)arg2 repeats:(_Bool)arg3 queue:(id)arg4 block:(CDUnknownBlockType)arg5;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
- (void).cxx_destruct;
- (void)invalidate;
- (void)addTimer:(double)arg1 target:(id)arg2 selector:(SEL)arg3 queue:(id)arg4 block:(CDUnknownBlockType)arg5 userInfo:(id)arg6 repeats:(_Bool)arg7;

@end

