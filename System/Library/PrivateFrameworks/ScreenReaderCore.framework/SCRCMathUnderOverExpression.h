/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathUnderOverExpression : SCRCMathExpression {

	SCRCMathExpression* _under;
	SCRCMathExpression* _over;
	SCRCMathExpression* _base;

}

@property (nonatomic,retain) SCRCMathExpression * under;              //@synthesize under=_under - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * over;               //@synthesize over=_over - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * base;               //@synthesize base=_base - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(SCRCMathExpression *)base;
-(void)setBase:(SCRCMathExpression *)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)subExpressions;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)latexMathModeDescription;
-(unsigned long long)fractionLevel;
-(BOOL)isRangeSubSuperscript;
-(void)setUnder:(SCRCMathExpression *)arg1 ;
-(void)setOver:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)under;
-(SCRCMathExpression *)over;
-(id)mathMLString;
@end

