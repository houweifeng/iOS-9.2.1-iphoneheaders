/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBBluetoothAccessoryLowPowerAlertItem : SBAlertItem {

	long long _batteryLevel;
	NSString* _accessoryName;

}
-(id)initWithAccessory:(id)arg1 batteryLevel:(long long)arg2 ;
-(void)dealloc;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end

