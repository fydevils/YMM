//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSString;

@interface YMMCommentCommitModel : YMMBaseModel
{
    _Bool _isNewUrl;
    NSString *_orderId;
    long long _score;
    NSString *_content;
    NSString *_selectedTags;
}

@property(nonatomic) _Bool isNewUrl; // @synthesize isNewUrl=_isNewUrl;
@property(copy, nonatomic) NSString *selectedTags; // @synthesize selectedTags=_selectedTags;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;

@end

