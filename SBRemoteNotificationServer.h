//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface SBRemoteNotificationServer : NSObject <APSConnectionDelegate>
{
    NSMutableDictionary *_bundleIdentifiersToClients;
    NSMutableDictionary *_environmentsToConnections;
    NSMutableSet *_bundleIdentifiersNeedingToken;
    NSString *_lastNotificationReceivedBundleIdentifier;
    NSMutableDictionary *_appImportanceTracker;
}

+ (id)sharedInstance;
- (void)setBackgroundDeliveryDisabled:(_Bool)arg1 forBundleIdentifier:(id)arg2;
- (unsigned long long)legacyRegisteredTypesForApp:(id)arg1;
- (_Bool)isAppPushEnabled:(id)arg1;
- (_Bool)isPushAllowedForBundleIdentifier:(id)arg1;
- (void)requestTokenForClient:(id)arg1;
- (void)setBackgroundAppRefreshAllowed:(_Bool)arg1 forBundleIdentifier:(id)arg2;
- (void)registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2 appWantsPush:(_Bool)arg3;
- (void)registerApplication:(id)arg1 forEnvironment:(id)arg2 appWantsPush:(_Bool)arg3;
- (void)userNotificationsChangedStateForBundleIdentifier:(id)arg1 becameEnabled:(_Bool)arg2;
- (id)_allTopicsForApplication:(id)arg1;
- (id)_cloudDatabaseTopicsForApplication:(id)arg1;
- (void)calculateTopics;
- (void)_appDebugStateDidChange:(id)arg1;
- (void)_appStateDidChange:(id)arg1;
- (void)_appImportanceDecreased:(id)arg1;
- (void)_appImportanceIncreased:(id)arg1;
- (void)_moveTopicsForApp:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (id)allBackgroundAppRefreshEnabledBundleIdentifiers;
- (id)allBackgroundAppRefreshCapableBundleIdentifiers;
- (id)lastNotificationReceivedBundleIdentifier;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)run;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

