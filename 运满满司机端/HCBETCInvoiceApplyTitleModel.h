//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBETCInvoiceApplyTitleModel : NSObject
{
    _Bool _isDelete;
    long long _modifyTime;
    long long _addTime;
    long long _ID;
    NSString *_applyOrderId;
    NSString *_titleId;
    NSString *_titleName;
    NSString *_taxNo;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSString *taxNo; // @synthesize taxNo=_taxNo;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) NSString *titleId; // @synthesize titleId=_titleId;
@property(retain, nonatomic) NSString *applyOrderId; // @synthesize applyOrderId=_applyOrderId;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) long long addTime; // @synthesize addTime=_addTime;
@property(nonatomic) long long modifyTime; // @synthesize modifyTime=_modifyTime;
- (void).cxx_destruct;

@end

