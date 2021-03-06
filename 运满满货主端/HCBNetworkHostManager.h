//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBNetworkHostDataSource, HCBNetworkHostStorage;

@interface HCBNetworkHostManager : NSObject
{
    HCBNetworkHostDataSource *_datasource;
    HCBNetworkHostStorage *_storage;
}

+ (id)sharedManager;
@property(retain, nonatomic) HCBNetworkHostStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) HCBNetworkHostDataSource *datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
- (void)loadProviders;
- (id)allHosts;
- (id)mapping;
- (id)hostProviderForModule:(id)arg1;
- (id)allHostProviders;
- (void)reloadAllHosts;
- (void)reloadHostsForModule:(id)arg1;
- (id)hostForKey:(id)arg1 inModule:(id)arg2;
- (void)loadHosts;
- (id)init;

@end

