//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface HCBDateFormatterManager : NSObject
{
    NSMutableDictionary *_formatters;
}

+ (id)sharedCalendar;
+ (id)temporaryDateFormatterWithFormat:(id)arg1;
+ (void)removeAllFormatters;
+ (void)removeFormatterWithFormat:(id)arg1;
+ (id)dateFormatterWithFormat:(id)arg1;
+ (id)defaultManager;
@property(retain, nonatomic) NSMutableDictionary *formatters; // @synthesize formatters=_formatters;
- (void).cxx_destruct;

@end

