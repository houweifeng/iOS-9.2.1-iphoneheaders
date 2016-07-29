/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaArray.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPMediaLibraryResultSet, OS_dispatch_queue;
@class MPWeakRef, MPMediaQuerySectionInfo, NSMutableArray, NSObject, MPMediaQueryCriteria;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {

	id<MPMediaLibraryResultSet> _resultSet;
	Class _entityClass;
	MPWeakRef* _libraryWeakRef;
	MPMediaQuerySectionInfo* _sectionInfo;
	NSMutableArray* _entities;
	NSObject*<OS_dispatch_queue> _entitiesQueue;
	MPMediaQueryCriteria* _queryCriteria;
	long long _revision;

}

@property (nonatomic,readonly) id<MPMediaLibraryResultSet> resultSet;              //@synthesize resultSet=_resultSet - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sectionInfo;
-(id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4 ;
-(BOOL)isQueryResultSetInvalidated;
-(id<MPMediaLibraryResultSet>)resultSet;
@end

