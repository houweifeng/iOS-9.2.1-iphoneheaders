/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/EKDayViewDataSource.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class NSArray, UIView, EKDayView, NSDate, EKEvent, UIViewController, NSString;

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {

	BOOL _firstshow;
	BOOL _userHasTappedToExpand;
	BOOL _isAnimating;
	NSArray* _cachedTimedEvents;
	UIView* _roundedView;
	EKDayView* _dayView;
	NSDate* _date;
	EKEvent* _event;
	NSDate* _originalEventStartDate;
	NSDate* _originalEventEndDate;
	BOOL _hasOverriddenEventDates;
	NSDate* _overriddenEventStartDate;
	NSDate* _overriddenEventEndDate;
	BOOL _isInline;
	BOOL _hidesAllDayEvents;
	BOOL _respectsSelectedCalendarsFilter;
	UIViewController* _hostingViewController;

}

@property (assign,nonatomic) BOOL isInline;                                                         //@synthesize isInline=_isInline - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostingViewController;                       //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (assign,nonatomic) BOOL hidesAllDayEvents;                                                //@synthesize hidesAllDayEvents=_hidesAllDayEvents - In the implementation block
@property (assign,nonatomic) BOOL respectsSelectedCalendarsFilter;                                  //@synthesize respectsSelectedCalendarsFilter=_respectsSelectedCalendarsFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIViewController *)hostingViewController;
-(BOOL)isInline;
-(id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(void)setIsInline:(BOOL)arg1 ;
-(void)setHidesAllDayEvents:(BOOL)arg1 ;
-(void)setHostingViewController:(UIViewController *)arg1 ;
-(void)setRespectsSelectedCalendarsFilter:(BOOL)arg1 ;
-(void)toggleExpandedState;
-(double)_verticalMarginForInlineDayPreview;
-(void)_setNewVisibleHourLabels;
-(void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)arg1 ;
-(void)_setupAutoLayout;
-(id)_eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)respectsSelectedCalendarsFilter;
-(id)_selectedCalendars;
-(BOOL)hidesAllDayEvents;
-(BOOL)_shouldShowAllVisibleEvents;
-(NSRange)_displayedHoursRange;
-(id)_anchorEvent;
-(id)_dateForFirstHourMarker;
-(id)_hourMaskForEvents:(id)arg1 ;
-(double)_dayViewHeight;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)renderPressHighlight:(BOOL)arg1 ;
@end
