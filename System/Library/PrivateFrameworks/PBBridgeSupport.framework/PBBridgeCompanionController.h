/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <PBBridgeSupport/PBBridgeIDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <PBBridgeSupport/PBBridgeCompanionProtocol.h>

@protocol RUILoaderDelegate, PBBridgeConnectionDelegate;
@class RUIStyle, NSURLConnection, NSMutableURLRequest, NSMutableData, RUILoader, NSString, NSTimer;

@interface PBBridgeCompanionController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, NSURLConnectionDelegate, RUILoaderDelegate, PBBridgeCompanionProtocol> {

	MKBAssertionRef _unlockPairingAssertion;
	BOOL _passcodeSet;
	BOOL _selectedPairedUnlock;
	BOOL _nonSilentActivation;
	BOOL _connectionFailed;
	BOOL _awaitingCustomResponse;
	BOOL _isEstablishingPairing;
	BOOL _allowAnyHTTPSCertificate;
	unsigned short _granularActivationState;
	int _activationState;
	RUIStyle* _remoteUIStyle;
	id<RUILoaderDelegate> _ruiDelegate;
	id<PBBridgeConnectionDelegate> _delegate;
	NSURLConnection* _activationConnection;
	NSMutableURLRequest* _activationRequest;
	NSMutableData* _activationData;
	RUILoader* _ruiLoader;
	NSString* _contentType;
	NSTimer* _activationTimeout;
	NSString* _internalLastSendMessageID;
	NSString* _remoteActivationUserAgent;
	/*^block*/id _lockedOnAnimationCompletion;
	/*^block*/id _initialSyncPrepCompletion;

}

