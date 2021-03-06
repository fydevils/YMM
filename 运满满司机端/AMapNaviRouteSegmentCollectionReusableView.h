//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class AMapNaviRouteExtendGroupSegment, UIImageView, UILabel, UIView;

@interface AMapNaviRouteSegmentCollectionReusableView : UICollectionReusableView
{
    id <AMapNaviRouteSegmentCollectionReusableViewDelegate> _delegate;
    long long _index;
    AMapNaviRouteExtendGroupSegment *_myObj;
    UILabel *_nameLabel;
    UIImageView *_expansionImageView;
    UIView *_bgView;
    UIImageView *_imageView;
    UILabel *_infoLabel;
}

@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UIImageView *expansionImageView; // @synthesize expansionImageView=_expansionImageView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) AMapNaviRouteExtendGroupSegment *myObj; // @synthesize myObj=_myObj;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <AMapNaviRouteSegmentCollectionReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;

@end

