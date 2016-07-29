/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCUIProfile, LSApplicationProxy, NSString;

@interface MCManagedAppDetailsViewController : UITableViewController <PSStateRestoration> {

	MCUIProfile* _UIProfile;
	LSApplicationProxy* _managedAppProxy;

}

@property (nonatomic,retain) MCUIProfile * UIProfile;                           //@synthesize UIProfile=_UIProfile - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * managedAppProxy;              //@synthesize managedAppProxy=_managedAppProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)_setup;
-(BOOL)canBeShownFromSuspendedState;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(MCUIProfile *)UIProfile;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(id)initWithUIProfile:(id)arg1 managedAppID:(id)arg2 ;
-(LSApplicationProxy *)managedAppProxy;
-(id)initWithUIProfile:(id)arg1 managedApp:(id)arg2 ;
-(void)setManagedAppProxy:(LSApplicationProxy *)arg1 ;
@end

