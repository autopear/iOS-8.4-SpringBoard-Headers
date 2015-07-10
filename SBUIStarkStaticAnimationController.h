//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

@class SBApplication, UIView;

@interface SBUIStarkStaticAnimationController : SBUIStarkScreenAnimationController
{
    _Bool _relaunchExpected;
    _Bool _awaitingKeybagRefetch;
    _Bool _appWasActivating;
    UIView *_staticAppView;
    UIView *_hostView;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (_Bool)_shouldDismissBanner;
- (void)_hideAppHostView;
- (void)_prepareAnimation;
- (void)_setupStartDependencies;
- (_Bool)_willAnimate;
@property(readonly, retain, nonatomic) SBApplication *app;
- (void)_applicationDependencyStateChanged;
- (id)_animationProgressDependency;
- (void)dealloc;
- (id)initWithApp:(id)arg1 starkScreenController:(id)arg2;

@end

