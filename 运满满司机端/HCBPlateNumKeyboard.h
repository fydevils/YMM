//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface HCBPlateNumKeyboard : UIView
{
    id <HCBPlateNumKeyboardDelegate> _delegate;
    id <HCBPlateNumKeyboardDataSource> _dataSource;
}

@property(nonatomic) __weak id <HCBPlateNumKeyboardDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <HCBPlateNumKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)shadowPathWith:(id)arg1;
- (id)createImageWithColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)revokeBtnPressed:(id)arg1;
- (void)plateNumBtnPressed:(id)arg1;
- (void)reloadData;

@end

