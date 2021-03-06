//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSOperationQueue;

@interface VVTemplateManager : NSObject
{
    _Bool _removeTemplateBeforeReload;
    Class _defaultLoaderClass;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_versions;
    NSMutableDictionary *_creaters;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *creaters; // @synthesize creaters=_creaters;
@property(retain, nonatomic) NSMutableDictionary *versions; // @synthesize versions=_versions;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool removeTemplateBeforeReload; // @synthesize removeTemplateBeforeReload=_removeTemplateBeforeReload;
@property(nonatomic) Class defaultLoaderClass; // @synthesize defaultLoaderClass=_defaultLoaderClass;
- (void).cxx_destruct;
- (void)loadTemplateDataAsync:(id)arg1 forType:(id)arg2 withLoaderClass:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadTemplateDataAsync:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadTemplateFileAsync:(id)arg1 forType:(id)arg2 withLoaderClass:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadTemplateFileAsync:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)private_LoadTemplateData:(id)arg1 forType:(id)arg2 withLoaderClass:(Class)arg3;
- (id)loadTemplateData:(id)arg1 forType:(id)arg2 withLoaderClass:(Class)arg3;
- (id)loadTemplateData:(id)arg1 forType:(id)arg2;
- (id)loadTemplateFile:(id)arg1 forType:(id)arg2 withLoaderClass:(Class)arg3;
- (id)loadTemplateFile:(id)arg1 forType:(id)arg2;
- (void)didLoadType:(id)arg1 version:(id)arg2 creater:(id)arg3;
- (void)willLoadType:(id)arg1;
- (id)createNodeTreeForType:(id)arg1;
- (id)versionOfType:(id)arg1;
@property(readonly, nonatomic) NSArray *loadedTypes;
- (id)init;

@end

