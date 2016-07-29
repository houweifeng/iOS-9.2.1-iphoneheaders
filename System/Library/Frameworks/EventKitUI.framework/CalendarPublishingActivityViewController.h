/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;
@interface CalendarPublishingActivityViewController : UIActivityViewController {

	id<CalendarPublishingActivityDelegate> _activityDelegate;

}

@property (__weak) id<CalendarPublishingActivityDelegate> activityDelegate;              //@synthesize activityDelegate=_activityDelegate - In the implementation block
-(BOOL)_shouldShowSystemActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(id<CalendarPublishingActivityDelegate>)activityDelegate;
-(void)setActivityDelegate:(id<CalendarPublishingActivityDelegate>)arg1 ;
@end

