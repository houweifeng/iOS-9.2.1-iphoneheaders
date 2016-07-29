/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/EDFormulaBuilding.h>

@class NSString;

@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {

	EDBuildablePtg* mTree;
	int mWarning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EDBuildablePtg*)tokenAtIndex:(unsigned long long)arg1 ;
-(EDBuildablePtg*)tokenAtIndex:(unsigned long long)arg1 previousToken:(EDBuildablePtg*)arg2 ;
-(BOOL)shrinkSpanningRef:(EDBuildablePtg*)arg1 ;
-(BOOL)fixTableOfConstantsRef:(EDBuildablePtg*)arg1 ;
-(void)dealloc;
-(id)formula;
-(int)tokenTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)isSupportedFormula;
-(void)setWarning:(int)arg1 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 ;
-(int)warningType;
-(char*)setExtendedDataForLastTokenAtIndex:(unsigned)arg1 length:(unsigned)arg2 ;
-(BOOL)convertToList:(unsigned)arg1 withFinalParen:(BOOL)arg2 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 numArgs:(int)arg3 ;
-(BOOL)insertName:(unsigned long long)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned)arg3 ;
-(BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2 ;
-(BOOL)convertToList:(unsigned)arg1 ;
-(BOOL)convertToIntersect:(unsigned)arg1 ;
-(BOOL)convertLastRefsToArea;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL*)arg1 withEDLinks:(id)arg2 ;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3 ;
-(BOOL)shrinkSpanningRefAtArgIndex:(unsigned)arg1 ;
-(BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned)arg2 factor:(double)arg3 ;
-(BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(BOOL)fixTableOfConstantsRefs;
-(BOOL)uppercaseArgAtIndex:(unsigned)arg1 ;
-(void)removeTokenAtIndex:(unsigned long long)arg1 ;
-(BOOL)insertName:(unsigned long long)arg1 link:(unsigned long long)arg2 external:(BOOL)arg3 atIndex:(unsigned)arg4 ;
-(BOOL)makeArrayForLastToken:(unsigned long long)arg1 ;
-(BOOL)convertRefs:(unsigned)arg1 toTypes:(int*)arg2 ;
-(void)convertRefsInList:(EDBuildablePtg*)arg1 toType:(int)arg2 ;
-(id)stringFromStringTokenAtIndex:(unsigned long long)arg1 ;
-(void)replaceStringInStringTokenAtIndex:(unsigned long long)arg1 content:(id)arg2 ;
-(BOOL)convertRefs:(unsigned)arg1 toType:(int)arg2 ;
-(void)copyToFormula:(id)arg1 ;
-(BOOL)copyToken:(unsigned)arg1 from:(id)arg2 ;
-(BOOL)argTokenIsDurationAtIndex:(unsigned)arg1 ;
-(int)argTokenTypeAtIndex:(unsigned)arg1 ;
-(BOOL)replaceArgPtgAtIndex:(unsigned)arg1 withFormula:(id)arg2 ;
-(BOOL)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned)arg2 numArgs:(unsigned)arg3 ;
-(unsigned)removeOptionalPtgArgs:(unsigned)arg1 minArgs:(unsigned)arg2 ;
@end

