/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Accounts/DataclassOwners/Notes.bundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDDataclassOwnerProtocol <NSObject>
@optional
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2;

@required
+(id)dataclasses;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4;

@end

