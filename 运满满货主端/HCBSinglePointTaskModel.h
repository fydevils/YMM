//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HCBSinglePointTaskModel : NSObject
{
    _Bool _available;
    NSString *_status;
    NSString *_taskProgressUnit;
    NSString *_updateTime;
    NSString *_openTime;
    NSString *_closeTime;
    NSString *_taskCode;
    unsigned long long _taskPoint;
    NSString *_rewardType;
    NSArray *_rewards;
    unsigned long long _progressCompleted;
    NSString *_rewardMethod;
    NSString *_rewardStatus;
    unsigned long long _rewardAmount;
    NSString *_taskName;
    NSString *_rewardMessage;
    unsigned long long _progressTarget;
    long long _taskID;
}

+ (id)dicToModel:(id)arg1;
@property(nonatomic) long long taskID; // @synthesize taskID=_taskID;
@property(nonatomic) unsigned long long progressTarget; // @synthesize progressTarget=_progressTarget;
@property(copy, nonatomic) NSString *rewardMessage; // @synthesize rewardMessage=_rewardMessage;
@property(copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
@property(nonatomic) unsigned long long rewardAmount; // @synthesize rewardAmount=_rewardAmount;
@property(copy, nonatomic) NSString *rewardStatus; // @synthesize rewardStatus=_rewardStatus;
@property(copy, nonatomic) NSString *rewardMethod; // @synthesize rewardMethod=_rewardMethod;
@property(nonatomic) unsigned long long progressCompleted; // @synthesize progressCompleted=_progressCompleted;
@property(copy, nonatomic) NSArray *rewards; // @synthesize rewards=_rewards;
@property(copy, nonatomic) NSString *rewardType; // @synthesize rewardType=_rewardType;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(nonatomic) unsigned long long taskPoint; // @synthesize taskPoint=_taskPoint;
@property(copy, nonatomic) NSString *taskCode; // @synthesize taskCode=_taskCode;
@property(copy, nonatomic) NSString *closeTime; // @synthesize closeTime=_closeTime;
@property(copy, nonatomic) NSString *openTime; // @synthesize openTime=_openTime;
@property(copy, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(copy, nonatomic) NSString *taskProgressUnit; // @synthesize taskProgressUnit=_taskProgressUnit;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

