/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class NSArray, _UIActivityUserDefaults, UINavigationController, UIViewController;

@interface _UIUserDefaultsActivity : UIActivity {

	NSArray* _availableActivities;
	_UIActivityUserDefaults* _userDefaults;
	UINavigationController* _navigationController;
	UIViewController* _userDefaultsViewController;

}

@property (nonatomic,copy) NSArray * availableActivities;                                //@synthesize availableActivities=_availableActivities - In the implementation block
@property (nonatomic,retain) _UIActivityUserDefaults * userDefaults;                     //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIViewController * userDefaultsViewController;              //@synthesize userDefaultsViewController=_userDefaultsViewController - In the implementation block
-(id)activityType;
-(UINavigationController *)navigationController;
-(void)_cleanup;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(id)_activityImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)setUserDefaults:(_UIActivityUserDefaults *)arg1 ;
-(_UIActivityUserDefaults *)userDefaults;
-(id)initWithUserDefaults:(id)arg1 ;
-(void)setAvailableActivities:(NSArray *)arg1 ;
-(id)activityViewController;
-(void)_prepareActivityViewControllerIfNeeded;
-(void)setUserDefaultsViewController:(UIViewController *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(NSArray *)availableActivities;
-(void)_settingsViewControllerDidDismiss:(id)arg1 ;
-(UIViewController *)userDefaultsViewController;
@end

