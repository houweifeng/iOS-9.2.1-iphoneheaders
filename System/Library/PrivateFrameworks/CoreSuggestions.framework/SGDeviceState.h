/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGDeviceState : NSObject
+(BOOL)isClassCLocked;
+(BOOL)isDeviceFormattedForProtection;
+(void)runBlockWhenDeviceIsReadyForSuggestions:(/*^block*/id)arg1 ;
+(void)blockUntilFirstUnlock;
+(BOOL)isUnlocked;
+(void)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(int)lockState;
+(id)currentOsBuild;
+(BOOL)isConstrainedDevice;
@end

