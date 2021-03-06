//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMOrderDetailBaseCell.h"

@class UIImageView, UIView, YMMOrderPictureInfoModel;

@interface YMMOrderPictureInfoCell : YMMOrderDetailBaseCell
{
    UIImageView *_pictureImage;
    UIView *_bottomView;
    YMMOrderPictureInfoModel *_pictureModel;
}

@property(retain, nonatomic) YMMOrderPictureInfoModel *pictureModel; // @synthesize pictureModel=_pictureModel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *pictureImage; // @synthesize pictureImage=_pictureImage;
- (void).cxx_destruct;
- (void)tap;
- (void)insertModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

