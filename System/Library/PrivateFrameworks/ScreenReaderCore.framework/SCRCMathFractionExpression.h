/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathFractionExpression : SCRCMathExpression {

	SCRCMathExpression* _numerator;
	SCRCMathExpression* _denominator;
	SCRCMathExpression* _operator;
	double _lineThickness;

}

@property (nonatomic,retain) SCRCMathExpression * numerator;                //@synthesize numerator=_numerator - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * denominator;              //@synthesize denominator=_denominator - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * operator;                 //@synthesize operator=_operator - In the implementation block
@property (assign,nonatomic) double lineThickness;                          //@synthesize lineThickness=_lineThickness - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)subExpressions;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)latexMathModeDescription;
-(unsigned long long)fractionLevel;
-(id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1 ;
-(id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1 ;
-(id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2 ;
-(id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(BOOL)isSimpleNumericalFraction;
-(BOOL)isUnlinedFraction;
-(void)setNumerator:(SCRCMathExpression *)arg1 ;
-(void)setDenominator:(SCRCMathExpression *)arg1 ;
-(void)setLineThickness:(double)arg1 ;
-(SCRCMathExpression *)numerator;
-(SCRCMathExpression *)denominator;
-(double)lineThickness;
-(id)_speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 asBinomialCoefficient:(BOOL)arg3 ;
-(id)_speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 asBinomialCoefficient:(BOOL)arg4 ;
-(id)_dollarCodeDescriptionAsBinomialCoefficient:(BOOL)arg1 orMixedNumberFraction:(BOOL)arg2 withNumberOfOuterRadicals:(unsigned long long)arg3 treePosition:(id)arg4 ;
-(id)mathMLString;
-(SCRCMathExpression *)operator;
-(void)setOperator:(SCRCMathExpression *)arg1 ;
@end

