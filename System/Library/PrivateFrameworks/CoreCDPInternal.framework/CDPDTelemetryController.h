/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDPDTelemetryController : NSObject
+(id)sharedInstance;
-(void)pcsAlreadyMigrated;
-(void)pcsMigrationSucceeded;
-(void)pcsMigrationFailed;
-(void)pcsRollbackSucceeded;
-(void)pcsRollbackFailed;
-(void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(BOOL)arg2 ;
-(void)signInFailedDueIncorrectICSCAttempts;
-(void)didChangeLocalSecret;
-(void)didRemoveLocalSecret;
-(void)didLockAccount;
-(void)didUnlockAccount;
-(void)stateMachineStartedFromClient:(unsigned long long)arg1 ;
-(void)signInFailedDueToLockedAccount;
@end

