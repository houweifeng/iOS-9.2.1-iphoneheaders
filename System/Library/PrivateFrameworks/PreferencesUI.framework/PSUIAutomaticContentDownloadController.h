/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableArray, NSMutableDictionary;

@interface PSUIAutomaticContentDownloadController : PSListController {

	id _settingsChangedObserver;
	NSMutableArray* _applications;
	NSMutableDictionary* _applicationStates;

}

@property (nonatomic,retain) NSMutableArray * applications;                        //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applicationStates;              //@synthesize applicationStates=_applicationStates - In the implementation block
-(NSMutableDictionary *)applicationStates;
-(void)setApplicationStates:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)whitelist;
-(NSMutableArray *)applications;
-(void)setApplicationEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)applicationEnabled:(id)arg1 ;
-(void)setBackgroundRefreshState:(id)arg1 withSpecifier:(id)arg2 ;
-(id)backgroundRefreshState:(id)arg1 ;
-(id)specifiers;
-(void)setApplications:(NSMutableArray *)arg1 ;
@end

