//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCBModuleStorage.h"

@class FXKeychain, NSString;

@interface HCBKeychain : NSObject <HCBModuleStorage>
{
    NSString *_module;
    FXKeychain *_keychain;
    FXKeychain *_defaultsKeychain;
}

@property(retain, nonatomic) FXKeychain *defaultsKeychain; // @synthesize defaultsKeychain=_defaultsKeychain;
@property(readonly, nonatomic) FXKeychain *keychain; // @synthesize keychain=_keychain;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)initWithModule:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)removeObjectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

