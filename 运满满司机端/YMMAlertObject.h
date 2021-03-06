//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YMMAlertPopMaskConfig, YMMAlertPopViewConfig;

@interface YMMAlertObject : NSObject
{
    _Bool _running;
    unsigned long long _type;
    unsigned long long _priority;
    NSObject *_targetView;
    YMMAlertPopViewConfig *_popConfig;
    YMMAlertPopMaskConfig *_popMaskConfig;
}

@property(retain, nonatomic) YMMAlertPopMaskConfig *popMaskConfig; // @synthesize popMaskConfig=_popMaskConfig;
@property(retain, nonatomic) YMMAlertPopViewConfig *popConfig; // @synthesize popConfig=_popConfig;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSObject *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithAlertType:(unsigned long long)arg1 priority:(unsigned long long)arg2 targetView:(id)arg3 popViewConfig:(id)arg4 popMaskConfig:(id)arg5;
- (void)run;
- (id)initPopMaskWithPiority:(unsigned long long)arg1 targetView:(id)arg2 popMaskConfig:(id)arg3;
- (id)initSystWithPriority:(unsigned long long)arg1 targetView:(id)arg2;
- (id)initPopViewWithPriority:(unsigned long long)arg1 targetView:(id)arg2 popViewConfig:(id)arg3;

@end

