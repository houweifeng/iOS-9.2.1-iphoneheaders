/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetMakeReadyForInspectionLoader.h>

@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;
	BOOL _shouldCacheDuration;
	SCD_Struct_CM5 _cachedDuration;

}

@property (getter=_playbackItem,nonatomic,readonly) OpaqueFigPlaybackItemRef playbackItem; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_CM5)duration;
-(void)cancelLoading;
-(id)initWithURL:(id)arg1 playbackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(Class)_classForTrackInspectors;
-(id)assetInspector;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(BOOL)_inspectionRequiresAFormatReader;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(void)_addFigObjectNotifications;
-(void)_removeFigObjectNotifications;
-(id)_playbackItemPropertiesForKeys:(id)arg1 ;
-(void)finalize;
@end

