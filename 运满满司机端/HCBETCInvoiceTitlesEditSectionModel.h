//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBETCInvoiceTitlesEditSectionModel : NSObject
{
    _Bool _canEdit;
    NSString *_sectionTitle;
    NSString *_sectionValue;
    NSString *_placeHolderText;
    long long _sectionType;
}

@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(retain, nonatomic) NSString *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
@property(retain, nonatomic) NSString *sectionValue; // @synthesize sectionValue=_sectionValue;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void).cxx_destruct;
- (id)init;

@end

