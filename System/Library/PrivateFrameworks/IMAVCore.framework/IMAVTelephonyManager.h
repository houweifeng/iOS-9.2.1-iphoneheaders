/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMAVCore/IMAVCore-Structs.h>
@class CTCallCenter, NSMutableDictionary;

@interface IMAVTelephonyManager : NSObject {

	CTCallCenter* _callCenter;
	CTServerConnectionRef _ctServerConnection;
	NSMutableDictionary* _currentCallDictionary;
	BOOL _isDesignatedAudioServiceProvider;
	BOOL _isDesignatedVideoServiceProvider;
	CFMachPortRef _ctServerMachPort;
	CFUUIDRef _ctAudioToken;
	CFUUIDRef _ctVideoToken;

}

@property (nonatomic,readonly) unsigned callState; 
+(id)sharedInstance;
+(id)numberToDialForNumber:(id)arg1 dialAssist:(BOOL*)arg2 ;
-(void)dealloc;
-(id)init;
-(unsigned)callState;
-(void)_notifyMissedCallForInviteFromID:(id)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)_isOnCallToID:(id)arg1 ;
-(BOOL)_breakCSCallsIfNecessary;
-(void)_handleCallEvent:(id)arg1 ;
-(void)startWatchingForCTRequests;
-(void)_chatStateChanged:(id)arg1 ;
-(void)__handleCallEvent:(id)arg1 ;
-(void)_cleanupMachInfo;
-(BOOL)_registerCTRequestService;
-(BOOL)_setupCTServerConnection;
-(BOOL)_unregisterCTRequestService;
-(CTCallRef)_callRefForChat:(id)arg1 ;
-(void)_dialRequested:(CFDictionaryRef)arg1 ;
-(void)_answerCall:(CTCallRef)arg1 withSource:(CFStringRef)arg2 ;
-(void)_hangUpCall:(CTCallRef)arg1 ;
-(BOOL)_disconnectCTServerConnection;
-(BOOL)_reconnectCTServerConnectionIfNecessary;
-(void)notifyCallStartedForChat:(id)arg1 ;
-(void)_setCurrentCallStatus:(int)arg1 forChat:(id)arg2 ;
-(void)_setCallRef:(CTCallRef)arg1 forChat:(id)arg2 ;
-(void)notifyMissedCallForChat:(id)arg1 ;
-(void)notifyCallConnectingForChat:(id)arg1 ;
-(void)notifyCallConnectedForChat:(id)arg1 ;
-(void)notifyCallEndedForChat:(id)arg1 ;
-(BOOL)_wantsBreakBeforeMake;
-(void)_handleCTServiceRequestName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 contextInfo:(void*)arg3 ;
-(void)_disconnectCSCallWithID:(id)arg1 ;
-(void)stopWatchingForCTRequests;
@end