@property (nonatomic,retain) RUIStyle * remoteUIStyle;                                    //@synthesize remoteUIStyle=_remoteUIStyle - In the implementation block
@property (assign,nonatomic,__weak) id<RUILoaderDelegate> ruiDelegate;                    //@synthesize ruiDelegate=_ruiDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PBBridgeConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL passcodeSet;                                            //@synthesize passcodeSet=_passcodeSet - In the implementation block
@property (assign,nonatomic) BOOL selectedPairedUnlock;                                   //@synthesize selectedPairedUnlock=_selectedPairedUnlock - In the implementation block
@property (nonatomic,retain) NSURLConnection * activationConnection;                      //@synthesize activationConnection=_activationConnection - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * activationRequest;                     //@synthesize activationRequest=_activationRequest - In the implementation block
@property (nonatomic,retain) NSMutableData * activationData;                              //@synthesize activationData=_activationData - In the implementation block
@property (nonatomic,retain) RUILoader * ruiLoader;                                       //@synthesize ruiLoader=_ruiLoader - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                        //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) BOOL nonSilentActivation;                                    //@synthesize nonSilentActivation=_nonSilentActivation - In the implementation block
@property (assign,nonatomic) BOOL connectionFailed;                                       //@synthesize connectionFailed=_connectionFailed - In the implementation block
@property (assign,nonatomic) BOOL awaitingCustomResponse;                                 //@synthesize awaitingCustomResponse=_awaitingCustomResponse - In the implementation block
@property (assign,nonatomic) int activationState;                                         //@synthesize activationState=_activationState - In the implementation block
@property (assign,nonatomic) BOOL isEstablishingPairing;                                  //@synthesize isEstablishingPairing=_isEstablishingPairing - In the implementation block
@property (assign,nonatomic) unsigned short granularActivationState;                      //@synthesize granularActivationState=_granularActivationState - In the implementation block
@property (nonatomic,retain) NSTimer * activationTimeout;                                 //@synthesize activationTimeout=_activationTimeout - In the implementation block
@property (nonatomic,retain) NSString * internalLastSendMessageID;                        //@synthesize internalLastSendMessageID=_internalLastSendMessageID - In the implementation block
@property (assign,nonatomic) BOOL allowAnyHTTPSCertificate;                               //@synthesize allowAnyHTTPSCertificate=_allowAnyHTTPSCertificate - In the implementation block
@property (nonatomic,copy) NSString * remoteActivationUserAgent;                          //@synthesize remoteActivationUserAgent=_remoteActivationUserAgent - In the implementation block
@property (nonatomic,copy) id lockedOnAnimationCompletion;                                //@synthesize lockedOnAnimationCompletion=_lockedOnAnimationCompletion - In the implementation block
@property (nonatomic,copy) id initialSyncPrepCompletion;                                  //@synthesize initialSyncPrepCompletion=_initialSyncPrepCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)iCloudFirstName:(id*)arg1 lastName:(id*)arg2 ;
+(void)meCardFirstName:(id*)arg1 lastName:(id*)arg2 ;
+(id)displayNameWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setDelegate:(id<PBBridgeConnectionDelegate>)arg1 ;
-(id)init;
-(id<PBBridgeConnectionDelegate>)delegate;
-(void)_cleanup;
-(NSString *)contentType;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)endSetupTransaction;
-(BOOL)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2 ;
-(void)invalidateTimeoutTimer;
-(void)setActivationState:(int)arg1 ;
-(void)refreshTimeoutTimer;
-(void)activationTimeout:(id)arg1 ;
-(BOOL)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3 ;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)setupServiceMessageSelectorMappings;
-(id)customDescriptionOfMessageType:(unsigned short)arg1 ;
-(NSTimer *)activationTimeout;
-(void)setActivationTimeout:(NSTimer *)arg1 ;
-(NSString *)internalLastSendMessageID;
-(void)setInternalLastSendMessageID:(NSString *)arg1 ;
-(void)beginSetupTransaction;
-(void)gizmoBecameAvailableWantsConfirmation:(id)arg1 ;
-(void)sendProxyActivationRequest:(id)arg1 ;
-(void)gizmoDidBeginActivating:(id)arg1 ;
-(void)gizmoDidFinishActivating:(id)arg1 ;
-(void)getCompanionLanguage:(id)arg1 ;
-(void)getCompanionRegion:(id)arg1 ;
-(void)gizmoDidEndPasscodeCreation:(id)arg1 ;
-(void)gizmoDidBeginUnlockPairing:(id)arg1 ;
-(void)gizmoDidEndUnlockPairing:(id)arg1 ;
-(void)getSiriState:(id)arg1 ;
-(void)gizmoActivationFailed:(id)arg1 ;
-(void)handlePerformanceResults:(id)arg1 ;
-(void)handleWarrantySentinelResponse:(id)arg1 ;
-(void)handleOfflineTermsResponse:(id)arg1 ;
-(void)gizmoFailedToCreatePasscode:(id)arg1 ;
-(void)watchDidPrepareForInitialSync:(id)arg1 ;
-(double)offsetEventTime;
-(id)_connectionWithRequest:(id)arg1 ;
-(BOOL)_dumpCustomRequestBody;
-(unsigned short)_testActivationResponseType;
-(void)tellGizmoToBeginActivation;
-(void)enableSiriForGizmo:(id)arg1 ;
-(void)beganWaitingForPresentationOfActivationEvent;
-(void)beganWaitingForUserResponseToActivationEvent;
-(void)sendProxyActivationWithCustomRequest:(id)arg1 ;
-(void)sendGizmoPasscodeRestrictions;
-(void)tellGizmoToSetDiagnosticsEnabled:(BOOL)arg1 ;
-(void)tellGizmoToSetLocationEnabled:(BOOL)arg1 ;
-(void)tellGizmoToPushControllerType:(unsigned long long)arg1 ;
-(void)tellGizmoToPopToControllerType:(unsigned long long)arg1 ;
-(void)tellGizmoToShowLockedOnAnimationTimeToFlash:(double)arg1 animationCompletion:(/*^block*/id)arg2 ;
-(void)tellGizmoToSeCrownOrientationRight:(BOOL)arg1 ;
-(void)tellGizmoToUpdateSyncProgressTo:(double)arg1 withState:(long long)arg2 ;
-(void)startEstablishingPairing;
-(void)tellGizmoToRetryActivation;
-(void)queryGizmoForShowWarrantySentinelAndRestoreDeviceName:(id)arg1 ;
-(void)tellGizmoToDeleteWarrantySentinel;
-(void)tellGizmoToPrepareForInitialSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)queryGizmoForOfflineTerms;
-(RUIStyle *)remoteUIStyle;
-(void)setRemoteUIStyle:(RUIStyle *)arg1 ;
-(id<RUILoaderDelegate>)ruiDelegate;
-(void)setRuiDelegate:(id<RUILoaderDelegate>)arg1 ;
-(BOOL)passcodeSet;
-(void)setPasscodeSet:(BOOL)arg1 ;
-(BOOL)selectedPairedUnlock;
-(void)setSelectedPairedUnlock:(BOOL)arg1 ;
-(NSURLConnection *)activationConnection;
-(void)setActivationConnection:(NSURLConnection *)arg1 ;
-(NSMutableURLRequest *)activationRequest;
-(void)setActivationRequest:(NSMutableURLRequest *)arg1 ;
-(RUILoader *)ruiLoader;
-(void)setRuiLoader:(RUILoader *)arg1 ;
-(BOOL)nonSilentActivation;
-(void)setNonSilentActivation:(BOOL)arg1 ;
-(BOOL)connectionFailed;
-(void)setConnectionFailed:(BOOL)arg1 ;
-(BOOL)awaitingCustomResponse;
-(void)setAwaitingCustomResponse:(BOOL)arg1 ;
-(BOOL)isEstablishingPairing;
-(void)setIsEstablishingPairing:(BOOL)arg1 ;
-(unsigned short)granularActivationState;
-(void)setGranularActivationState:(unsigned short)arg1 ;
-(BOOL)allowAnyHTTPSCertificate;
-(void)setAllowAnyHTTPSCertificate:(BOOL)arg1 ;
-(NSString *)remoteActivationUserAgent;
-(void)setRemoteActivationUserAgent:(NSString *)arg1 ;
-(id)lockedOnAnimationCompletion;
-(void)setLockedOnAnimationCompletion:(id)arg1 ;
-(id)initialSyncPrepCompletion;
-(void)setInitialSyncPrepCompletion:(id)arg1 ;
-(int)activationState;
-(id)serviceIdentifier;
-(NSMutableData *)activationData;
-(void)setActivationData:(NSMutableData *)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(id)viewControllerForAlertPresentation;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
@end

