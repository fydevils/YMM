//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBUMCBaseModel.h"

@class NSDictionary, NSString;

@interface HCBUMCDotModel : HCBUMCBaseModel
{
    NSString *_alterMsg;
    long long _dot;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) long long dot; // @synthesize dot=_dot;
@property(retain, nonatomic) NSString *alterMsg; // @synthesize alterMsg=_alterMsg;
- (void).cxx_destruct;
- (_Bool)hasNotice;
- (void)commonInit;

@end

