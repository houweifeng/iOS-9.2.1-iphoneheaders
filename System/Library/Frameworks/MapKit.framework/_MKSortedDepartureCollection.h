/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSMutableArray, NSMutableSet;

@interface _MKSortedDepartureCollection : NSObject {

	NSMapTable* _sequenceForDeparture;
	NSMapTable* _indexForDeparture;
	NSMutableArray* _sortedDepartures;
	NSMutableSet* _groupedSequences;

}

@property (nonatomic,retain) NSMutableArray * sortedDepartures;              //@synthesize sortedDepartures=_sortedDepartures - In the implementation block
@property (nonatomic,retain) NSMutableSet * groupedSequences;                //@synthesize groupedSequences=_groupedSequences - In the implementation block
-(id)init;
-(void)setSequence:(id)arg1 forDeparture:(id)arg2 ;
-(void)setIndexInSequence:(unsigned long long)arg1 forDeparture:(id)arg2 ;
-(id)sequenceForDeparture:(id)arg1 ;
-(NSMutableArray *)sortedDepartures;
-(unsigned long long)indexInSequenceForDeparture:(id)arg1 ;
-(void)setGroupedSequences:(NSMutableSet *)arg1 ;
-(NSMutableSet *)groupedSequences;
-(void)setSortedDepartures:(NSMutableArray *)arg1 ;
@end

