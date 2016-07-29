/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/General/PairedUnlockSettings.bundle/PairedUnlockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedUnlockSettings/PairedUnlockSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <PairedUnlockSettings/PUConnectionDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <PairedUnlockSettings/PUSRemotePasscodeViewControllerDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class UIAlertView, NPSManager, PUConnection, NSString;

@interface PUSPasscodeSettingsListController : PSListController <PUConnectionDelegate, UIAlertViewDelegate, PUSRemotePasscodeViewControllerDelegate, MCProfileConnectionObserver> {

	UIAlertView* _awaitingUnlockAlertView;
	long long _pendingAction;
	NPSManager* _syncManager;
	BOOL _wantsSimplePasscode;
	BOOL _justChangedWantsSimplePasscode;
	MKBAssertionRef _unlockPairingAssertion;
	BOOL _gizmoHasPasscodeSet;
	BOOL _gizmoHasPaymentPasses;
	BOOL _devicesArePairedForUnlocking;
	BOOL _gizmoIsLocked;
	BOOL _gizmoIsUnlockOnly;
	BOOL _gizmoIsInLockout;
	int _activityFlags;
	/*^block*/id _checkGizmoUnlockedCompletionHandler;
	PUConnection* _connection;

}

@property (assign,nonatomic) BOOL gizmoHasPasscodeSet;                          //@synthesize gizmoHasPasscodeSet=_gizmoHasPasscodeSet - In the implementation block
@property (assign,nonatomic) BOOL gizmoHasPaymentPasses;                        //@synthesize gizmoHasPaymentPasses=_gizmoHasPaymentPasses - In the implementation block
@property (assign,nonatomic) BOOL devicesArePairedForUnlocking;                 //@synthesize devicesArePairedForUnlocking=_devicesArePairedForUnlocking - In the implementation block
@property (assign,nonatomic) BOOL gizmoIsLocked;                                //@synthesize gizmoIsLocked=_gizmoIsLocked - In the implementation block
@property (assign,nonatomic) BOOL gizmoIsUnlockOnly;                            //@synthesize gizmoIsUnlockOnly=_gizmoIsUnlockOnly - In the implementation block
@property (assign,nonatomic) BOOL gizmoIsInLockout;                             //@synthesize gizmoIsInLockout=_gizmoIsInLockout - In the implementation block
@property (nonatomic,copy) id checkGizmoUnlockedCompletionHandler;              //@synthesize checkGizmoUnlockedCompletionHandler=_checkGizmoUnlockedCompletionHandler - In the implementation block
@property (nonatomic,readonly) PUConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int activityFlags;                                 //@synthesize activityFlags=_activityFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)autoUnlockEnabledValue;
-(BOOL)devicesArePairedForUnlocking;
-(id)checkGizmoUnlockedCompletionHandler;
-(void)_addActivityFlag:(int)arg1 ;
-(int)activityFlags;
-(void)_resetSimplePasscodeChangeIfNeeded;
-(void)remotePasscodeViewControllerDidCancel:(id)arg1 ;
-(void)_enableAutoUnlockConfirmed:(id)arg1 ;
-(BOOL)gizmoHasPaymentPasses;
-(void)_updateSimplePasscodeState;
-(void)_checkHasPaymentPasses;
-(void)changePasscode;
-(void)confirmDisablePasscode:(id)arg1 ;
-(BOOL)gizmoIsInLockout;
-(void)setEraseDataEnabledValue:(id)arg1 ;
-(BOOL)gizmoIsUnlockOnly;
-(void)_startRemoteAction:(long long)arg1 ;
-(BOOL)gizmoHasPasscodeSet;
-(void)_cancelRemoteAction;
-(void)setGizmoHasPaymentPasses:(BOOL)arg1 ;
-(id)eraseDataEnabledValue;
-(void)setGizmoHasPasscodeSet:(BOOL)arg1 ;
-(void)_promptForGizmoUnlock;
-(void)_removeActivityFlag:(int)arg1 ;
-(void)setGizmoIsUnlockOnly:(BOOL)arg1 ;
-(void)_finishRemoteAction;
-(void)_updateUnlockState;
-(id)simplePasscodeEnabledValue;
-(void)_enableAutoUnlockCanceled:(id)arg1 ;
-(void)setActivityFlags:(int)arg1 ;
-(void)_updateLockoutState;
-(void)_checkGizmoLockState;
-(void)_noteAppWillResignActive;
-(void)setSimplePasscodeEnabledValue:(id)arg1 ;
-(void)setGizmoIsLocked:(BOOL)arg1 ;
-(void)endLockout:(id)arg1 ;
-(BOOL)gizmoIsLocked;
-(void)setCheckGizmoUnlockedCompletionHandler:(id)arg1 ;
-(void)setDevicesArePairedForUnlocking:(BOOL)arg1 ;
-(void)_storeAndSyncSimplePasscodeEnabled:(BOOL)arg1 ;
-(void)reloadUI;
-(void)setAutoUnlockEnabledValue:(id)arg1 ;
-(void)setGizmoIsInLockout:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(PUConnection *)connection;
-(void)_handleError:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)unlockConnection:(id)arg1 remoteDeviceDidCompletePasscodeAction:(BOOL)arg2 error:(id)arg3 ;
-(void)unlockConnection:(id)arg1 remoteDeviceDidNotifyStateHasPasscode:(BOOL)arg2 isPasscodeLocked:(BOOL)arg3 isUnlockOnly:(BOOL)arg4 ;
-(void)togglePasscode:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(id)specifiers;
@end

