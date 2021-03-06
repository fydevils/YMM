//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IModelCell.h"
#import "NSObject.h"

@class NSString;

@protocol IModelChatCell <NSObject, IModelCell>
@property(retain, nonatomic) id model;

@optional
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(NSString *)arg2 model:(id)arg3;
- (void)updateCustomBubbleViewMargin:(struct UIEdgeInsets)arg1 model:(id)arg2;
- (void)setCustomModel:(id)arg1;
- (void)setCustomBubbleView:(id)arg1;
- (_Bool)isCustomBubbleView:(id)arg1;
@end

