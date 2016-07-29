/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

@class PLShuffledAlbum, PLAssetContainerChangeNotification, NSIndexSet, NSOrderedSet;

@interface PLShuffledAlbumChangeNotification : PLAssetContainerChangeNotification {

	PLShuffledAlbum* _album;
	PLAssetContainerChangeNotification* _backingNotification;
	NSIndexSet* _changedIndexes;
	NSOrderedSet* _newSet;

}
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)object;
-(void)_calculateDiffs;
-(id)_diffDescription;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(BOOL)countDidChange;
-(id)initWithShuffledAlbum:(id)arg1 albumChangeNotification:(id)arg2 ;
-(id)album;
-(id)insertedIndexes;
-(id)changedIndexes;
-(BOOL)shouldReload;
-(id)deletedIndexes;
@end

