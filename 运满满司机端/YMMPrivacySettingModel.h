//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSString;

@interface YMMPrivacySettingModel : YMMCommonModel
{
    long long _categoryId;
    NSString *_name;
    NSString *_desc;
    long long _isShow;
    NSArray *_authItems;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSArray *authItems; // @synthesize authItems=_authItems;
@property(nonatomic) long long isShow; // @synthesize isShow=_isShow;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end

