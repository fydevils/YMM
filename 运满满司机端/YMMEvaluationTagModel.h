//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMEvaluationTagModel : YMMCommonModel
{
    _Bool _selected;
    NSString *_tagName;
    long long _tagCount;
    long long _score;
    NSNumber *_tagId;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSNumber *tagId; // @synthesize tagId=_tagId;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(nonatomic) long long tagCount; // @synthesize tagCount=_tagCount;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void).cxx_destruct;

@end

