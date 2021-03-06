/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NPSManager, NSObject;

@interface NTKClockStatusBarSettings : NSObject {

	NPSManager* _npsManager;
	BOOL _notificationsIndicatorEnabled;
	NSObject*<OS_dispatch_queue> _prefsQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_notifyClientsOfChange;
-(void)_handlePrefsChanged;
-(BOOL)_isNotificationsIndicatorEnabledInPreferences;
-(BOOL)isNotificationsIndicatorEnabled;
-(void)setNotificationsIndicatorEnabled:(BOOL)arg1 ;
@end

