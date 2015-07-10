//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBVolumePressBandit.h"
#import "_UISettingsKeyObserver.h"

@class NSArray, NSString, PTSettingsController, SBRootSettings, UIWindow;

@interface SBPrototypeController : NSObject <SBVolumePressBandit, _UISettingsKeyObserver>
{
    SBRootSettings *_rootSettings;
    UIWindow *_settingsWindow;
    PTSettingsController *_settingsController;
    NSArray *_testRecipeClassNames;
    id <SBTestRecipe> _activeTestRecipe;
    _Bool _showingSettings;
    _Bool _hasPreviousSettings;
}

+ (id)sharedInstance;
+ (void)migrateSettings;
+ (void)reloadDefaults;
- (void)_updatePreventingLockover;
- (void)_configureForDefaults;
- (void)_changeActiveTestRecipeIfNecessary;
- (void)_tearDownSettingsWindow;
- (struct CGRect)_offscreenFrame;
- (void)_hideSettings;
- (void)_showSettings;
- (id)_testRecipeClassNames;
- (_Bool)_restorePreviousSettings;
- (_Bool)_hasPreviousSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
@property(retain, nonatomic) id <SBTestRecipe> activeTestRecipe;
- (void)showOrHide;
- (_Bool)isPrototypingEnabled;
- (_Bool)isShowingSettingsUI;
- (id)rootSettings;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

