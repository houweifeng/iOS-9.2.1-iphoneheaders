/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CRBluetoothSyncContactsPrompt : NSObject {

	/*^block*/id _contactsApprovalCompletion;

}

@property (nonatomic,copy) id contactsApprovalCompletion;              //@synthesize contactsApprovalCompletion=_contactsApprovalCompletion - In the implementation block
-(void)setContactsApprovalCompletion:(id)arg1 ;
-(void)presentSyncContactsAlertFromViewController:(id)arg1 ;
-(void)_handleContactsApprovalCompleted:(BOOL)arg1 ;
-(id)contactsApprovalCompletion;
@end

