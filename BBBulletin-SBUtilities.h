//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BBBulletin.h"

#import "SBUIQuietModePlayability.h"

@class NSString;

@interface BBBulletin (SBUtilities) <SBUIQuietModePlayability>
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (id)sb_defaultTitle;
- (id)sb_applicationDisplayName;
- (id)sectionIconImageWithFormat:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

