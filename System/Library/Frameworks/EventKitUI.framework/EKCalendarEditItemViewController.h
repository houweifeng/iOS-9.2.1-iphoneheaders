/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <libobjc.A.dylib/EKCalendarChooserDelegate.h>

@class EKEventStore, EKCalendarChooser, EKCalendar, NSString;

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate> {

	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	EKCalendar* _selectedCalendar;
	unsigned long long _entityType;
	BOOL _limitToSource;

}

@property (nonatomic,retain) EKCalendar * selectedCalendar; 
@property (assign,nonatomic) BOOL limitToSource;                         //@synthesize limitToSource=_limitToSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(CGSize)preferredContentSize;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned long long)arg4 ;
-(void)setSelectedCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)selectedCalendar;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 ;
-(void)calendarChooserSelectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 ;
-(BOOL)limitToSource;
-(void)setLimitToSource:(BOOL)arg1 ;
@end

