//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HCBActivityModel, UIImageView, UILabel;

@interface HCBMainActivityTemplateThreeView : UIView
{
    CDUnknownBlockType _actionClicked;
    UILabel *_lblMainTitle;
    UILabel *_lblSubtitle;
    UILabel *_lblDescription;
    UIImageView *_imgIcon;
    HCBActivityModel *_viewModel;
}

@property(retain, nonatomic) HCBActivityModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) UIImageView *imgIcon; // @synthesize imgIcon=_imgIcon;
@property(nonatomic) UILabel *lblDescription; // @synthesize lblDescription=_lblDescription;
@property(nonatomic) UILabel *lblSubtitle; // @synthesize lblSubtitle=_lblSubtitle;
@property(nonatomic) UILabel *lblMainTitle; // @synthesize lblMainTitle=_lblMainTitle;
@property(copy, nonatomic) CDUnknownBlockType actionClicked; // @synthesize actionClicked=_actionClicked;
- (void).cxx_destruct;
- (void)clickedView:(id)arg1;
- (void)setupViewInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;

@end

