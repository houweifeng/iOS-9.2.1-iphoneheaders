/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@protocol TSCEReferenceTrackerDelegate;
@class TSCECalculationEngine, NSLock, NSMutableArray, NSString;

@interface TSCEReferenceTracker : TSPObject <TSCEFormulaOwning> {

	CFUUIDRef mUUID;
	TSCECalculationEngine* mCalculationEngine;
	BOOL mIsRegisteredWithCalculationEngine;
	id<TSCEReferenceTrackerDelegate> mDelegate;
	NSLock* mTrackedRefsLock;
	NSMutableArray* mTrackedReferences;
	unsigned long long mNextEmptyTrackedReferencesIndex;
	unsigned long long mNumberOfTrackedReferences;
	vector<TSCEFormulaID, std::__1::allocator<TSCEFormulaID> >* mFormulaIDsToRewrite;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TSCEReferenceTrackerDelegate> delegate; 
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(id)objectToArchiveInDependencyTracker;
-(SCD_Struct_TS342)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS320)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS320)arg2 rewriteSpec:(id)arg3 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned long long)numberOfTrackedReferences;
-(void)setCalculationEngine:(id)arg1 ;
-(CFUUIDRef)formulaOwnerID;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 delegate:(id)arg3 ;
-(void)registerWithCalculationEngine:(BOOL)arg1 ;
-(id)beginTrackingReferenceWithCReference:(TSCECReference*)arg1 ;
-(id)allTrackedReferences;
-(void)endTrackingReference:(id)arg1 ;
-(void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(CFUUIDRef)arg2 ;
-(BOOL)trackedReferencesExistForTable:(CFUUIDRef)arg1 ;
-(id)cellRangeWasInserted:(SCD_Struct_TS318*)arg1 ;
-(id)calculationEngine;
-(void)beginTrackingReference:(id)arg1 ;
-(void)unregisterFromCalculationEngine;
-(void)setFormulaOwnerID:(CFUUIDRef)arg1 ;
-(id)trackedReferenceAtID:(SCD_Struct_TS320)arg1 ;
-(void)setDelegate:(id<TSCEReferenceTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<TSCEReferenceTrackerDelegate>)delegate;
@end

