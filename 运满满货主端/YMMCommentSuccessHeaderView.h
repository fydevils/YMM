//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface YMMCommentSuccessHeaderView : UIView
{
    long long _scene_type;
    UIView *_headerSuccessView;
    UIImageView *_successImageView;
    UILabel *_successLabel;
}

@property(retain, nonatomic) UILabel *successLabel; // @synthesize successLabel=_successLabel;
@property(retain, nonatomic) UIImageView *successImageView; // @synthesize successImageView=_successImageView;
@property(retain, nonatomic) UIView *headerSuccessView; // @synthesize headerSuccessView=_headerSuccessView;
@property(nonatomic) long long scene_type; // @synthesize scene_type=_scene_type;
- (void).cxx_destruct;
- (void)initUI;
- (id)initWithSceneType:(long long)arg1;

@end

