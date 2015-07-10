//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPSearchResult, SPSearchResultSection, UIColor;

@protocol SBSearchResultDetailsViewController <NSObject>
+ (id)viewControllerForResult:(SPSearchResult *)arg1 inSection:(SPSearchResultSection *)arg2;
@property(readonly) _Bool wantsInset;
@property id <SBSearchResultDetailsViewControllerDelegate> actionDelegate;
- (void)loadWithCompletionBlock:(void (^)(void))arg1;

@optional
@property(retain) UIColor *contentBackgroundColor;
@end

