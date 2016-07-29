/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath, MCDPCModel;

@interface _MCDPCNotifcationCallbackHelper : NSObject {

	BOOL _playback;
	/*^block*/id _loadCompletion;
	/*^block*/id _playCompletion;
	NSIndexPath* _indexPath;
	MCDPCModel* _model;
	id _selfRef;

}
-(void)dealloc;
-(void)invalidate;
-(void)begin;
-(void)_load;
-(void)_beginPlayback;
-(void)_finishLoadingNotification:(id)arg1 ;
-(id)initForLoadingIndexPath:(id)arg1 withModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initForPlaybackAtIndexPath:(id)arg1 withModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishPlaybackNotification:(id)arg1 ;
-(BOOL)_noteHasCorrectIndexPath:(id)arg1 ;
-(id)_errorForNotification:(id)arg1 ;
@end

