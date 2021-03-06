//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBBaseModuleViewModel.h"

@class NSString;

@interface MBSelectTextValueComponentViewModel : MBBaseModuleViewModel
{
    _Bool _defaultSelected;
    _Bool _selected;
    NSString *_title;
    NSString *_desc;
    long long _waitingSelectValue;
    long long _ratioValue;
    long long _ratioSelectedValue;
    long long _selectedValue;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long selectedValue; // @synthesize selectedValue=_selectedValue;
@property(nonatomic) long long ratioSelectedValue; // @synthesize ratioSelectedValue=_ratioSelectedValue;
@property(nonatomic) long long ratioValue; // @synthesize ratioValue=_ratioValue;
@property(nonatomic) long long waitingSelectValue; // @synthesize waitingSelectValue=_waitingSelectValue;
@property(nonatomic) _Bool defaultSelected; // @synthesize defaultSelected=_defaultSelected;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)componentView;
- (void)onSynchronizedNotificationReceived:(_Bool)arg1;
- (void)setPropertyValueToLocalData;
- (void)postAssociationInfoData;
- (id)initWithJson:(id)arg1;

@end

