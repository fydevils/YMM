//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCBABConfiguration.h"

@class NSArray, NSString;

@interface HCBABConfiguration_HCBNavigator : NSObject <HCBABConfiguration>
{
    id <HCBABConfiguration> _parent;
    CDUnknownBlockType _ext;
    CDUnknownBlockType _navigationControllerProvider;
    NSArray *_schemes;
}

+ (id)defaultConfiguration;
+ (id)YMMScheme;
+ (id)HTTPScheme;
@property(retain, nonatomic) NSArray *schemes; // @synthesize schemes=_schemes;
@property(copy, nonatomic) CDUnknownBlockType navigationControllerProvider; // @synthesize navigationControllerProvider=_navigationControllerProvider;
@property(copy, nonatomic) CDUnknownBlockType ext; // @synthesize ext=_ext;
@property(nonatomic) __weak id <HCBABConfiguration> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

