//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface HCBChooseHostSectionModel : NSObject <NSCoding>
{
    NSString *_businessName;
    NSArray *_hostArr;
}

@property(retain, nonatomic) NSArray *hostArr; // @synthesize hostArr=_hostArr;
@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

