/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, UISwitch;

@interface EKEventPrivacyLevelDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	UISwitch* _control;
	BOOL _switchStateIsOn;

}
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)_switchChanged:(id)arg1 ;
@end

