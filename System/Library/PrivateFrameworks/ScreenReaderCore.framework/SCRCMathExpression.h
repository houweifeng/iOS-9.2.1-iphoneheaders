/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface SCRCMathExpression : NSObject {

	SCRCMathExpression* _parent;
	unsigned long long _cachedMaximumDepth;

}

@property (nonatomic,readonly) NSArray * subExpressions; 
@property (assign,nonatomic) SCRCMathExpression * parent;                           //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) BOOL isRangeSubSuperscript; 
@property (nonatomic,readonly) BOOL canBeUsedWithRange; 
@property (nonatomic,readonly) BOOL isBaseSubSuperscript; 
@property (nonatomic,readonly) BOOL canBeUsedWithBase; 
@property (nonatomic,readonly) BOOL isNumber; 
@property (nonatomic,readonly) BOOL isInteger; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) BOOL isNaturalSuperscript; 
@property (nonatomic,readonly) BOOL hasSimpleArrayOfChildren; 
@property (nonatomic,readonly) BOOL isEllipsis; 
@property (nonatomic,readonly) BOOL isTermSeparator; 
@property (nonatomic,readonly) BOOL isOperationSymbol; 
@property (nonatomic,readonly) BOOL isFenceDelimiter; 
@property (nonatomic,readonly) BOOL isFunctionName; 
@property (nonatomic,readonly) BOOL isWordOrAbbreviation; 
@property (nonatomic,readonly) unsigned long long fractionLevel; 
@property (nonatomic,readonly) BOOL isSimpleNumericalFraction; 
@property (nonatomic,readonly) BOOL beginsWithSpace; 
@property (nonatomic,readonly) BOOL endsWithSpace; 
@property (nonatomic,readonly) BOOL isMultiRowTable; 
@property (nonatomic,readonly) BOOL isUnlinedFraction; 
@property (nonatomic,readonly) NSString * latexFormatStringAsOver; 
@property (nonatomic,readonly) NSString * latexFormatStringAsUnder; 
@property (nonatomic,readonly) BOOL canBeWrappedInLatexMathIndicators; 
@property (nonatomic,readonly) NSArray * siblings; 
+(void)setPathToSegmentOrderingPlist:(id)arg1 ;
+(Class)_classForExpressionType:(id)arg1 ;
+(id)mathExpressionWithDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)integerValue;
-(id)localizedStringForKey:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(NSArray *)subExpressions;
-(unsigned long long)maximumDepth;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(unsigned long long)numberOfTables;
-(id)localizedStringForNumber:(id)arg1 ;
-(id)latexDescriptionInMathMode:(BOOL)arg1 ;
-(id)latexMathModeDescription;
-(id)_scrcBundle;
-(id)localizedAttributedStringForKey:(id)arg1 treePosition:(id)arg2 ;
-(id)localizedAttributedStringForKey:(id)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 prefix:(id)arg4 suffix:(id)arg5 ;
-(id)speakableSegments:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3 ;
-(void)_applyTreePositionOfOriginalSegment:(id)arg1 toPrefixedOrSuffixedSegment:(id)arg2 ;
-(unsigned long long)fractionLevel;
-(id)fenceDelimiters;
-(id)latexIdentifierForIdentifier:(id)arg1 ;
-(id)speakableDescription;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 isPartOfWord:(BOOL)arg3 ;
-(id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1 ;
-(id)dollarCodeDescription;
-(id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1 ;
-(id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6 ;
-(id)speakableSegmentsUpToDepth:(unsigned long long)arg1 ;
-(id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)speakableSummary;
-(id)latexDescription;
-(BOOL)isRangeSubSuperscript;
-(BOOL)canBeUsedWithRange;
-(BOOL)isBaseSubSuperscript;
-(BOOL)canBeUsedWithBase;
-(BOOL)isNaturalSuperscript;
-(BOOL)hasSimpleArrayOfChildren;
-(BOOL)isEllipsis;
-(BOOL)isTermSeparator;
-(BOOL)isOperationSymbol;
-(BOOL)isFenceDelimiter;
-(BOOL)isFunctionName;
-(BOOL)isWordOrAbbreviation;
-(BOOL)isSimpleNumericalFraction;
-(BOOL)beginsWithSpace;
-(BOOL)endsWithSpace;
-(BOOL)isMultiRowTable;
-(BOOL)isUnlinedFraction;
-(BOOL)canFormWordStartingWithExpression:(id)arg1 ;
-(NSString *)latexFormatStringAsOver;
-(NSString *)latexFormatStringAsUnder;
-(id)localizedSegmentOrderingForKey:(id)arg1 ;
-(id)arrayWithoutNilsFromFirstChild:(id)arg1 secondChild:(id)arg2 thirdChild:(id)arg3 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 localizablePrefix:(id)arg4 localizableSuffix:(id)arg5 ;
-(id)speakableSegments:(id)arg1 withLocalizablePrefix:(id)arg2 localizableSuffix:(id)arg3 ;
-(unsigned long long)maximumFractionLevelOfSubExpressions;
-(id)latexIdentifierForFenceOperator:(id)arg1 isClosingOperator:(BOOL)arg2 ;
-(id)latexDescriptionForChildrenJoinedByString:(id)arg1 ;
-(BOOL)canBeWrappedInLatexMathIndicators;
-(id)mathMLString;
-(BOOL)isInteger;
-(NSArray *)siblings;
-(BOOL)isNumber;
-(SCRCMathExpression *)parent;
-(NSArray *)children;
-(void)setParent:(SCRCMathExpression *)arg1 ;
@end

