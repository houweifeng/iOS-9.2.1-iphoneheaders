/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet, NSIndexSet;

@interface PLImportSessionInfo : NSObject {

	NSMutableIndexSet* _importIndexes;
	NSMutableIndexSet* _importInProgressIndexes;
	NSMutableIndexSet* _importErrorIndexes;
	NSMutableIndexSet* _importCompleteIndexes;
	BOOL _importComplete;
	BOOL _importStopped;
	BOOL _importingSelection;

}

@property (assign,nonatomic) BOOL importComplete;                                  //@synthesize importComplete=_importComplete - In the implementation block
@property (assign,nonatomic) BOOL importStopped;                                   //@synthesize importStopped=_importStopped - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * importIndexes;                  //@synthesize importIndexes=_importIndexes - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * inProgressIndexes;              //@synthesize importInProgressIndexes=_importInProgressIndexes - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * errorIndexes;                   //@synthesize importErrorIndexes=_importErrorIndexes - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * completedIndexes;               //@synthesize importCompleteIndexes=_importCompleteIndexes - In the implementation block
@property (assign,nonatomic) BOOL importingSelection;                              //@synthesize importingSelection=_importingSelection - In the implementation block
-(void)dealloc;
-(void)removeIndex:(unsigned long long)arg1 ;
-(BOOL)_isImportCompleteForIndex:(unsigned long long)arg1 ;
-(BOOL)importComplete;
-(NSIndexSet *)inProgressIndexes;
-(NSIndexSet *)errorIndexes;
-(NSIndexSet *)completedIndexes;
-(void)beginImportForIndex:(unsigned long long)arg1 ;
-(NSIndexSet *)importIndexes;
-(void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(unsigned long long)arg2 ;
-(void)completeImportForIndex:(unsigned long long)arg1 error:(BOOL)arg2 ;
-(void)setImportComplete:(BOOL)arg1 ;
-(BOOL)importingSelection;
-(BOOL)importStopped;
-(id)initWithImportIndexes:(id)arg1 ;
-(void)setImportingSelection:(BOOL)arg1 ;
-(void)addIndexToImport:(unsigned long long)arg1 ;
-(void)setImportStopped:(BOOL)arg1 ;
@end

