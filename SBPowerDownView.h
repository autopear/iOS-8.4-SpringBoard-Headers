//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertView.h"

#import "SBPowerDownViewInterface.h"
#import "_UIActionSliderDelegate.h"

@class NSString, NSTimer, SBShapeView, UIButton, UILabel, UIView, _UIActionSlider;

@interface SBPowerDownView : SBAlertView <_UIActionSliderDelegate, SBPowerDownViewInterface>
{
    NSTimer *_autoDismissTimer;
    id <SBPowerDownViewDelegate> _delegate;
    UIView *_backdropView;
    SBShapeView *_darkeningUnderlayView;
    UIView *_darkeningOverlayView;
    _UIActionSlider *_actionSlider;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
    _Bool _hiddenLockScreenForeground;
    _Bool _canAlterScreenBrightness;
}

@property(nonatomic) _Bool canAlterScreenBrightness; // @synthesize canAlterScreenBrightness=_canAlterScreenBrightness;
@property(nonatomic) id <SBPowerDownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_animatePowerDown;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_updateSliderExclusionPath;
- (void)_resetScreenBrightness;
- (void)_saveScreenBrightnessInformation;
- (void)_resetAutoDismissTimer;
- (void)_cancelAutoDismissTimer;
- (id)_lockScreenView;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(id)arg1;
- (void)dismiss;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (void)animateOut;
- (void)animateIn;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

