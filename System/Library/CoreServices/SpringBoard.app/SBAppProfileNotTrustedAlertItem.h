/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UIAlertViewDelegate.h>

@class SBApplicationIcon, NSString;

@interface SBAppProfileNotTrustedAlertItem : SBAlertItem <UIAlertViewDelegate> {

	SBApplicationIcon* _icon;
	BOOL _launchApp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIcon:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

