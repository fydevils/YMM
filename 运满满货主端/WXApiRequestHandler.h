//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXApiRequestHandler : NSObject
{
}

+ (_Bool)sendMiniProgram:(id)arg1 userName:(id)arg2 path:(id)arg3 hdImageData:(id)arg4 title:(id)arg5 description:(id)arg6;
+ (_Bool)sendAuthRequestScope:(id)arg1 State:(id)arg2 OpenID:(id)arg3 InViewController:(id)arg4;
+ (_Bool)addCardsToCardPackage:(id)arg1;
+ (_Bool)sendAppContentData:(id)arg1 ExtInfo:(id)arg2 ExtURL:(id)arg3 Title:(id)arg4 Description:(id)arg5 MessageExt:(id)arg6 MessageAction:(id)arg7 ThumbImage:(id)arg8 InScene:(int)arg9;
+ (_Bool)sendFileData:(id)arg1 fileExtension:(id)arg2 Title:(id)arg3 Description:(id)arg4 ThumbImage:(id)arg5 InScene:(int)arg6;
+ (_Bool)sendEmotionData:(id)arg1 ThumbImage:(id)arg2 InScene:(int)arg3;
+ (_Bool)sendVideoURL:(id)arg1 Title:(id)arg2 Description:(id)arg3 ThumbImage:(id)arg4 InScene:(int)arg5;
+ (_Bool)sendMusicURL:(id)arg1 dataURL:(id)arg2 Title:(id)arg3 Description:(id)arg4 ThumbImage:(id)arg5 InScene:(int)arg6;
+ (_Bool)sendLinkURL:(id)arg1 TagName:(id)arg2 Title:(id)arg3 Description:(id)arg4 ThumbImage:(id)arg5 InScene:(int)arg6;
+ (_Bool)sendImageData:(id)arg1 TagName:(id)arg2 MessageExt:(id)arg3 Action:(id)arg4 ThumbImage:(id)arg5 InScene:(int)arg6;
+ (_Bool)sendText:(id)arg1 InScene:(int)arg2;

@end

