/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCDQueryDataSource.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface MCDPlaylistsDataSource : MCDQueryDataSource {

	BOOL _hasParentPlaylist;
	NSCache* _cachedDurations;
	NSCache* _cachedCounts;
	NSCache* _cachedRepresentativeItems;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}
-(void)dealloc;
-(BOOL)canEditEntityAtIndex:(unsigned long long)arg1 ;
-(void)deleteEntityAtIndex:(unsigned long long)arg1 ;
-(long long)editingTypeForEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(void)resetCaches;
-(BOOL)showsIndexBar;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 ;
-(void)_invalidateCalculatedEntities;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(double)cachedDurationForEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)isFolderForEntityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedCountForEntityAtIndex:(unsigned long long)arg1 ;
-(id)cachedRepresentativeItemForEntityAtIndex:(unsigned long long)arg1 ;
-(id)_representativePlaylistForEntityAtIndex:(unsigned long long)arg1 ;
-(void)_breadthFirstVisitNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitor:(/*^block*/id)arg2 ;
-(void)_bfsNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitedPlaylistPIDs:(id)arg2 stop:(BOOL*)arg3 visitor:(/*^block*/id)arg4 ;
-(double)durationForEntityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countForEntityAtIndex:(unsigned long long)arg1 ;
-(id)representativeItemForEntityAtIndex:(unsigned long long)arg1 ;
@end

