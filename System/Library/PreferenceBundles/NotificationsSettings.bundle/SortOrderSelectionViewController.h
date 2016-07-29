/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/NotificationsSettings.bundle/NotificationsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol SortOrderSelectionViewControllerDelegate;
@class NSMutableArray, PSSpecifier;

@interface SortOrderSelectionViewController : PSListController {

	NSMutableArray* _sections;
	long long _orderRule;
	long long _recentsOrderRule;
	PSSpecifier* _emptyCell;
	id<SortOrderSelectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SortOrderSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_specifiersFrom:(id)arg1 ;
-(void)_toggleAppListVisibleForRule:(long long)arg1 ;
-(void)setMode:(id)arg1 specifier:(id)arg2 ;
-(void)setSortOrderRule:(long long)arg1 recentsOrderRule:(long long)arg2 ;
-(id)_filterNotInNotificationCenterSections:(id)arg1 ;
-(void)setDelegate:(id<SortOrderSelectionViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<SortOrderSelectionViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSections:(id)arg1 ;
-(id)specifiers;
@end

