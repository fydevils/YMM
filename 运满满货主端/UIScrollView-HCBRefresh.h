//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class MJRefreshFooter, MJRefreshHeader;

@interface UIScrollView (HCBRefresh)
@property(copy, nonatomic) CDUnknownBlockType hcb_reloadDataBlock;
- (long long)hcb_totalDataCount;
@property(retain, nonatomic) MJRefreshFooter *hcb_footer;
@property(retain, nonatomic) MJRefreshHeader *hcb_header;
@end

