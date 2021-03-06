//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSMutableArray;

@interface YMMLinkLabel : UILabel
{
    _Bool _sameLinkEnable;
    NSMutableArray *_linkArr;
}

@property(retain, nonatomic) NSMutableArray *linkArr; // @synthesize linkArr=_linkArr;
@property(nonatomic) _Bool sameLinkEnable; // @synthesize sameLinkEnable=_sameLinkEnable;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)getRangeArrayWithLinkString:(id)arg1 inTextString:(id)arg2 lastRange:(struct _NSRange)arg3 rangeArray:(id)arg4;
- (_Bool)needResponseTouchLabel:(struct CGPoint)arg1;
- (void)removeLinkText:(id)arg1;
- (void)addLinkText:(id)arg1 linkAddAttribute:(id)arg2 linkBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

