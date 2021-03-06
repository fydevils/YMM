//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBBaseModuleViewModel.h"

@class NSString;

@interface MBHorizontalTextComponentViewModel : MBBaseModuleViewModel
{
    NSString *_leftTitle;
    NSString *_centerTitle;
    NSString *_rightTitle;
    double _centerLeftMargin;
    double _centerRightMargin;
    long long _rightTextAlignment;
}

@property(nonatomic) long long rightTextAlignment; // @synthesize rightTextAlignment=_rightTextAlignment;
@property(nonatomic) double centerRightMargin; // @synthesize centerRightMargin=_centerRightMargin;
@property(nonatomic) double centerLeftMargin; // @synthesize centerLeftMargin=_centerLeftMargin;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) NSString *centerTitle; // @synthesize centerTitle=_centerTitle;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (void).cxx_destruct;

@end

