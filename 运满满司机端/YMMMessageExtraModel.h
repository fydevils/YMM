//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMMessageExtraModel : YMMCommonModel
{
    NSString *_taskId;
    NSString *_utmCampaign;
    NSString *_icon;
    NSString *_subject;
    NSString *_img_url;
}

@property(copy, nonatomic) NSString *img_url; // @synthesize img_url=_img_url;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *utmCampaign; // @synthesize utmCampaign=_utmCampaign;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;

@end

