//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBStatement.h"

@class MBBlockBody, MBExpression, NSArray;

@interface MBIfStatement : MBStatement
{
    MBExpression *_condition;
    MBBlockBody *_thenBlock;
    MBBlockBody *_elseBlocl;
    NSArray *_elseIfList;
}

@property(retain, nonatomic) NSArray *elseIfList; // @synthesize elseIfList=_elseIfList;
@property(retain, nonatomic) MBBlockBody *elseBlocl; // @synthesize elseBlocl=_elseBlocl;
@property(retain, nonatomic) MBBlockBody *thenBlock; // @synthesize thenBlock=_thenBlock;
@property(retain, nonatomic) MBExpression *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;

@end

