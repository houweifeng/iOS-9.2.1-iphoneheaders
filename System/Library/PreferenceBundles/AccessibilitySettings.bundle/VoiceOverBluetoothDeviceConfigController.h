/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class VoiceOverBluetoothDevice, NSArray;

@interface VoiceOverBluetoothDeviceConfigController : PSListController {

	VoiceOverBluetoothDevice* _device;
	NSArray* _forgetGroupSpecifiers;
	BOOL _dismissed;

}
-(void)dealloc;
-(id)init;
-(void)forgetDevice:(id)arg1 ;
-(id)specifiers;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)deviceUpdated:(id)arg1 ;
-(void)deviceRemoved:(id)arg1 ;
@end

