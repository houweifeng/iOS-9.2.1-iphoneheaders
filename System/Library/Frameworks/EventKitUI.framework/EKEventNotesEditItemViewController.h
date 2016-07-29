/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, CalendarNotesCell, NSString;

@interface EKEventNotesEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _table;
	CalendarNotesCell* _cell;
	NSString* _text;

}

@property (nonatomic,copy) NSString * noteText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)validateAllowingAlert:(BOOL)arg1 ;
-(void)setNoteText:(NSString *)arg1 ;
-(NSString *)noteText;
@end

