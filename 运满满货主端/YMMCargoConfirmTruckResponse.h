//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSDictionary, NSString;

@interface YMMCargoConfirmTruckResponse : YMMCommonModel
{
    _Bool _isValidCar;
    NSString *_requestId;
    NSDictionary *_dialogData;
}

@property(retain, nonatomic) NSDictionary *dialogData; // @synthesize dialogData=_dialogData;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) _Bool isValidCar; // @synthesize isValidCar=_isValidCar;
- (void).cxx_destruct;

@end

