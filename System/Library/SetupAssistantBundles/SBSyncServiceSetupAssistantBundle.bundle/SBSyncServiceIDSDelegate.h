/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SetupAssistantBundles/SBSyncServiceSetupAssistantBundle.bundle/SBSyncServiceSetupAssistantBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AASetupAssistantDelegateService.h>

@interface SBSyncServiceIDSDelegate : NSObject <AASetupAssistantDelegateService> {

	BOOL _setupOperationCancelled;

}
-(id)init;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupOperationFailed;
@end

