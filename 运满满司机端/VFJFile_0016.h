//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VFJFile.h"

@class NSData, NSString;

@interface VFJFile_0016 : NSObject <VFJFile>
{
    NSData *_ownerFlag;
    NSData *_clerkFlag;
    NSString *_ownerName;
    NSString *_idNumber;
    NSData *_idTYpe;
}

@property(retain, nonatomic) NSData *idTYpe; // @synthesize idTYpe=_idTYpe;
@property(retain, nonatomic) NSString *idNumber; // @synthesize idNumber=_idNumber;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(retain, nonatomic) NSData *clerkFlag; // @synthesize clerkFlag=_clerkFlag;
@property(retain, nonatomic) NSData *ownerFlag; // @synthesize ownerFlag=_ownerFlag;
- (void).cxx_destruct;
- (id)toBytes;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

