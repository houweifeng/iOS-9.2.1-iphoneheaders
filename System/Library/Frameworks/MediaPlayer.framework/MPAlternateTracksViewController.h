/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAbstractAlternateTracksViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, UINavigationBar, UITableView, UIActivityIndicatorView, UITextLabel, NSString;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {

	UIView* _backgroundView;
	UINavigationBar* _navigationBar;
	UITableView* _table;
	UIActivityIndicatorView* _progressIndicator;
	UITextLabel* _loadingLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willChangeToInterfaceOrientation:(long long)arg1 ;
-(void)didChangeToInterfaceOrientation:(long long)arg1 ;
-(void)_exitAnimated:(BOOL)arg1 ;
-(void)_setCell:(id)arg1 isChecked:(BOOL)arg2 ;
-(void)addLoadingUI;
-(void)removeLoadingUI;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
@end
