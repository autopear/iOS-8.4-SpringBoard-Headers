//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert, SBApplication;

@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBAlert *_activatingAlert;
    _Bool _animatedAppDeactivation;
    SBApplication *_mainScreenAppThatWillBeActivated;
    id _mainScreenAppThatWillBeActivatedObserver;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (_Bool)_shouldDisallowSuspension;
- (id)_newAnimationFromNowPlayingToApp;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToApp;
- (void)_setupMilestonesFrom:(id)arg1 to:(id)arg2;
- (void)_finishCommit;
- (void)_doCommit;
- (id)swizzledToDisplayIfNecessary;
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(_Bool)arg2;
- (void)dealloc;
- (id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 from:(id)arg3 to:(id)arg4;

@end

