/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/RCAudioSessionRoutingMPAVRoutingControllerDelegate.h>

@class RCAudioSessionRoutingMPAVRoutingController, MPAVRoute, NSArray, AVAudioSessionPortDescription, NSString;

@interface RCAudioSessionRoutingController : NSObject <RCAudioSessionRoutingMPAVRoutingControllerDelegate> {

	BOOL _useVoiceMemoSettings;
	BOOL _enableProximityMonitorIfAppropriateForOutputRoute;
	BOOL _enableProximityMonitorIfAppropriateForInputRoute;
	BOOL _shouldInitializeRouteUsingUserDefaults;
	BOOL _canReportStateUsingCachedPickedOutputRoute;
	BOOL _hasYetToPickARouteAndHeadphonesArePresent;
	CFArrayRef _weakSessionRoutingAssertions;
	RCAudioSessionRoutingMPAVRoutingController* _mpRoutingController;
	MPAVRoute* _cachedPickedOutputRoute;
	NSArray* _cachedPickableOutputRoutes;
	AVAudioSessionPortDescription* _cachedPickedInputRoutePortDescription;

}

@property (assign,nonatomic) BOOL useVoiceMemoSettings;                                                            //@synthesize useVoiceMemoSettings=_useVoiceMemoSettings - In the implementation block
@property (nonatomic,readonly) unsigned long long availableRoutesMask; 
@property (nonatomic,readonly) long long selectedRouteType; 
@property (nonatomic,readonly) NSString * selectedRouteName; 
@property (nonatomic,readonly) NSString * activeInputRouteName; 
@property (nonatomic,readonly) BOOL isRoutingToPhoneCall; 
@property (assign,nonatomic) BOOL enableProximityMonitorIfAppropriateForOutputRoute;                               //@synthesize enableProximityMonitorIfAppropriateForOutputRoute=_enableProximityMonitorIfAppropriateForOutputRoute - In the implementation block
@property (assign,nonatomic) BOOL enableProximityMonitorIfAppropriateForInputRoute;                                //@synthesize enableProximityMonitorIfAppropriateForInputRoute=_enableProximityMonitorIfAppropriateForInputRoute - In the implementation block
@property (nonatomic,readonly) CFArrayRef weakSessionRoutingAssertions;                                            //@synthesize weakSessionRoutingAssertions=_weakSessionRoutingAssertions - In the implementation block
@property (nonatomic,readonly) RCAudioSessionRoutingMPAVRoutingController * mpRoutingController;                   //@synthesize mpRoutingController=_mpRoutingController - In the implementation block
@property (nonatomic,readonly) BOOL shouldInitializeRouteUsingUserDefaults;                                        //@synthesize shouldInitializeRouteUsingUserDefaults=_shouldInitializeRouteUsingUserDefaults - In the implementation block
@property (nonatomic,readonly) BOOL canReportStateUsingCachedPickedOutputRoute;                                    //@synthesize canReportStateUsingCachedPickedOutputRoute=_canReportStateUsingCachedPickedOutputRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasYetToPickARouteAndHeadphonesArePresent;                                     //@synthesize hasYetToPickARouteAndHeadphonesArePresent=_hasYetToPickARouteAndHeadphonesArePresent - In the implementation block
@property (nonatomic,readonly) MPAVRoute * cachedPickedOutputRoute;                                                //@synthesize cachedPickedOutputRoute=_cachedPickedOutputRoute - In the implementation block
@property (nonatomic,readonly) NSArray * cachedPickableOutputRoutes;                                               //@synthesize cachedPickableOutputRoutes=_cachedPickableOutputRoutes - In the implementation block
@property (nonatomic,readonly) AVAudioSessionPortDescription * cachedPickedInputRoutePortDescription;              //@synthesize cachedPickedInputRoutePortDescription=_cachedPickedInputRoutePortDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRouteController;
-(void)dealloc;
-(id)init;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)addRouteAssertion:(id)arg1 ;
-(NSString *)activeInputRouteName;
-(void)fetchActiveInputRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeRouteAssertion:(id)arg1 ;
-(void)setEnableProximityMonitorIfAppropriateForInputRoute:(BOOL)arg1 ;
-(void)setEnableProximityMonitorIfAppropriateForOutputRoute:(BOOL)arg1 ;
-(BOOL)useVoiceMemoSettings;
-(void)setUseVoiceMemoSettings:(BOOL)arg1 ;
-(id)_activeAudioRouteUsageStatisticName;
-(unsigned long long)availableRoutesMask;
-(void)showAvailableRoutes;
-(void)toggleSpeaker;
-(long long)selectedRouteType;
-(BOOL)isRoutingToPhoneCall;
-(void)_setWeakSessionRoutingAssertions:(CFArrayRef)arg1 ;
-(BOOL)_isRoutingToAirPlayDestination;
-(void)_applyUserDefaultAudioRoute;
-(BOOL)_speakerIsUserDefaultRoute;
-(void)_setShouldRouteToSpeakerUserDefaultValue:(BOOL)arg1 ;
-(void)_pickAudioDeviceRouteType:(long long)arg1 ;
-(unsigned long long)_availableRoutesMask;
-(BOOL)_speakerRouteIsPickedOrPreferred;
-(BOOL)_wirelessRouteIsPickedOrPreferred;
-(void)_updateRoutingControllerAvailableRoutes;
-(void)_updateProximitySetting;
-(AVAudioSessionPortDescription *)cachedPickedInputRoutePortDescription;
-(NSArray *)cachedPickableOutputRoutes;
-(unsigned long long)_RCAudioRouteMaskForRoutes:(id)arg1 ;
-(MPAVRoute *)cachedPickedOutputRoute;
-(void)_updateSpeakerRouteDefault;
-(id)_activeAudioSessionRoutingAssertion;
-(void)_applyUserDefaultAudioRouteAllowingDefaultOverride:(BOOL)arg1 ;
-(void)_pickSpeakerAudioDeviceRoute;
-(void)_pickHandsetAudioDeviceRoute;
-(BOOL)_routeDefaultBoolForKey:(id)arg1 nonVoiceMemoAppValue:(BOOL)arg2 ;
-(void)routingController:(id)arg1 willChangeCategoryActiveStateToActive:(BOOL)arg2 ;
-(void)routingController:(id)arg1 didChangeAirPlayMirrorDestinationToActive:(BOOL)arg2 ;
-(NSString *)selectedRouteName;
-(BOOL)enableProximityMonitorIfAppropriateForOutputRoute;
-(BOOL)enableProximityMonitorIfAppropriateForInputRoute;
-(CFArrayRef)weakSessionRoutingAssertions;
-(RCAudioSessionRoutingMPAVRoutingController *)mpRoutingController;
-(BOOL)shouldInitializeRouteUsingUserDefaults;
-(BOOL)canReportStateUsingCachedPickedOutputRoute;
-(BOOL)hasYetToPickARouteAndHeadphonesArePresent;
@end

