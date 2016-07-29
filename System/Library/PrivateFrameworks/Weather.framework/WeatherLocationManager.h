/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol CLLocationManagerDelegate;
@class CLLocationManager, NSTimer, NSDate, NSString;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate> {

	BOOL _locationTrackingIsReady;
	BOOL _locationUpdatesEnabled;
	BOOL _isInternalBuild;
	int _authorizationStatus;
	float _lastLocationAccuracy;
	id<CLLocationManagerDelegate> _delegate;
	CLLocationManager* _locationManager;
	unsigned long long _updateInterval;
	double _oldestAllowedUpdateTime;
	NSTimer* _delayedUpdateTimer;
	NSTimer* _accuracyFallbackTimer;
	NSDate* _lastLocationTimeStamp;
	double _lastLocationUpdateTime;
	double _nextPlannedUpdate;
	SCD_Struct_We0 _lastLocationCoord;

}

@property (assign,nonatomic) int authorizationStatus;                                    //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL locationTrackingIsReady;                               //@synthesize locationTrackingIsReady=_locationTrackingIsReady - In the implementation block
@property (assign,nonatomic) BOOL locationUpdatesEnabled;                                //@synthesize locationUpdatesEnabled=_locationUpdatesEnabled - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                        //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) unsigned long long updateInterval;                          //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) double oldestAllowedUpdateTime;                             //@synthesize oldestAllowedUpdateTime=_oldestAllowedUpdateTime - In the implementation block
@property (nonatomic,retain) NSTimer * delayedUpdateTimer;                               //@synthesize delayedUpdateTimer=_delayedUpdateTimer - In the implementation block
@property (nonatomic,retain) NSTimer * accuracyFallbackTimer;                            //@synthesize accuracyFallbackTimer=_accuracyFallbackTimer - In the implementation block
@property (assign,nonatomic) SCD_Struct_We0 lastLocationCoord;                           //@synthesize lastLocationCoord=_lastLocationCoord - In the implementation block
@property (nonatomic,copy) NSDate * lastLocationTimeStamp;                               //@synthesize lastLocationTimeStamp=_lastLocationTimeStamp - In the implementation block
@property (assign,nonatomic) float lastLocationAccuracy;                                 //@synthesize lastLocationAccuracy=_lastLocationAccuracy - In the implementation block
@property (assign,nonatomic) double lastLocationUpdateTime;                              //@synthesize lastLocationUpdateTime=_lastLocationUpdateTime - In the implementation block
@property (assign,nonatomic) double nextPlannedUpdate;                                   //@synthesize nextPlannedUpdate=_nextPlannedUpdate - In the implementation block
@property (assign,nonatomic) BOOL isInternalBuild;                                       //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWeatherLocationManager;
+(void)clearSharedLocationManager;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CLLocationManagerDelegate>)delegate;
-(unsigned long long)updateInterval;
-(void)setUpdateInterval:(unsigned long long)arg1 ;
-(id)location;
-(int)authorizationStatus;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(BOOL)isInternalBuild;
-(void)cancelAccuracyFallbackTimer;
-(void)cancelDelayedUpdateTimer;
-(int)forceLoadingAuthorizationStatus;
-(void)setLocationTrackingActive:(BOOL)arg1 ;
-(void)clearLastLocationUpdateTime;
-(void)setLocationTrackingIsReady:(BOOL)arg1 ;
-(void)setLastLocationUpdateTime:(double)arg1 ;
-(double)lastLocationUpdateTime;
-(void)setLocationUpdatesEnabled:(BOOL)arg1 ;
-(void)scheduleDelayedUpdate:(double)arg1 ;
-(double)oldestAllowedUpdateTime;
-(void)setOldestAllowedUpdateTime:(double)arg1 ;
-(NSDate *)lastLocationTimeStamp;
-(void)setLastLocationTimeStamp:(NSDate *)arg1 ;
-(float)lastLocationAccuracy;
-(NSTimer *)delayedUpdateTimer;
-(void)setNextPlannedUpdate:(double)arg1 ;
-(void)delayedUpdateTimerDidFire:(id)arg1 ;
-(void)setDelayedUpdateTimer:(NSTimer *)arg1 ;
-(SCD_Struct_We0)lastLocationCoord;
-(void)accuracyFallbackTimerDidFire:(id)arg1 ;
-(void)setAccuracyFallbackTimer:(NSTimer *)arg1 ;
-(void)setLastLocationCoord:(SCD_Struct_We0)arg1 ;
-(void)setLastLocationAccuracy:(float)arg1 ;
-(BOOL)locationUpdatesEnabled;
-(NSTimer *)accuracyFallbackTimer;
-(BOOL)localWeatherAuthorized;
-(void)askForLocationManagerAuthorization;
-(void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 watchKitExtension:(BOOL)arg3 ;
-(BOOL)isLocalStaleOrOutOfDate;
-(void)forceLocationUpdate;
-(void)clearLocalWeatherUpdateState;
-(BOOL)locationTrackingIsReady;
-(double)nextPlannedUpdate;
-(void)setIsInternalBuild:(BOOL)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(void)setAuthorizationStatus:(int)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
@end

