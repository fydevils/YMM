//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMNoCommentsDetailMode : YMMCommonModel
{
    NSString *_startCity;
    NSString *_endCity;
    NSString *_userName;
    NSString *_cargoName;
    NSString *_userPicture;
    NSNumber *_createTime;
    NSNumber *_showCmt;
    NSString *_commentSchema;
    NSString *_orderId;
    NSString *_otherCommentTip;
}

@property(copy, nonatomic) NSString *otherCommentTip; // @synthesize otherCommentTip=_otherCommentTip;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *commentSchema; // @synthesize commentSchema=_commentSchema;
@property(retain, nonatomic) NSNumber *showCmt; // @synthesize showCmt=_showCmt;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *userPicture; // @synthesize userPicture=_userPicture;
@property(copy, nonatomic) NSString *cargoName; // @synthesize cargoName=_cargoName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *endCity; // @synthesize endCity=_endCity;
@property(copy, nonatomic) NSString *startCity; // @synthesize startCity=_startCity;
- (void).cxx_destruct;

@end

