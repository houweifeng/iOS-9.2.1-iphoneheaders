/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKAlarm;

@interface EKUIAlarm : NSObject {

	BOOL _isLeaveNowAlarm;
	EKAlarm* _alarm;

}

@property (nonatomic,readonly) BOOL isLeaveNowAlarm;              //@synthesize isLeaveNowAlarm=_isLeaveNowAlarm - In the implementation block
@property (nonatomic,readonly) EKAlarm * alarm;                   //@synthesize alarm=_alarm - In the implementation block
-(id)description;
-(id)initWithAlarm:(id)arg1 ;
-(id)initLeaveNowAlarm;
-(id)localizedDescriptionAllDay:(BOOL)arg1 ;
-(BOOL)isLeaveNowAlarm;
-(EKAlarm *)alarm;
@end

