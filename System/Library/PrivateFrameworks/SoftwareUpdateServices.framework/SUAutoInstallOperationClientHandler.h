/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUAutoInstallOperationClientHandler <NSObject>
@required
-(id)uniqueIdentifier;
-(void)_noteAutoInstallOperationWasCancelled;
-(void)_noteAutoInstallOperationDidExpire;
-(void)_noteAutoInstallOperationDidConsent;
-(void)_noteAutoInstallOperationIsReadyToInstall:(/*^block*/id)arg1;

@end
