/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeIDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <PBBridgeSupport/PBBridgeGizmoProtocol.h>

@protocol PBBridgeConnectionDelegate;
@class NSString, UIAlertView, NSTimer;

@interface PBBridgeGizmoController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, PBBridgeGizmoProtocol> {

	BOOL _canBeginActivation;
	BOOL _readyToCreatePasscode;
	unsigned short _activationState;
	id<PBBridgeConnectionDelegate> _delegate;
	NSString* _languageIdentifer;
	NSString* _regionIdentifer;
	UIAlertView* _confirmationAlert;
	NSTimer* _activationTimeout;
	NSString* _internalLastSendMessageID;
	/*^block*/id _updateLanguageCompletion;
	/*^block*/id _updateRegionCompletion;
	/*^block*/id _activationCompletion;
	/*^block*/id _siriStateCompletion;
	/*^block*/id _enableSiriCompletion;

}

@property (assign,nonatomic,__weak) id<PBBridgeConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * languageIdentifer;                              //@synthesize languageIdentifer=_languageIdentifer - In the implementation block
@property (nonatomic,readonly) NSString * regionIdentifer;                                //@synthesize regionIdentifer=_regionIdentifer - In the implementation block
@property (nonatomic,readonly) BOOL canBeginActivation;                                   //@synthesize canBeginActivation=_canBeginActivation - In the implementation block
@property (nonatomic,readonly) BOOL readyToCreatePasscode;                                //@synthesize readyToCreatePasscode=_readyToCreatePasscode - In the implementation block
@property (nonatomic,retain) UIAlertView * confirmationAlert;                             //@synthesize confirmationAlert=_confirmationAlert - In the implementation block
@property (assign,nonatomic) unsigned short activationState;                              //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,retain) NSTimer * activationTimeout;                                 //@synthesize activationTimeout=_activationTimeout - In the implementation block
@property (nonatomic,retain) NSString * internalLastSendMessageID;                        //@synthesize internalLastSendMessageID=_internalLastSendMessageID - In the implementation block
@property (nonatomic,copy) id updateLanguageCompletion;                                   //@synthesize updateLanguageCompletion=_updateLanguageCompletion - In the implementation block
@property (nonatomic,copy) id updateRegionCompletion;                                     //@synthesize updateRegionCompletion=_updateRegionCompletion - In the implementation block
@property (nonatomic,copy) id activationCompletion;                                       //@synthesize activationCompletion=_activationCompletion - In the implementation block
@property (nonatomic,copy) id siriStateCompletion;                                        //@synthesize siriStateCompletion=_siriStateCompletion - In the implementation block
@property (nonatomic,copy) id enableSiriCompletion;                                       //@synthesize enableSiriCompletion=_enableSiriCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prepareOfflineTermsResponse:(id)arg1 ;
+(id)licensePathForAppleLanguages:(id)arg1 ;
+(id)warrantyFilePathForLanguageCode:(id)arg1 countryCode:(id)arg2 ;
-(void)setDelegate:(id<PBBridgeConnectionDelegate>)arg1 ;
-(id)init;
-(id<PBBridgeConnectionDelegate>)delegate;
-(void)setDiagnosticsEnabled:(id)arg1 ;
-(void)companionBecameAvailableWantsConfirmation:(id)arg1 ;
-(void)pushControllerType:(id)arg1 ;
-(void)popToControllerType:(id)arg1 ;
-(void)handleActivationData:(id)arg1 ;
-(void)setCompanionLanguage:(id)arg1 ;
-(void)setCompanionRegion:(id)arg1 ;
-(void)gotSiriState:(id)arg1 ;
-(void)setLocationEnabled:(id)arg1 ;
-(void)setCanBeginActivating:(id)arg1 ;
-(void)waitForDynamicActivationEventPresentation:(id)arg1 ;
-(void)waitForUserResponseToDynamicEventPresentation:(id)arg1 ;
-(void)retryActivation:(id)arg1 ;
-(void)handleWarrantySentinelRequest:(id)arg1 ;
-(void)handleOfflineTermsRequest:(id)arg1 ;
-(void)showLockedOnAnimation:(id)arg1 ;
-(void)setCrownOrientationRight:(id)arg1 ;
-(void)setPasscodeRestrictions:(id)arg1 ;
-(void)updateSynchProgress:(id)arg1 ;
-(void)doInitialSyncPrep:(id)arg1 ;
-(void)endSetupTransaction;
-(BOOL)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2 ;
-(void)invalidateTimeoutTimer;
-(void)setActivationState:(unsigned short)arg1 ;
-(void)refreshTimeoutTimer;
-(BOOL)tellCompanionGizmoFinishedActivating;
-(void)activationTimeout:(id)arg1 ;
-(BOOL)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3 ;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)enabledSiri:(id)arg1 ;
-(void)setupServiceMessageSelectorMappings;
-(BOOL)updateLanguageIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)updateRegionIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)tellCompanionGizmoBeganActivating;
-(BOOL)tellCompanionGizmoFailedActivating:(id)arg1 ;
-(void)getSiriStateWithCompletion:(/*^block*/id)arg1 ;
-(void)enableSiriForGizmoWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)getActivationDataForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)customDescriptionOfMessageType:(unsigned short)arg1 ;
-(void)tellCompanionThatGizmoFinishedSettingPasscode:(BOOL)arg1 isLong:(BOOL)arg2 ;
-(void)tellCompanionThatGizmoFailedToCreatePasscode:(int)arg1 ;
-(void)tellCompanionThatGizmoStartedUnlockPairing;
-(void)tellCompanionThatGizmoFinishedUnlockPairing:(BOOL)arg1 ;
-(void)beganAwaitingAbilityToActivate;
-(BOOL)sendCompanionPerformanceResults;
-(NSString *)languageIdentifer;
-(NSString *)regionIdentifer;
-(BOOL)canBeginActivation;
-(BOOL)readyToCreatePasscode;
-(UIAlertView *)confirmationAlert;
-(void)setConfirmationAlert:(UIAlertView *)arg1 ;
-(NSTimer *)activationTimeout;
-(void)setActivationTimeout:(NSTimer *)arg1 ;
-(NSString *)internalLastSendMessageID;
-(void)setInternalLastSendMessageID:(NSString *)arg1 ;
-(id)updateLanguageCompletion;
-(void)setUpdateLanguageCompletion:(id)arg1 ;
-(id)updateRegionCompletion;
-(void)setUpdateRegionCompletion:(id)arg1 ;
-(id)activationCompletion;
-(void)setActivationCompletion:(id)arg1 ;
-(id)siriStateCompletion;
-(void)setSiriStateCompletion:(id)arg1 ;
-(id)enableSiriCompletion;
-(void)setEnableSiriCompletion:(id)arg1 ;
-(unsigned short)activationState;
-(id)serviceIdentifier;
@end

