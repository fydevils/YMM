//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIColor, UIFont;

@interface HCBStepper : UIView
{
    unsigned long long _type;
    unsigned long long _currentStep;
    id <HCBStepperDataSource> _dataSource;
    unsigned long long _style;
    double _borderWidth;
    double _circleRadius;
    UIFont *_numberFont;
    UIFont *_titleFont;
    UIColor *_progressColorForNormal;
    UIColor *_progressColorForSelected;
    UIColor *_numberColorForNormal;
    UIColor *_numberColorForSelected;
    UIColor *_titleColorForNormal;
    UIColor *_titleColorForSelected;
    unsigned long long _maxSteps;
    unsigned long long _steps;
    double _defaultHeight;
    NSMutableArray *_stepItems;
}

@property(retain, nonatomic) NSMutableArray *stepItems; // @synthesize stepItems=_stepItems;
@property(nonatomic) double defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(nonatomic) unsigned long long steps; // @synthesize steps=_steps;
@property(nonatomic) unsigned long long maxSteps; // @synthesize maxSteps=_maxSteps;
@property(retain, nonatomic) UIColor *titleColorForSelected; // @synthesize titleColorForSelected=_titleColorForSelected;
@property(retain, nonatomic) UIColor *titleColorForNormal; // @synthesize titleColorForNormal=_titleColorForNormal;
@property(retain, nonatomic) UIColor *numberColorForSelected; // @synthesize numberColorForSelected=_numberColorForSelected;
@property(retain, nonatomic) UIColor *numberColorForNormal; // @synthesize numberColorForNormal=_numberColorForNormal;
@property(retain, nonatomic) UIColor *progressColorForSelected; // @synthesize progressColorForSelected=_progressColorForSelected;
@property(retain, nonatomic) UIColor *progressColorForNormal; // @synthesize progressColorForNormal=_progressColorForNormal;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIFont *numberFont; // @synthesize numberFont=_numberFont;
@property(nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <HCBStepperDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long currentStep; // @synthesize currentStep=_currentStep;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)updateStepItemState;
- (void)updateStepItemState:(id)arg1 withItemIndex:(unsigned long long)arg2;
- (void)creatStepper;
- (id)titleForStepperItemAtIndex:(unsigned long long)arg1;
- (void)setupStepperStyle;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

