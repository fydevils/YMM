//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BargainGroupResponseHandler, NSString, YMMBargainGroupSendMsgTask;

@interface BargainGroupRequestTask : NSObject
{
    NSString *_taskIdentifier;
    YMMBargainGroupSendMsgTask *_task;
    BargainGroupResponseHandler *_responseHandler;
}

@property(retain, nonatomic) BargainGroupResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) YMMBargainGroupSendMsgTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 task:(id)arg2 response:(id)arg3;

@end

