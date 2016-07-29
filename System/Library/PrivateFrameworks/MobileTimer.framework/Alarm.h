/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AlarmDelegate;
@class UILocalNotification, NSDate, NSMutableDictionary, NSArray, NSString, NSURL, NSDictionary;

@interface Alarm : NSObject {

	UILocalNotification* _weeklyNotifications[7];
	UILocalNotification* _snoozedNotification;
	unsigned _hour;
	unsigned _minute;
	unsigned _daySetting;
	BOOL _allowsSnooze;
	NSDate* _lastModified;
	unsigned _revision;
	Alarm* _editingProxy;
	BOOL _pretendActiveIfProxy;
	NSMutableDictionary* _settings;
	NSArray* _repeatDays;
	UILocalNotification* _notification;
	NSString* _alarmID;
	NSURL* _alarmIDURL;
	long long _soundType;
	NSString* _sound;
	NSString* _vibrationID;
	NSString* _title;
	id<AlarmDelegate> _delegate;

}

@property (nonatomic,readonly) Alarm * editingProxy;                            //@synthesize editingProxy=_editingProxy - In the implementation block
@property (nonatomic,readonly) UILocalNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSString * alarmID;                                //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,retain) NSURL * alarmIDURL;                                //@synthesize alarmIDURL=_alarmIDURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * settings; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isSnoozed,nonatomic,readonly) BOOL snoozed; 
@property (assign,nonatomic) unsigned hour;                                     //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) unsigned minute;                                   //@synthesize minute=_minute - In the implementation block
@property (nonatomic,readonly) BOOL repeats; 
@property (nonatomic,readonly) NSArray * repeatDays; 
@property (assign,nonatomic) unsigned daySetting;                               //@synthesize daySetting=_daySetting - In the implementation block
@property (assign,nonatomic) BOOL allowsSnooze;                                 //@synthesize allowsSnooze=_allowsSnooze - In the implementation block
@property (nonatomic,readonly) long long soundType;                             //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,readonly) NSString * sound;                                //@synthesize sound=_sound - In the implementation block
@property (nonatomic,retain) NSString * vibrationID;                            //@synthesize vibrationID=_vibrationID - In the implementation block
@property (nonatomic,readonly) NSString * uiTitle; 
@property (nonatomic,retain) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDate * lastModified;                           //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) unsigned revision;                               //@synthesize revision=_revision - In the implementation block
@property (assign,nonatomic,__weak) id<AlarmDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
+(BOOL)verifySettings:(id)arg1 ;
+(BOOL)isSnoozeNotification:(id)arg1 ;
+(id)_newSettingsFromNotification:(id)arg1 ;
+(BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2 ;
+(BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2 ;
+(BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2 ;
+(BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2 ;
+(BOOL)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2 ;
+(BOOL)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2 ;
+(/*^block*/id)timeComparator;
-(id)initWithDefaultValues;
-(void)setDelegate:(id<AlarmDelegate>)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id<AlarmDelegate>)delegate;
-(BOOL)isActive;
-(NSDictionary *)settings;
-(UILocalNotification *)notification;
-(NSString *)title;
-(void)applySettings:(id)arg1 ;
-(void)setHour:(unsigned)arg1 ;
-(unsigned)hour;
-(id)initWithSettings:(id)arg1 ;
-(unsigned)minute;
-(id)initWithNotification:(id)arg1 ;
-(void)setMinute:(unsigned)arg1 ;
-(long long)soundType;
-(BOOL)repeats;
-(id)nextFireDate;
-(NSDate *)lastModified;
-(void)setAllowsSnooze:(BOOL)arg1 ;
-(void)setSound:(id)arg1 ofType:(long long)arg2 ;
-(void)setDaySetting:(unsigned)arg1 ;
-(NSString *)alarmID;
-(void)markModified;
-(long long)compareTime:(id)arg1 ;
-(void)scheduleNotifications;
-(NSURL *)alarmIDURL;
-(id)nextFireDateAfterDate:(id)arg1 ;
-(BOOL)isSnoozed;
-(void)cancelNotifications;
-(BOOL)tryAddNotification:(id)arg1 ;
-(void)dropNotifications;
-(void)refreshActiveState;
-(void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)handleAlarmFired:(id)arg1 ;
-(id)nowDateForOffsetCalculation;
-(void)setVibrationID:(NSString *)arg1 ;
-(void)dropEditingProxy;
-(void)setAlarmID:(NSString *)arg1 ;
-(void)setAlarmIDURL:(NSURL *)arg1 ;
-(unsigned)daySetting;
-(BOOL)allowsSnooze;
-(NSString *)vibrationID;
-(id)timeZoneForOffsetCalculation;
-(id)_newBaseDateComponentsForDay:(long long)arg1 ;
-(id)_newNotification:(long long)arg1 ;
-(void)prepareNotifications;
-(id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(long long)arg3 ;
-(unsigned long long)_notificationsCount;
-(void)prepareEditingProxy;
-(void)applyChangesFromEditingProxy;
-(NSArray *)repeatDays;
-(NSString *)uiTitle;
-(Alarm *)editingProxy;
-(unsigned)revision;
-(NSString *)sound;
@end

