/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences;

@interface EKPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) double travelEngineThrottlePeriod; 
@property (assign,nonatomic) BOOL refiringReminderAlarmsEnabled; 
@property (assign,nonatomic) BOOL useShortReminderSnoozeInterval; 
@property (assign,nonatomic) BOOL useShortReminderRefireInterval; 
@property (assign,nonatomic) BOOL alwaysSetArrivedAndSettledForReminders; 
@property (assign,nonatomic) BOOL remindMeAboutThisInCalendarWidgetEnabled; 
@property (assign,nonatomic) BOOL privacyPaneHasBeenAcknowledged; 
+(id)shared;
-(id)init;
-(double)travelEngineThrottlePeriod;
-(void)setTravelEngineThrottlePeriod:(double)arg1 ;
-(BOOL)refiringReminderAlarmsEnabled;
-(void)setRefiringReminderAlarmsEnabled:(BOOL)arg1 ;
-(BOOL)useShortReminderSnoozeInterval;
-(void)setUseShortReminderSnoozeInterval:(BOOL)arg1 ;
-(BOOL)useShortReminderRefireInterval;
-(void)setUseShortReminderRefireInterval:(BOOL)arg1 ;
-(BOOL)alwaysSetArrivedAndSettledForReminders;
-(void)setAlwaysSetArrivedAndSettledForReminders:(BOOL)arg1 ;
-(BOOL)remindMeAboutThisInCalendarWidgetEnabled;
-(void)setRemindMeAboutThisInCalendarWidgetEnabled:(BOOL)arg1 ;
-(BOOL)privacyPaneHasBeenAcknowledged;
-(void)setPrivacyPaneHasBeenAcknowledged:(BOOL)arg1 ;
@end
