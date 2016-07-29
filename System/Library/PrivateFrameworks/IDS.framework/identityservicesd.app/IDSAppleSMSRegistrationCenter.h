/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IMUserNotificationListener.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class IDSPushHandler, NSMutableArray, NSDate, IMTimer;

@interface IDSAppleSMSRegistrationCenter : NSObject <IMUserNotificationListener, IMSystemMonitorListener> {

	IDSPushHandler* _pushHandler;
	long long _status;
	CTServerConnectionRef _ctServer;
	NSMutableArray* _handlers;
	NSMutableArray* _registrations;
	unsigned _numberOfSMSSent;
	unsigned _SMSRetries;
	unsigned _isSMSWarningUp : 1;
	unsigned _hasAcceptedSMSRequest : 1;
	unsigned _commCenterDead : 1;
	int _carrierShortcodeSupported;
	unsigned _smsIsAvailable : 1;
	unsigned _needsToCheckPhoneNumberState : 1;
	NSDate* _nextSendSMSDate;
	NSDate* _phoneNumberValidationStartDate;
	NSDate* _smsSendDate;
	IMTimer* _lastSendSMSTimer;

}

@property (nonatomic,readonly) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL carrierSupportsShortCode; 
+(id)sharedInstance;
-(void)sendRegistration:(id)arg1 ;
-(void)_registrationStateChangedNotification:(id)arg1 ;
-(void)cancelActionsForRegistrationInfo:(id)arg1 ;
-(void)resetSMSCounter;
-(void)_keychainMigrationComplete:(id)arg1 ;
-(void)_registerForDeviceCenterNotifications;
-(void)_startupCoreTelephony;
-(void)_daemonShuttingDown:(id)arg1 ;
-(void)_clearSMSDeliveryTimeout;
-(CTServerConnectionRef)ctServer;
-(void)_scheduleHeartbeat:(double)arg1 ;
-(void)_deviceIDChangedNotification:(id)arg1 ;
-(void)_airplaneModeChangedNotification:(id)arg1 ;
-(BOOL)_failIfRegistrationIsNotSupported;
-(BOOL)_deviceCanRegisterPresently;
-(void)_smsDeliveryClear;
-(BOOL)_canDeliverSMSNow;
-(void)_notifyFailureWithError:(long long)arg1 registration:(id)arg2 ;
-(void)timedOutWaitingForSMS;
-(void)_setSMSDeliveryTimeout:(double)arg1 ;
-(BOOL)carrierSupportsShortCode;
-(void)_sendSMSVerification;
-(void)_notifyNeedsNewIdentification:(id)arg1 ;
-(void)_checkRegistrationStatus;
-(void)_notifySuccess:(id)arg1 token:(id)arg2 ;
-(void)handleRegistrationSMSDeliveryFailed:(id)arg1 ;
-(void)_tryToSendSMSIdentification;
-(void)_handleSMSAddressAvailable;
-(void)handlePhoneNumberRegistrationStateChangedNotification:(id)arg1 ;
-(void)handlePhoneNumberChangedNotification:(id)arg1 ;
-(void)handleRegistrationSMSSuccessfullyDelivered:(id)arg1 ;
-(void)handleIncomingSMSForPhoneNumber:(id)arg1 signature:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(long long)status;
-(void)userNotificationDidFinish:(id)arg1 ;
-(void)_registerForCarrierNotifications;
-(void)_registerForCoreTelephonyNotifications;
-(void)_registerForLockdownNotifications;
-(void)_unregisterForCoreTelephonyNotifications;
-(void)_unregisterForCarrierNotifications;
-(void)_unregisterForCommCenterReadyNotifications;
-(void)_registerForCommCenterReadyNotifications;
-(void)_lockdownStateChanged:(id)arg1 ;
-(void)carrierSettingsChanged:(id)arg1 ;
-(void)_commCenterAlive;
-(void)heartbeat;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)systemDidStopBackup;
-(void)systemDidFinishMigration;
-(void)systemRestoreStateDidChange;
@end

