/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TSCEEdgeListPrinter;

@interface TSCECellDependencyRowPrinter : NSObject {

	NSString* _cellID;
	unsigned long long _dirtyPrecedentCount;
	BOOL _isFormula;
	BOOL _isInCycle;
	TSCEEdgeListPrinter* _precedentsList;
	TSCEEdgeListPrinter* _dependentsList;

}

@property (nonatomic,retain) NSString * cellID;                                   //@synthesize cellID=_cellID - In the implementation block
@property (assign,nonatomic) unsigned long long dirtyPrecedentCount;              //@synthesize dirtyPrecedentCount=_dirtyPrecedentCount - In the implementation block
@property (assign,nonatomic) BOOL isFormula;                                      //@synthesize isFormula=_isFormula - In the implementation block
@property (assign,nonatomic) BOOL isInCycle;                                      //@synthesize isInCycle=_isInCycle - In the implementation block
-(id)initWithCellID:(id)arg1 dirtyPrecedentCount:(unsigned long long)arg2 ;
-(void)setIsFormula:(BOOL)arg1 ;
-(void)setIsInCycle:(BOOL)arg1 ;
-(void)addPrecedentWithCellID:(id)arg1 forOwner:(id)arg2 ;
-(void)addDependentWithCellID:(id)arg1 forOwner:(id)arg2 ;
-(long long)tsce_numericCompare:(id)arg1 ;
-(void)setDirtyPrecedentCount:(unsigned long long)arg1 ;
-(unsigned long long)dirtyPrecedentCount;
-(BOOL)isInCycle;
-(BOOL)isFormula;
-(id)stringForDependencyRow;
-(void)dealloc;
-(NSString *)cellID;
-(void)setCellID:(NSString *)arg1 ;
@end

