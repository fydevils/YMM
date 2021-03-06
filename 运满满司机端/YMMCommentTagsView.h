//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIScrollView;

@interface YMMCommentTagsView : UIView
{
    _Bool _isShowAll;
    _Bool _canScroll;
    _Bool _tagCanTap;
    CDUnknownBlockType _tap;
    CDUnknownBlockType _rowNumberCallback;
    unsigned long long _selectType;
    double _screenWidth;
    UIScrollView *_scrollView;
    NSMutableArray *_selectTagIdArray;
    NSMutableArray *_selectItemViewArray;
}

+ (double)viewHeight:(id)arg1 showAll:(_Bool)arg2 screenWidth:(double)arg3;
@property(retain, nonatomic) NSMutableArray *selectItemViewArray; // @synthesize selectItemViewArray=_selectItemViewArray;
@property(retain, nonatomic) NSMutableArray *selectTagIdArray; // @synthesize selectTagIdArray=_selectTagIdArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool tagCanTap; // @synthesize tagCanTap=_tagCanTap;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(nonatomic) _Bool isShowAll; // @synthesize isShowAll=_isShowAll;
@property(nonatomic) unsigned long long selectType; // @synthesize selectType=_selectType;
@property(copy, nonatomic) CDUnknownBlockType rowNumberCallback; // @synthesize rowNumberCallback=_rowNumberCallback;
@property(copy, nonatomic) CDUnknownBlockType tap; // @synthesize tap=_tap;
- (void).cxx_destruct;
- (void)removeTagsFromScrollView;
- (id)itemView:(id)arg1 select:(_Bool)arg2 isCategory:(_Bool)arg3;
- (void)pickTag:(id)arg1 tagId:(id)arg2 title:(id)arg3 isCategory:(_Bool)arg4;
- (void)createTags:(id)arg1 selectTags:(id)arg2;
- (void)selectItemViewPutInToSelectItemViewArray;
- (void)deselectAllTags;
- (void)selectTags:(id)arg1 select:(id)arg2;
- (void)reloadTags:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

