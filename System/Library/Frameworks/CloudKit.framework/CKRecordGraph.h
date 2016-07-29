/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSArray;

@interface CKRecordGraph : NSObject {

	NSMutableSet* _nodes;
	NSArray* _sortedRecords;

}

@property (nonatomic,copy) NSMutableSet * nodes;                   //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) NSArray * sortedRecords;              //@synthesize sortedRecords=_sortedRecords - In the implementation block
+(id)topologicallySortRecords:(id)arg1 withError:(id*)arg2 ;
-(id)init;
-(id)description;
-(void)setSortedRecords:(NSArray *)arg1 ;
-(NSArray *)sortedRecords;
-(NSMutableSet *)nodes;
-(void)setNodes:(NSMutableSet *)arg1 ;
-(BOOL)addRecords:(id)arg1 error:(id*)arg2 ;
-(id)recordsByTopologicalSortWithError:(id*)arg1 ;
@end

