//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface HCBNoEntryViewModelManager : NSObject
{
    unsigned long long _currentIdx;
    NSArray *_itemArray;
}

@property(retain, nonatomic) NSArray *itemArray; // @synthesize itemArray=_itemArray;
- (void).cxx_destruct;
- (void)setLastItem;
- (void)setNextItem;
- (void)setDefaultItem;
- (void)setCurrentIdx:(unsigned long long)arg1;
- (unsigned long long)currentIdx;
- (id)currentItem;
- (id)init;

@end

