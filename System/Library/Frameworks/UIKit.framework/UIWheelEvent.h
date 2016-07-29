/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIEvent.h>

@class NSMutableArray;

@interface UIWheelEvent : UIEvent {

	long long _recentScrollDistance;
	NSMutableArray* _recentScrollEvents;
	long long lastSubtype;

}
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(long long)type;
-(long long)subtype;
-(void)_sendEventToResponder:(id)arg1 ;
-(double)_wheelVelocity;
-(BOOL)_canHaveVelocity;
@end

