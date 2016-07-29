/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>

@class UIAlertView, NSString, NSMutableArray;

@interface WirelessModemBundleController : PSBundleController {

	UIAlertView* _tetheringAlert;
	NSString* _tetheringPhoneNumber;
	NSString* _tetheringURL;
	NSMutableArray* _specifiers;
	BOOL _wifiTetheringSupported;

}
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)getTetheringStatus:(id)arg1 ;
-(void)MISStateChangedNotification:(id)arg1 ;
-(void)updateSpecifiersForState:(int)arg1 andReason:(int)arg2 withGroup:(id)arg3 andButton:(id)arg4 ;
-(void)showSetupAlert:(id)arg1 ;
@end

