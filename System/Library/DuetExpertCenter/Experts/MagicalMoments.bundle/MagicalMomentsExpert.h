/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DuetExpertCenter/Experts/MagicalMoments.bundle/MagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECExpert.h>
#import <MagicalMoments/_DECDataProtectionMonitorDelegate.h>
#import <libobjc.A.dylib/_DECExpertDelegate.h>

@protocol OS_dispatch_queue;
@class RTRoutineManager, AudioDisconnectListener, MyAppsSettingsMonitor, _DECMusicStateProcessor, NSObject, DECMMTelephonyConnection, _DECDataProtectionMonitor, RTPredictedApplication, NSString, NSDate;

@interface MagicalMomentsExpert : _DECExpert <_DECDataProtectionMonitorDelegate, _DECExpertDelegate> {

	BOOL _unlockedSinceBoot;
	RTRoutineManager* _routineManager;
	AudioDisconnectListener* _disconnectListener;
	MyAppsSettingsMonitor* _myAppsSettingsMonitor;
	_DECMusicStateProcessor* _musicStateProcessor;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _nowPlayingStatusQueue;
	DECMMTelephonyConnection* _ctConnection;
	_DECDataProtectionMonitor* _dataProtectionMonitor;
	RTPredictedApplication* _mostRecentPrediction;
	NSString* _mostRecentNowPlayingApp;
	NSDate* _dateOfLastNowPlayingEvent;
	long long _encryptedDataAvailability;
	long long _dataProtectionStatus;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;                               //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) AudioDisconnectListener * disconnectListener;                    //@synthesize disconnectListener=_disconnectListener - In the implementation block
@property (nonatomic,retain) MyAppsSettingsMonitor * myAppsSettingsMonitor;                   //@synthesize myAppsSettingsMonitor=_myAppsSettingsMonitor - In the implementation block
@property (nonatomic,retain) _DECMusicStateProcessor * musicStateProcessor;                   //@synthesize musicStateProcessor=_musicStateProcessor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nowPlayingStatusQueue;              //@synthesize nowPlayingStatusQueue=_nowPlayingStatusQueue - In the implementation block
@property (nonatomic,retain) DECMMTelephonyConnection * ctConnection;                         //@synthesize ctConnection=_ctConnection - In the implementation block
@property (nonatomic,retain) _DECDataProtectionMonitor * dataProtectionMonitor;               //@synthesize dataProtectionMonitor=_dataProtectionMonitor - In the implementation block
@property (nonatomic,retain) RTPredictedApplication * mostRecentPrediction;                   //@synthesize mostRecentPrediction=_mostRecentPrediction - In the implementation block
@property (nonatomic,retain) NSString * mostRecentNowPlayingApp;                              //@synthesize mostRecentNowPlayingApp=_mostRecentNowPlayingApp - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastNowPlayingEvent;                              //@synthesize dateOfLastNowPlayingEvent=_dateOfLastNowPlayingEvent - In the implementation block
@property (assign,nonatomic) long long encryptedDataAvailability;                             //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (assign,nonatomic) BOOL unlockedSinceBoot;                                          //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (assign,nonatomic) long long dataProtectionStatus;                                  //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_predictionPopulatesStark:(id)arg1 ;
+(BOOL)_predictionIsAudio:(id)arg1 ;
+(BOOL)facetimeActive;
+(BOOL)_predictionPopulatesSpringboard:(id)arg1 ;
+(BOOL)_predictionPopulatesNowPlaying:(id)arg1 ;
+(BOOL)_predictionPopulatesContinuity:(id)arg1 ;
-(NSDate *)dateOfLastNowPlayingEvent;
-(void)_clearAllRecommendations;
-(void)_publishPredictionWithPredictedApplication:(id)arg1 ;
-(BOOL)_recommendingAudioWhileAlreadyPlaying:(id)arg1 ;
-(void)setMyAppsSettingsMonitor:(MyAppsSettingsMonitor *)arg1 ;
-(long long)rtReasonToDECReason:(long long)arg1 ;
-(DECMMTelephonyConnection *)ctConnection;
-(NSString *)mostRecentNowPlayingApp;
-(void)setMostRecentNowPlayingApp:(NSString *)arg1 ;
-(void)setDateOfLastNowPlayingEvent:(NSDate *)arg1 ;
-(void)setMostRecentPrediction:(RTPredictedApplication *)arg1 ;
-(NSObject*<OS_dispatch_queue>)nowPlayingStatusQueue;
-(void)setNowPlayingStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MyAppsSettingsMonitor *)myAppsSettingsMonitor;
-(_DECMusicStateProcessor *)musicStateProcessor;
-(void)_populateReasonForPrediction:(id)arg1 withPredictedApplication:(id)arg2 ;
-(RTPredictedApplication *)mostRecentPrediction;
-(void)_updatePredictionBasedOnPreviousDataProtectionStatus:(long long)arg1 previousEncryptedDataAvailability:(long long)arg2 ;
-(void)handleNowPlayingInfoDidChange;
-(void)_handleNowPlayingInfoDidChange;
-(id)_expiryForReason:(long long)arg1 ;
-(AudioDisconnectListener *)disconnectListener;
-(void)setMusicStateProcessor:(_DECMusicStateProcessor *)arg1 ;
-(void)setCtConnection:(DECMMTelephonyConnection *)arg1 ;
-(_DECDataProtectionMonitor *)dataProtectionMonitor;
-(void)setDataProtectionMonitor:(_DECDataProtectionMonitor *)arg1 ;
-(void)setDisconnectListener:(AudioDisconnectListener *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)expert:(id)arg1 predictionForCategory:(unsigned long long)arg2 consumer:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)expert:(id)arg1 receiveFeedback:(id)arg2 category:(unsigned long long)arg3 consumer:(unsigned long long)arg4 ;
-(void)trainExpert:(id)arg1 ;
-(id)saveModelForExpert:(id)arg1 byteLimit:(unsigned long long)arg2 ;
-(void)expert:(id)arg1 restoreModel:(id)arg2 ;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(void)dataProtectionMonitor:(id)arg1 encryptedDataAvailbilityDidChange:(long long)arg2 ;
-(void)dataProtectionMonitor:(id)arg1 unlockedSinceBoot:(BOOL)arg2 ;
-(void)dataProtectionMonitor:(id)arg1 dataProtectionStatusDidChange:(long long)arg2 ;
-(long long)dataProtectionStatus;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(BOOL)unlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(/*^block*/id)arg1 ;
-(void)fetchMediaRemoteNowPlayingApplicationBundleId:(/*^block*/id)arg1 ;
@end

