//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface URQosInfo : NSObject
{
    NSString *_uuid;
    NSString *_url;
    NSString *_params;
    NSString *_fr;
    NSString *_proxy;
    NSString *_api;
    NSString *_rt;
    NSString *_h_code;
    NSString *_s_code;
    NSString *_s_msg;
    NSString *_exception;
    NSString *_dfv;
}

@property(copy, nonatomic) NSString *dfv; // @synthesize dfv=_dfv;
@property(copy, nonatomic) NSString *exception; // @synthesize exception=_exception;
@property(copy, nonatomic) NSString *s_msg; // @synthesize s_msg=_s_msg;
@property(copy, nonatomic) NSString *s_code; // @synthesize s_code=_s_code;
@property(copy, nonatomic) NSString *h_code; // @synthesize h_code=_h_code;
@property(copy, nonatomic) NSString *rt; // @synthesize rt=_rt;
@property(copy, nonatomic) NSString *api; // @synthesize api=_api;
@property(copy, nonatomic) NSString *proxy; // @synthesize proxy=_proxy;
@property(copy, nonatomic) NSString *fr; // @synthesize fr=_fr;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;

@end

