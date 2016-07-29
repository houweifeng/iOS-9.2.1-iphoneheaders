/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconIndexNodeObserver.h>

@class SBFMappedImageCache, NSString;

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver> {

	SBFMappedImageCache* _imageCache;
	long long _invalidatedLocations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)homeScreenSnapshot;
-(id)lockScreenSnapshot;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)invalidateSnapshotsForLocations:(long long)arg1 ;
-(void)_modelWillLayout;
-(void)_modelDidLayout;
-(void)_backlightFadeFinished;
-(id)_lockScreenSnapshotProvider;
-(id)_homeScreenSnapshotProvider;
-(void)regenerateSnapshotsForLocations:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithImageCache:(id)arg1 ;
@end

