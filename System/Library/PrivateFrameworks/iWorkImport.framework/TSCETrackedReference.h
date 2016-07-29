/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCETrackedReference : NSObject <NSCopying> {

	TSCEASTNodeArray* mAST;
	SCD_Struct_TS320 mFormulaID;

}
-(id)displayStringWithCalculationEngine:(id)arg1 ;
-(id)initFromArchive:(const TrackedReferenceArchive*)arg1 ;
-(id)referenceEnumeratorWithCalculationEngine:(id)arg1 referenceTrackerID:(CFUUIDRef)arg2 ;
-(id)initByCopyingASTNodeArray:(TSCEASTNodeArray*)arg1 formulaID:(SCD_Struct_TS320)arg2 ;
-(TSCEASTNodeArray*)ast;
-(SCD_Struct_TS320)formulaID;
-(id)initWithCReference:(TSCECReference*)arg1 formulaID:(SCD_Struct_TS320)arg2 ;
-(void)replaceContentsWithContentsOfTrackedReference:(id)arg1 ;
-(void)setFormulaID:(SCD_Struct_TS320)arg1 ;
-(void)registerWithCalculationEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 ;
-(BOOL)isValidWithReferenceTracker:(id)arg1 ;
-(void)encodeToArchive:(TrackedReferenceArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithTrackedReferenceTSPObjectDeprecated:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

