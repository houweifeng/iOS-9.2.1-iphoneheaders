/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassbookSettingsDataSource <NSObject>
@required
-(id)setupDelegate;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)optionsDelegate;
-(BOOL)secureElementIsProductionSigned;
-(BOOL)deviceInRestrictedMode;
-(BOOL)showPassState;
-(BOOL)deviceSupportsInAppPayments;
-(id)secureElementID;

@end
