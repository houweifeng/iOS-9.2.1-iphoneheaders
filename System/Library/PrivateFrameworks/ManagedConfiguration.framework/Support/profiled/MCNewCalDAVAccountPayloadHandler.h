/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCACAccountPayloadHandler.h>
#import <profiled/DAValidityCheckConsumer.h>

@protocol OS_dispatch_semaphore;
@class NSError, NSObject, NSString;

@interface MCNewCalDAVAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer> {

	BOOL _validationComplete;
	NSError* _validationError;
	NSObject*<OS_dispatch_semaphore> _doneSema;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(id)userInputFields;
-(BOOL)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(void)setUserInputResponses:(id)arg1 ;
-(id)_errorFromValidationError:(id)arg1 ;
-(id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(BOOL)arg2 ;
-(id)_installedAccount;
-(id)_accountFromPayloadWithUserInputResponses:(id)arg1 ;
-(void)_preflightWithAccount:(id)arg1 ;
-(void)remove;
-(BOOL)isInstalled;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
@end

