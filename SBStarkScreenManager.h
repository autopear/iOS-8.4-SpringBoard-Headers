//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBScreenConnectionHandler.h"
#import "SBStarkScreenControllerDelegate.h"

@class NSHashTable, NSMapTable, NSString, SBLockScreenDisableAssertion, SBPasscodeLockDisableAssertion, SBSStatusBarStyleOverridesAssertion, SBSpuriousScreenUndimmingAssertion, SBStarkScreenController, SBStarkStatusBarStateProvider;

@interface SBStarkScreenManager : NSObject <SBScreenConnectionHandler, SBStarkScreenControllerDelegate>
{
    NSMapTable *_screenToControllerMap;
    NSHashTable *_observers;
    SBStarkScreenController *_currentScreenController;
    SBStarkStatusBarStateProvider *_statusBarStateProvider;
    SBSpuriousScreenUndimmingAssertion *_spuriousScreenUndimmingAssertion;
    SBPasscodeLockDisableAssertion *_deviceLockDisableAssertion;
    SBLockScreenDisableAssertion *_lockScreenDisableAssertion;
    SBPasscodeLockDisableAssertion *_earlyConnectDeviceLockDisableAssertion;
    SBSStatusBarStyleOverridesAssertion *_carPlayStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_earlyCarPlayStatusBarStyleOverrideAssertion;
    _Bool _hasShownConnectedAlert;
    _Bool _delayShowingConnectedAlert;
    _Bool _geoSupported;
    _Bool _earlyStarkConnection;
    _Bool _delayUpdatingLockOutMode;
}

+ (id)sharedInstance;
- (void)screenManager:(id)arg1 didTriggerConnectionHandlerEvent:(long long)arg2 forScreen:(id)arg3;
- (_Bool)screenManager:(id)arg1 shouldBindConnectionHandlerToScreen:(id)arg2;
- (void)starkScreenControllerWantsRelockUI:(id)arg1;
- (_Bool)starkScreenControllerShouldDelayUpdateLockoutMode:(id)arg1;
- (void)_promptConnectionSteps;
- (void)_clearPromptState;
- (void)_clearEarlyConnectState;
- (void)_clearEarlyConnectStateTimerExpired;
- (void)_unscheduleClearEarlyConnectStateExpirationTimer;
- (void)_scheduleClearEarlyConnectStateExpirationTimer;
- (void)_earlyStarkConnection;
- (void)_usbStarkConnected;
- (void)_setCurrentController:(id)arg1;
- (void)_updateGeoSupport;
- (_Bool)shouldShowCarPlayStatusBarItem;
- (id)screenControllerForScreen:(id)arg1;
- (id)screenControllerForDisplay:(id)arg1;
- (_Bool)promptRelockUIIfAppropriate;
- (_Bool)handleUnlockAttempt;
- (void)prepareToHandleUnlockAttempt;
- (_Bool)isGeoSupported;
- (id)statusBarStateProvider;
- (_Bool)isStarkActive;
- (id)activeScreenController;
- (_Bool)starkScreenIsAttached;
- (id)currentScreenController;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

