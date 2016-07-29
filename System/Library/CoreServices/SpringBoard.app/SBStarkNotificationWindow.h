/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>
#import <SpringBoard/SBStarkNotificationViewControllerDelegate.h>

@protocol SBStarkSessionConfiguring;
@class SBStarkScreenFocusController, SBStarkSystemGestureManager, SBStarkNotificationViewController, NSString;

@interface SBStarkNotificationWindow : SBWindow <SBStarkNotificationViewControllerDelegate> {

	id<SBStarkSessionConfiguring> _configuration;
	SBStarkScreenFocusController* _focusController;
	SBStarkSystemGestureManager* _systemGestureManager;
	BOOL _assertingFocus;
	id _borrowScreenToken;

}

@property (nonatomic,retain) SBStarkScreenFocusController * focusController;                      //@synthesize focusController=_focusController - In the implementation block
@property (nonatomic,retain) SBStarkNotificationViewController * rootViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(void)setFocusController:(SBStarkScreenFocusController *)arg1 ;
-(id)initWithConfiguration:(id)arg1 systemGestureManager:(id)arg2 layoutStrategy:(id)arg3 debugName:(id)arg4 scene:(id)arg5 ;
-(void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2 ;
-(void)notificationViewController:(id)arg1 willDisplayBannerView:(id)arg2 ;
-(SBStarkScreenFocusController *)focusController;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setRootViewController:(SBStarkNotificationViewController *)arg1 ;
@end

