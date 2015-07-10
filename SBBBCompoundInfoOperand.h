//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBBBInfoOperand;

@interface SBBBCompoundInfoOperand : NSObject
{
    SBBBInfoOperand *_activeOperand;
    SBBBInfoOperand *_referenceOperand;
}

+ (id)compoundOperandWithOperand:(id)arg1 referenceOperand:(id)arg2;
@property(readonly, nonatomic) SBBBInfoOperand *referenceOperand; // @synthesize referenceOperand=_referenceOperand;
@property(readonly, nonatomic) SBBBInfoOperand *activeOperand; // @synthesize activeOperand=_activeOperand;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic, getter=isSectionOperand) _Bool sectionOperand;
- (void)dealloc;
- (id)initWithOperand:(id)arg1 operand:(id)arg2;

@end

