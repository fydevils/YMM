//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UIImage, UIImageView, UILabel, YYLabel;

@interface YMMChatBubbleView : UIView
{
    struct UIEdgeInsets _margin;
    double _fileIconSize;
    _Bool _isSender;
    _Bool _hasChoosed;
    UIImageView *_backgroundImageView;
    YYLabel *_textLabel;
    UIImageView *_imageView;
    UIImageView *_locationImageView;
    UIView *_topAddressView;
    UILabel *_addressNameLabel;
    UILabel *_addressLabel;
    UIImageView *_voiceImageView;
    UILabel *_voiceDurationLabel;
    UIImageView *_isReadView;
    UILabel *_voiceMessageLb;
    UIImageView *_voiceNewImageView;
    UILabel *_voiceMessageTipLb;
    UIImageView *_videoImageView;
    UIImageView *_videoTagView;
    UIImageView *_fileIconView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    UIView *_orderBackView;
    UILabel *_orderTitleLabel;
    UIView *_cardContentView;
    UIView *_grayVerticalView;
    UILabel *_orderRouterLable;
    UILabel *_orderDetailLabel;
    UIView *_orderBottomView;
    UIView *_lineView;
    UILabel *_cardStatusLabel;
    NSMutableArray *_btnArray;
    CDUnknownBlockType _eventBlock;
    UIImage *_originImage;
    UIView *_evaluateContentView;
    UILabel *_evaluateLabel;
    UIView *_evaluateItemsView;
    UIView *_evaluateLabelsView;
    UIButton *_evaluateCommitButton;
    UIView *_grayView;
}

+ (double)ymm_heightForVoiceCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
@property(retain, nonatomic) UIButton *evaluateCommitButton; // @synthesize evaluateCommitButton=_evaluateCommitButton;
@property(retain, nonatomic) UIView *evaluateLabelsView; // @synthesize evaluateLabelsView=_evaluateLabelsView;
@property(retain, nonatomic) UIView *evaluateItemsView; // @synthesize evaluateItemsView=_evaluateItemsView;
@property(retain, nonatomic) UILabel *evaluateLabel; // @synthesize evaluateLabel=_evaluateLabel;
@property(retain, nonatomic) UIView *evaluateContentView; // @synthesize evaluateContentView=_evaluateContentView;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UILabel *cardStatusLabel; // @synthesize cardStatusLabel=_cardStatusLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *orderBottomView; // @synthesize orderBottomView=_orderBottomView;
@property(retain, nonatomic) UILabel *orderDetailLabel; // @synthesize orderDetailLabel=_orderDetailLabel;
@property(retain, nonatomic) UILabel *orderRouterLable; // @synthesize orderRouterLable=_orderRouterLable;
@property(retain, nonatomic) UIView *grayVerticalView; // @synthesize grayVerticalView=_grayVerticalView;
@property(retain, nonatomic) UIView *cardContentView; // @synthesize cardContentView=_cardContentView;
@property(retain, nonatomic) UILabel *orderTitleLabel; // @synthesize orderTitleLabel=_orderTitleLabel;
@property(retain, nonatomic) UIView *orderBackView; // @synthesize orderBackView=_orderBackView;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(retain, nonatomic) UIImageView *fileIconView; // @synthesize fileIconView=_fileIconView;
@property(retain, nonatomic) UIImageView *videoTagView; // @synthesize videoTagView=_videoTagView;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) UILabel *voiceMessageTipLb; // @synthesize voiceMessageTipLb=_voiceMessageTipLb;
@property(retain, nonatomic) UIImageView *voiceNewImageView; // @synthesize voiceNewImageView=_voiceNewImageView;
@property(retain, nonatomic) UILabel *voiceMessageLb; // @synthesize voiceMessageLb=_voiceMessageLb;
@property(retain, nonatomic) UIImageView *isReadView; // @synthesize isReadView=_isReadView;
@property(retain, nonatomic) UILabel *voiceDurationLabel; // @synthesize voiceDurationLabel=_voiceDurationLabel;
@property(retain, nonatomic) UIImageView *voiceImageView; // @synthesize voiceImageView=_voiceImageView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *addressNameLabel; // @synthesize addressNameLabel=_addressNameLabel;
@property(retain, nonatomic) UIView *topAddressView; // @synthesize topAddressView=_topAddressView;
@property(retain, nonatomic) UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) YYLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool hasChoosed; // @synthesize hasChoosed=_hasChoosed;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(readonly, nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)layoutShadeView;
- (void)_setupBackgroundImageViewConstraints;
- (id)initWithMargin:(struct UIEdgeInsets)arg1 isSender:(_Bool)arg2;
- (void)updateFileMargin:(struct UIEdgeInsets)arg1;
- (void)setupFileBubbleView;
- (void)_setupFileBubbleConstraints;
- (void)_setupFileBubbleMarginConstraints;
- (void)updateGifMargin:(struct UIEdgeInsets)arg1;
- (void)setupGifBubbleView;
- (void)_setupImageBubbleConstraints;
- (void)_setupImageBubbleMarginConstraints;
- (void)showFullScreenImage;
- (void)updateImageMargin:(struct UIEdgeInsets)arg1;
- (void)setupImageBubbleView;
- (void)_setupImageBubbleConstraints;
- (void)_setupImageBubbleMarginConstraints;
- (void)updateLocationMargin:(struct UIEdgeInsets)arg1;
- (void)setupLocationBubbleView;
- (void)_setupLocationBubbleConstraints;
- (void)_setupLocationBubbleMarginConstraints;
- (void)buttonAction:(id)arg1;
- (id)getBtnFromInfo:(id)arg1 andGray:(_Bool)arg2;
- (void)loadButtonsAndLabels:(id)arg1;
- (void)configOrderCellWithOrderModel:(id)arg1;
- (void)_updateConstraintByOrderModel:(id)arg1;
- (void)updateOrderMargin:(struct UIEdgeInsets)arg1 orderModel:(id)arg2;
- (void)setupOrderBubbleViewByOrderModel:(id)arg1;
- (void)_setupOrderBubbleMarginConstraintsWithOrderModel:(id)arg1;
- (void)updateTextMargin:(struct UIEdgeInsets)arg1;
- (void)setupTextBubbleView;
- (void)_setupTextBubbleConstraints;
- (void)_setupTextBubbleMarginConstraints;
- (void)updateVideoMargin:(struct UIEdgeInsets)arg1;
- (void)setupVideoBubbleView;
- (void)_setupVideoBubbleConstraints;
- (void)_setupVideoBubbleMarginConstraints;
- (id)recvVoiceTitleAnimationImages;
- (id)recvVoiceAnimationImages;
- (id)sendVoiceImageAnimationImages;
- (void)stopVoiceAnimating;
- (void)startVoiceAnimating;
- (void)updateVoiceMargin:(struct UIEdgeInsets)arg1;
- (void)changeViewStyle;
- (void)sendMessageIsMe:(_Bool)arg1 Message:(id)arg2 Style:(unsigned long long)arg3;
- (void)setupVoiceBubbleView;
- (void)_setupVoiceBubbleConstraints;
- (void)_setupVoiceBubbleMarginConstraints;
- (void)layoutSubviews;
- (void)setVoiceStyle:(unsigned long long)arg1;
- (unsigned long long)voiceStyle;

@end

