//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

#import "SBUIFullscreenAnimationViewDelegate.h"

@class SBUISlideAppTransitionView;

@interface SBUISlideAppTransitionController : SBUIMainScreenAnimationController <SBUIFullscreenAnimationViewDelegate>
{
    SBUISlideAppTransitionView *_transitionView;
    double _animationDelay;
    double _animationDuration;
    double _initiationTime;
}

- (void)appTransitionViewAnimationDidStop:(id)arg1;
- (void)appTransitionView:(id)arg1 animationWillStartWithDuration:(double)arg2 afterDelay:(double)arg3;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;

@end

