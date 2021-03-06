//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDWebImageCoder.h"

@class NSArray<SDWebImageCoder>, NSMutableArray<SDWebImageCoder>, NSObject<OS_dispatch_queue>, NSString;

@interface SDWebImageCodersManager : NSObject <SDWebImageCoder>
{
    NSMutableArray<SDWebImageCoder> *_mutableCoders;
    NSObject<OS_dispatch_queue> *_mutableCodersAccessQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mutableCodersAccessQueue; // @synthesize mutableCodersAccessQueue=_mutableCodersAccessQueue;
@property(retain, nonatomic) NSMutableArray<SDWebImageCoder> *mutableCoders; // @synthesize mutableCoders=_mutableCoders;
- (void).cxx_destruct;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2;
- (id)decompressedImageWithImage:(id)arg1 data:(id *)arg2 options:(id)arg3;
- (id)decodedImageWithData:(id)arg1;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (_Bool)canDecodeFromData:(id)arg1;
@property(retain, nonatomic) NSArray<SDWebImageCoder> *coders;
- (void)removeCoder:(id)arg1;
- (void)addCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

