/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MessageCallToAction.h>

@class NSString, SGRealtimeEvent;

@interface MessageCallToActionRealtimeEvent : MessageCallToAction {

	NSString* _title;
	NSString* _subtitle;
	NSString* _action;

}

@property (nonatomic,retain,readonly) SGRealtimeEvent * realtimeEvent; 
+(id)callToActionForRealtimeEvent:(id)arg1 ;
-(SGRealtimeEvent *)realtimeEvent;
-(id)supplementaryActionTitle;
-(id)primaryActionTitle;
-(id)secondaryActionTitle;
-(id)_eventAbsoluteStartTime;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(id)bundleIdentifier;
-(id)title;
-(id)subtitle;
@end

