//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VVPropertySetter.h"

@interface VVPropertyIntSetter : VVPropertySetter
{
    int _value;
}

+ (id)setterWithPropertyKey:(int)arg1 intValue:(int)arg2;
@property(nonatomic) int value; // @synthesize value=_value;
- (void)applyToNode:(id)arg1;
- (id)description;

@end

