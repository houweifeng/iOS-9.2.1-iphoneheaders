/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/LDAPSettings.bundle/LDAPSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACUIAccountViewsProviderProtocol <NSObject>
@optional
-(Class)controllerClassForCreatingAccountWithType:(id)arg1;

@required
-(id)supportedAccountTypeIdentifiers;
-(Class)viewControllerClassForViewingAccount:(id)arg1;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
-(id)configurationInfoForViewingAccount:(id)arg1;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1;

@end

