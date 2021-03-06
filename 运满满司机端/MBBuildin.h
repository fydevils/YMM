//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface MBBuildin : NSObject
{
    NSMutableArray *_structDeclares;
    NSMutableDictionary *_gcdMapTable;
    NSMutableDictionary *_functionMapTable;
    NSMutableDictionary *_varMapTable;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableDictionary *varMapTable; // @synthesize varMapTable=_varMapTable;
@property(retain, nonatomic) NSMutableDictionary *functionMapTable; // @synthesize functionMapTable=_functionMapTable;
@property(retain, nonatomic) NSMutableDictionary *gcdMapTable; // @synthesize gcdMapTable=_gcdMapTable;
@property(retain, nonatomic) NSMutableArray *structDeclares; // @synthesize structDeclares=_structDeclares;
- (void).cxx_destruct;
- (id)getVar;
- (id)getFunction;
- (id)getGCD;
- (id)getStructDeclare;
- (void)addVar:(id)arg1 forKey:(id)arg2;
- (void)addFunction:(id)arg1 forKey:(id)arg2;
- (void)addGcd:(id)arg1 forKey:(id)arg2;
- (void)addStructDeclare:(id)arg1;
- (id)init;

@end

