//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMOrderUserInfoShipperInfoImObjModel : YMMCommonModel
{
    _Bool _depositStaus;
    _Bool _imEnable;
    NSString *_name;
    NSString *_pictureStr;
    long long _userId;
    NSString *_routeMessage;
    NSString *_goodsInfo;
    long long _earnestAmount;
    NSString *_orderId;
    NSString *_orderDetailScheme;
    NSString *_depositStatus;
    NSString *_depositAmount;
    NSNumber *_imUsername;
    NSString *_imDisableReason;
}

@property(retain, nonatomic) NSString *imDisableReason; // @synthesize imDisableReason=_imDisableReason;
@property(nonatomic) _Bool imEnable; // @synthesize imEnable=_imEnable;
@property(retain, nonatomic) NSNumber *imUsername; // @synthesize imUsername=_imUsername;
@property(retain, nonatomic) NSString *depositAmount; // @synthesize depositAmount=_depositAmount;
@property(retain, nonatomic) NSString *depositStatus; // @synthesize depositStatus=_depositStatus;
@property(retain, nonatomic) NSString *orderDetailScheme; // @synthesize orderDetailScheme=_orderDetailScheme;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long earnestAmount; // @synthesize earnestAmount=_earnestAmount;
@property(retain, nonatomic) NSString *goodsInfo; // @synthesize goodsInfo=_goodsInfo;
@property(retain, nonatomic) NSString *routeMessage; // @synthesize routeMessage=_routeMessage;
@property(nonatomic) _Bool depositStaus; // @synthesize depositStaus=_depositStaus;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *pictureStr; // @synthesize pictureStr=_pictureStr;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isHttpOrHttps:(id)arg1;

@end

