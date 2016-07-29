/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol EKRecurrenceTypeEditItemViewControllerDelegate;
@class NSString, UITableView, NSIndexPath, EKRecurrenceRule, NSDate, EKUICustomRecurrenceViewController, EKCalendarItem;

@interface EKRecurrenceTypeEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {

	NSString* _summaryString;
	long long _repeatType;
	UITableView* _table;
	NSIndexPath* _checkedItem;
	EKRecurrenceRule* _recurrenceRule;
	NSDate* _suggestedStartDate;
	id<EKRecurrenceTypeEditItemViewControllerDelegate> _delegate;
	EKUICustomRecurrenceViewController* _customRecurrenceViewController;
	EKCalendarItem* _calendarItem;

}

@property (nonatomic,retain) EKRecurrenceRule * recurrenceRule;                                      //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (nonatomic,retain) NSDate * suggestedStartDate;                                            //@synthesize suggestedStartDate=_suggestedStartDate - In the implementation block
@property (__weak) id<EKRecurrenceTypeEditItemViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (retain) EKUICustomRecurrenceViewController * customRecurrenceViewController;              //@synthesize customRecurrenceViewController=_customRecurrenceViewController - In the implementation block
@property (assign,nonatomic) long long repeatType;                                                   //@synthesize repeatType=_repeatType - In the implementation block
@property (retain) EKCalendarItem * calendarItem;                                                    //@synthesize calendarItem=_calendarItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<EKRecurrenceTypeEditItemViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<EKRecurrenceTypeEditItemViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(EKCalendarItem *)calendarItem;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(void)_checkItemAtIndexPath:(id)arg1 ;
-(id)_recurrenceCellForIndexPath:(id)arg1 ;
-(EKRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRuleFromRepeatType:(long long)arg1 ;
-(void)setCustomRecurrenceViewController:(EKUICustomRecurrenceViewController *)arg1 ;
-(EKUICustomRecurrenceViewController *)customRecurrenceViewController;
-(void)setRecurrenceRule:(EKRecurrenceRule *)arg1 ;
-(void)setSuggestedStartDate:(NSDate *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 ;
-(NSDate *)suggestedStartDate;
-(long long)repeatType;
-(void)setRepeatType:(long long)arg1 ;
@end

