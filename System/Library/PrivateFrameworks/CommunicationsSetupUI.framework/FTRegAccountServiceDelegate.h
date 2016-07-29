/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AASetupAssistantDelegateService.h>
#import <libobjc.A.dylib/AAAppleIDLoginPlugin.h>

@class CNFRegController, NSDictionary, IDSAccountController, NSString;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService, AAAppleIDLoginPlugin> {

	CNFRegController* _regController;
	NSDictionary* _responseDictionary;
	/*^block*/id _completionHandler;
	IDSAccountController* _accountController;

}

@property (nonatomic,retain) CNFRegController * regController;                      //@synthesize regController=_regController - In the implementation block
@property (nonatomic,retain) IDSAccountController * accountController;              //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;                       //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(id)init;
-(id)name;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_cleanup;
-(id)displayName;
-(long long)serviceType;
-(NSDictionary *)responseDictionary;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(id)_logName;
-(void)_handleSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)_account:(id)arg1 matchesSetupParameters:(id)arg2 ;
-(id)_existingOperationalAccount;
-(BOOL)serviceIsAvailable;
-(BOOL)_hasAccount;
-(BOOL)_hasOperationalAccount;
-(id)_defaultSetupRequestParameters;
-(void)_handleFailureWithErrorCode:(long long)arg1 ;
-(BOOL)_shouldSkipAccountSetup:(id)arg1 ;
-(IDSAccountController *)accountController;
-(id)parametersForLoginRequest;
-(void)handleLoginResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupOperationFailed;
-(id)parametersForIdentityEstablishmentRequest;
-(id)_existingAccountForSetupParameters:(id)arg1 ;
-(void)setAccountController:(IDSAccountController *)arg1 ;
-(id)serviceIdentifier;
@end

