/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPMediaPlaylist, MPMediaItem;


@protocol MusicGeniusMixQueueFeederDataSource <NSObject>
@property (nonatomic,readonly) MPMediaPlaylist * mixPlaylist; 
@property (nonatomic,readonly) MPMediaItem * requiredInitialMediaItem; 
@required
-(MPMediaPlaylist *)mixPlaylist;
-(unsigned long long)geniusMixQueueFeederMediaItemCount:(id)arg1;
-(id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned long long)arg2;
-(unsigned long long)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
-(id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned long long)arg2;
-(MPMediaItem *)requiredInitialMediaItem;

@end

