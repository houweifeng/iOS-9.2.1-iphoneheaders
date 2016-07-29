/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSDate, NSNumber, FTMessageDelivery, IDSPushHandler;

@interface IDSAppleIDSRegistrationCenter : NSObject <IMSystemMonitorListener> {

	NSMutableArray* _queuedRegistrations;
	NSMutableArray* _queuedAuthentications;
	NSMutableArray* _queuedRecoveries;
	NSMutableArray* _currentAuthentications;
	NSMutableArray* _currentRegistrations;
	NSMutableArray* _currentRecoveries;
	NSMutableArray* _handlers;
	BOOL _pendingDequeue;
	BOOL _pendingDeregistration;
	NSMutableDictionary* _currentGetDependentRegistrationBlocks;
	NSMutableSet* _currentGetDependentRegistrations;
	NSMutableDictionary* _currentGetHandlesBlocks;
	NSMutableDictionary* _currentGetHandlesRegistrations;
	NSMutableArray* _successfulRegistrations;
	BOOL _shouldUseAbsinthe;
	BOOL _isBuildingContext;
	NACContextOpaque_Ref _validationContext;
	BOOL _validationContextDisabled;
	NSDate* _validateContextDate;
	NSNumber* _validateContextTTL;
	NSMutableArray* _validationContextQueue;
	NSDate* _dateSentLastHTTPMessage;
	NSDate* _dateLastRegistered;
	NSDate* _accountingHour;
	unsigned long long _registrations;
	FTMessageDelivery* _httpMessageDelivery;
	IDSPushHandler* _pushHandler;

}
+(id)sharedInstance;
-(BOOL)sendRegistration:(id)arg1 ;
-(BOOL)isRegistering:(id)arg1 ;
-(BOOL)authenticateRegistration:(id)arg1 ;
-(BOOL)sendDeregistration:(id)arg1 ;
-(void)cancelActionsForRegistrationInfo:(id)arg1 ;
-(BOOL)sendSignatureRecovery:(id)arg1 ;
-(void)reportSpamWithMessages:(id)arg1 selfURI:(id)arg2 registration:(id)arg3 ;
-(BOOL)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_notifyRegistrationSuccess:(id)arg1 ;
-(void)buildValidationCredentialsIfNeeded;
-(id)activeRegistrations;
-(void)logState;
-(void)sendHardDeregisterCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)getDependentRegistrations:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)dateLastRegistered;
-(void)__cleanupValidationInfo;
-(void)__dumpState;
-(BOOL)_checkOverRegistrations;
-(void)_dequeuePendingRequestsIfNecessary;
-(void)_sendAuthenticateRegistration:(id)arg1 ;
-(void)_sendSignatureRecovery:(id)arg1 ;
-(void)_sendRegistrationAsDeregister:(BOOL)arg1 ;
-(void)_clearAbisntheCleanupTimer;
-(void)_setAbisntheCleanupTimer;
-(BOOL)_queueBuildingValidationDataIfNecessaryForMessage:(id)arg1 ;
-(void)__sendMessage:(id)arg1 ;
-(void)__abisntheCleanupTimerHit;
-(void)_sendAbsintheValidationCertRequestIfNeeded;
-(void)__flushValidationQueue;
-(void)__failValidationQueue;
-(void)__queueValidationMessage:(id)arg1 ;
-(void)_notifyRegistrationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5 ;
-(void)_noteRegistration;
-(void)_notifyAllSuccessfulRegistrations:(id)arg1 ;
-(void)__reallySendDeregistration;
-(void)__reallySendRegistration;
-(BOOL)_hasOngoingAuthentications;
-(void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(BOOL)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9 ;
-(void)__reallySendAuthenticateRegistration;
-(void)_notifyIDSAuthenticationSuccess:(id)arg1 ;
-(void)_notifyProvisionFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 fatal:(BOOL)arg5 info:(id)arg6 ;
-(void)cancelRegisterActionsForRegistrationInfo:(id)arg1 ;
-(BOOL)_hasRegistration:(id)arg1 inQueue:(id)arg2 ;
-(void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2 ;
-(void)_notifyEmailQueryFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5 ;
-(void)_processGetHandlesMessage:(id)arg1 registrations:(id)arg2 deliveredWithError:(id)arg3 resultCode:(long long)arg4 resultDictionary:(id)arg5 allowPasswordPrompt:(BOOL)arg6 ;
-(BOOL)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendDeregistration:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2 ;
-(BOOL)sendRequest:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

