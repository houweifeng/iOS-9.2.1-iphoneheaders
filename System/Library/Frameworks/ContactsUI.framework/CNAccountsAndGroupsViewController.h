/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CNAccountsAndGroupsViewControllerDelegate;
@class UIRefreshControl, CNAccountsAndGroupsDataSource, NSString;

@interface CNAccountsAndGroupsViewController : UITableViewController <UITableViewDelegate> {

	UIRefreshControl* _refreshControl;
	CNAccountsAndGroupsDataSource* _dataSource;
	BOOL _needsReload;
	BOOL _tableViewNeedsReloadAfterResume;
	BOOL _showsRefreshButton;
	id<CNAccountsAndGroupsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) CNAccountsAndGroupsDataSource * dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CNAccountsAndGroupsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(CNAccountsAndGroupsDataSource *)arg1 ;
-(void)setDelegate:(id<CNAccountsAndGroupsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(CNAccountsAndGroupsDataSource *)dataSource;
-(id<CNAccountsAndGroupsViewControllerDelegate>)delegate;
-(void)applicationDidResume;
-(id)initWithStyle:(long long)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)done:(id)arg1 ;
-(void)refreshEverythingNow;
@end

