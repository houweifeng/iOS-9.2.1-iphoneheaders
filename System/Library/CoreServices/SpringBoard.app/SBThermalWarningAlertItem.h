/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol SBThermalWarningAlertItemDelegate;
@interface SBThermalWarningAlertItem : SBAlertItem {

	id<SBThermalWarningAlertItemDelegate> _delegate;
	int _actionTaken;

}

@property (getter=isWaitingForResponse,nonatomic,readonly) BOOL waitingForResponse; 
-(void)_tryToSendAction:(int)arg1 ;
-(void)_autoCoolDown;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_playPresentationSound;
-(BOOL)undimsScreen;
-(BOOL)unlocksScreen;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)willActivate;
-(BOOL)isWaitingForResponse;
@end

