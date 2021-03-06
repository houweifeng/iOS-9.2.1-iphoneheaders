/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@class NSSet, NSArray, MFSparseMutable64IndexSet;

@interface MMRowsChangedContext : NSDictionary {

	NSSet* _insertedIndexPaths;
	NSSet* _removedIndexPaths;
	NSSet* _updatedIndexPaths;
	NSSet* _destinationIndexPaths;
	NSSet* _relocatedIndexPaths;
	NSArray* _addedMessageInfos;
	NSArray* _removedMessageInfos;
	MFSparseMutable64IndexSet* _mergedConversations;
	unsigned long long _startingMessageCount;
	unsigned long long _endingMessageCount;

}

@property (nonatomic,retain) NSSet * insertedIndexPaths;                                   //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * removedIndexPaths;                                    //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * updatedIndexPaths;                                    //@synthesize updatedIndexPaths=_updatedIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * destinationIndexPaths;                                //@synthesize destinationIndexPaths=_destinationIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * relocatedIndexPaths;                                  //@synthesize relocatedIndexPaths=_relocatedIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * addedMessageInfos;                                  //@synthesize addedMessageInfos=_addedMessageInfos - In the implementation block
@property (nonatomic,retain) NSArray * removedMessageInfos;                                //@synthesize removedMessageInfos=_removedMessageInfos - In the implementation block
@property (nonatomic,retain) MFSparseMutable64IndexSet * mergedConversations;              //@synthesize mergedConversations=_mergedConversations - In the implementation block
@property (assign,nonatomic) unsigned long long startingMessageCount;                      //@synthesize startingMessageCount=_startingMessageCount - In the implementation block
@property (assign,nonatomic) unsigned long long endingMessageCount;                        //@synthesize endingMessageCount=_endingMessageCount - In the implementation block
-(NSSet *)removedIndexPaths;
-(NSSet *)updatedIndexPaths;
-(NSSet *)destinationIndexPaths;
-(NSSet *)relocatedIndexPaths;
-(NSArray *)addedMessageInfos;
-(NSArray *)removedMessageInfos;
-(MFSparseMutable64IndexSet *)mergedConversations;
-(void)setRemovedIndexPaths:(NSSet *)arg1 ;
-(void)setRemovedMessageInfos:(NSArray *)arg1 ;
-(void)setInsertedIndexPaths:(NSSet *)arg1 ;
-(void)setUpdatedIndexPaths:(NSSet *)arg1 ;
-(void)setMergedConversations:(MFSparseMutable64IndexSet *)arg1 ;
-(void)setStartingMessageCount:(unsigned long long)arg1 ;
-(void)setEndingMessageCount:(unsigned long long)arg1 ;
-(void)setAddedMessageInfos:(NSArray *)arg1 ;
-(void)setRelocatedIndexPaths:(NSSet *)arg1 ;
-(void)setDestinationIndexPaths:(NSSet *)arg1 ;
-(unsigned long long)startingMessageCount;
-(unsigned long long)endingMessageCount;
-(void)dealloc;
-(id)description;
-(NSSet *)insertedIndexPaths;
-(BOOL)hasChanges;
@end

