//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView;

@interface SBNewsstandBackgroundView : UIView
{
    NSMutableArray *_shelfViews;
    UIImageView *_overlayGradientView;
    UIView *_bottomView;
}

+ (double)dockHeightForOrientation:(long long)arg1;
+ (double)shelfHeightForOrientation:(long long)arg1;
+ (double)baselineForShelfAtIndex:(unsigned long long)arg1 withOrientation:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

