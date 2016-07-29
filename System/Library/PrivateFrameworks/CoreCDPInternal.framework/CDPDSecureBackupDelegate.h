/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDSecureBackupDelegate
@required
-(void)prepareCircleStateForRecoveryWithCompletion:(/*^block*/id)arg1;
-(void)joinCircleAfterRecoveryWithCompletion:(/*^block*/id)arg1;
-(id)circlePeerIDForSecureBackupController:(id)arg1;
-(BOOL)synchronizeCircleViewsForSecureBackupController:(id)arg1;
-(void)promptForAdoptionOfMultipleICSCWithCompletion:(/*^block*/id)arg1;
-(void)promotForLocalSecretWithCompletion:(/*^block*/id)arg1;

@end
