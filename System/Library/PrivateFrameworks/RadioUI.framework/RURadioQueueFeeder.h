/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPUQueueBehaviorManaging.h>

@class RURadioAdObserver, NSMapTable, MPAVItem, MPPlaceholderAVItem, NSArray, RadioStation, RadioStationSkipController, NSMutableSet, NSString;

@interface RURadioQueueFeeder : MPQueueFeeder <MPUQueueBehaviorManaging> {

	RURadioAdObserver* _adObserver;
	NSMapTable* _adSlotToAllAdTracks;
	NSMapTable* _adSlotToInsertedAdTracks;
	NSMapTable* _adSlotToRadioTrack;
	BOOL _canSeek;
	MPAVItem* _currentItem;
	BOOL _didReceiveTracklistEnd;
	unsigned long long _feederRevisionID;
	NSMapTable* _fetchingTracksCompletionHandlersByStation;
	BOOL _hasReceivedStreamTrack;
	BOOL _hasVerifiedCloudStatus;
	BOOL _isPreparingStation;
	long long _maximumGetTracksRetryCount;
	MPPlaceholderAVItem* _placeholderAVItem;
	NSArray* _previousDatabaseTrackPlaybackDescriptorQueue;
	NSMapTable* _radioTrackToAdSlot;
	RadioStation* _station;
	RadioStationSkipController* _stationSkipController;
	NSMapTable* _stationTracklistRetrievalRetryCount;
	NSArray* _tracks;
	NSMutableSet* _visibleAdSlots;
	BOOL _wasUsingBackgroundNetwork;

}

@property (nonatomic,retain) RadioStation * station; 
@property (nonatomic,copy,readonly) NSArray * allPreparedAdSlotRadioTracks; 
@property (nonatomic,copy) NSArray * tracks;                                             //@synthesize tracks=_tracks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsUserVisibleUpcomingItems; 
@property (nonatomic,readonly) BOOL canSeek; 
@property (nonatomic,readonly) BOOL canSkipToPreviousItem; 
@property (nonatomic,readonly) long long playbackMode; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
+(BOOL)isExplicitTracksEnabled;
+(id)_tracksWithPromotionalContentFromTracks:(id)arg1 ;
+(void)_updateIsExplicitContentRestrictedAndPostNotification:(BOOL)arg1 removeTracks:(BOOL)arg2 ;
+(void)_explicitContentAllowedDidChangeNotification:(id)arg1 ;
+(BOOL)isUserDefaultExplicitTracksEnabled;
+(BOOL)isProfileExplicitContentRestricted;
+(void)setIgnoresUserDefaultExplicitTracksEnabled:(BOOL)arg1 ;
+(void)setUserDefaultExplicitTracksEnabled:(BOOL)arg1 ;
+(long long)maximumNumberOfTracksToFetch;
+(id)_tracksByRemovingPromotionalContentFromTracks:(id)arg1 ;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)allowsUserVisibleUpcomingItems;
-(BOOL)shouldReuseQueueFeederForPlaybackContext:(id)arg1 ;
-(void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2 ;
-(BOOL)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2 returningError:(id*)arg3 ;
-(unsigned long long)_indexOfItem:(id)arg1 ;
-(RadioStation *)station;
-(NSArray *)tracks;
-(id)MPU_contentItemIdentifierCollection;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(NSArray *)allPreparedAdSlotRadioTracks;
-(id)preparedAdSlotForRadioTrack:(id)arg1 ;
-(void)_adSlotAdTracksDidChangeNotification:(id)arg1 ;
-(void)_adTrackActionDidFinishNotification:(id)arg1 ;
-(void)_adTrackActionWillBeginNotification:(id)arg1 ;
-(void)_adTrackDidFailToLoadNotification:(id)arg1 ;
-(void)_updateForLoadedStoreBag:(id)arg1 ;
-(void)_storeBagDidLoadNotification:(id)arg1 ;
-(void)_verifyCloudStatusIfNeeded;
-(BOOL)_hasReceivedStreamTrack;
-(id)_trackAtIndex:(unsigned long long)arg1 shouldFetchAddtionalTracks:(BOOL)arg2 ;
-(BOOL)_canHavePlaceholderTrack;
-(void)_setAdSlot:(id)arg1 forRadioTrack:(id)arg2 ;
-(void)_applyTracksForAdSlot:(id)arg1 radioTrack:(id)arg2 currentPlayingItem:(id)arg3 toTracks:(id)arg4 ;
-(void)setTracks:(NSArray *)arg1 ;
-(void)_updateTracksForAdSlot:(id)arg1 radioTrack:(id)arg2 ;
-(id)_adSlotForAdTrack:(id)arg1 ;
-(void)_sendContentsDidChangeWithCurrentItem;
-(id)_currentTrackPlaybackDescriptorQueueWithCurrentItem:(id)arg1 shouldIncludePlaybackInformation:(BOOL)arg2 skipDate:(id)arg3 ;
-(unsigned long long)_indexOfCurrentItem;
-(void)_updateWithTracks:(id)arg1 tracklistActionType:(long long)arg2 options:(long long)arg3 ;
-(void)_removeAllTracks;
-(void)_fetchAdditionalTracksWithBaseIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_fetchNextTrackAdSlotIfNeeded;
-(void)_updateTracksForChangedTrackPlaybackDescriptorQueue;
-(void)_configurePlaceholderAVItem;
-(void)_numberOfAvailableSkipsDidChangeNotification:(id)arg1 ;
-(void)_performGetTracksOperationForStation:(id)arg1 withNumberOfTracks:(long long)arg2 ;
-(void)_fetchAdSlotIfNeededForRadioTrack:(id)arg1 inStation:(id)arg2 ;
-(unsigned long long)_indexOfItem:(id)arg1 inTracks:(id)arg2 ;
-(id)_tracksByRemovingPlayedTracks:(id)arg1 ;
-(BOOL)shouldContinuePlaybackForNetworkType:(long long)arg1 player:(id)arg2 ;
-(BOOL)preventsHardQueueModificationsForItem:(id)arg1 ;
-(unsigned long long)itemCount;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isRadioQueueFeeder;
-(id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3 ;
-(id)localizedPositionInPlaylistString:(id)arg1 ;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(unsigned long long)realRepeatType;
-(BOOL)canSkipItem:(id)arg1 ;
-(BOOL)canSkipToPreviousItem;
-(SCD_Struct_RU1)skipLimit;
-(void)setStation:(RadioStation *)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(Class)itemClass;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ;
-(BOOL)canReorder;
-(unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1 ;
-(id)audioSessionModeForItemAtIndex:(unsigned long long)arg1 ;
-(id)copyRawItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasValidItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)playerPreparesItemsForPlaybackAsynchronously;
-(void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1 ;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(BOOL)canSeek;
@end

