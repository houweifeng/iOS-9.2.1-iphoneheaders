/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UILocalNotification, NSString;

@interface TimerManager : NSObject {

	int _state;
	UILocalNotification* _notification;
	double _remainingTime;

}

@property (assign,nonatomic) double defaultDuration; 
@property (nonatomic,readonly) NSString * defaultSound; 
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) double fireTime; 
@property (nonatomic,readonly) double remainingTime; 
+(id)sharedManager;
+(BOOL)isTimerNotification:(id)arg1 ;
+(BOOL)upgrade;
+(BOOL)discardOldVersion;
+(id)copyFetchScheduledNotification;
+(id)newNotificationAt:(double)arg1 withSound:(id)arg2 ;
+(void)setSoundID:(id)arg1 forNotification:(id)arg2 ;
+(void)updateTimerShortcutItem;
-(double)fireTime;
-(BOOL)cancel;
-(int)state;
-(BOOL)resume;
-(BOOL)pause;
-(double)remainingTime;
-(NSString *)defaultSound;
-(void)reloadStateAndRefreshLocalNotifications;
-(void)reloadState;
-(void)setDefaultSound:(NSString *)arg1 ;
-(void)scheduleAt:(double)arg1 withSound:(id)arg2 ;
-(void)changeSound:(id)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(double)defaultDuration;
@end

