/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ISDialogOperation, MPUserNotification, RadioGetTracksRequest, NSLock, RadioStationMatchContext, RadioPlaybackContext, SSVPlaybackLease, RadioRequestContext, RadioStation;

@interface RURadioGetTracksOperation : NSOperation {

	ISDialogOperation* _dialogOperation;
	MPUserNotification* _explicitUserNotification;
	RadioGetTracksRequest* _getTracksRequest;
	BOOL _hasSetWillContinuePlayback;
	NSLock* _lock;
	RadioStationMatchContext* _nowPlayingMatchContext;
	unsigned long long _numberOfTracks;
	RadioPlaybackContext* _playbackContext;
	SSVPlaybackLease* _playbackLease;
	RadioRequestContext* _requestContext;
	/*^block*/id _responseBlock;
	BOOL _shouldIncludeStationInResponse;
	RadioStation* _station;
	RadioStationMatchContext* _stationMatchContext;
	BOOL _willContinuePlayback;
	long long _reasonType;

}

@property (nonatomic,retain) RadioStationMatchContext * nowPlayingMatchContext; 
@property (assign) unsigned long long numberOfTracks; 
@property (copy) RadioPlaybackContext * playbackContext; 
@property (retain) SSVPlaybackLease * playbackLease; 
@property (readonly) long long reasonType;                                                   //@synthesize reasonType=_reasonType - In the implementation block
@property (retain) RadioRequestContext * requestContext; 
@property (copy) id responseBlock; 
@property (assign) BOOL shouldIncludeStationInResponse; 
@property (retain) RadioStation * station; 
@property (retain) RadioStationMatchContext * stationMatchContext; 
@property (assign,nonatomic) BOOL willContinuePlayback; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)main;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
-(RadioStation *)station;
-(RadioStationMatchContext *)stationMatchContext;
-(RadioStationMatchContext *)nowPlayingMatchContext;
-(BOOL)willContinuePlayback;
-(id)initWithReasonType:(long long)arg1 ;
-(void)setNumberOfTracks:(unsigned long long)arg1 ;
-(void)setPlaybackContext:(RadioPlaybackContext *)arg1 ;
-(id)_newGetTracksRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3 ;
-(id)_runRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3 ;
-(id)_runFullGetTracksProcessAllowingNoAvailableVersionDialog:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3 ;
-(id)_heartbeatTokenDataAllowingDelay:(BOOL)arg1 error:(id*)arg2 ;
-(RadioPlaybackContext *)playbackContext;
-(long long)reasonType;
-(unsigned long long)numberOfTracks;
-(BOOL)shouldIncludeStationInResponse;
-(void)setShouldIncludeStationInResponse:(BOOL)arg1 ;
-(SSVPlaybackLease *)playbackLease;
-(void)setPlaybackLease:(SSVPlaybackLease *)arg1 ;
-(RadioRequestContext *)requestContext;
-(void)setRequestContext:(RadioRequestContext *)arg1 ;
-(void)setStation:(RadioStation *)arg1 ;
-(void)setStationMatchContext:(RadioStationMatchContext *)arg1 ;
-(void)setWillContinuePlayback:(BOOL)arg1 ;
-(void)setNowPlayingMatchContext:(RadioStationMatchContext *)arg1 ;
@end

