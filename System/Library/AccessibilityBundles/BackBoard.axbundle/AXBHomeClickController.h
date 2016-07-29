/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BackBoard/BackBoard-Structs.h>
@class NSString, AXAccessQueueTimer, NSMutableArray, NSLock;

@interface AXBHomeClickController : NSObject {

	BOOL _isAlertVisible;
	NSString* _eventTapIdentifier;
	SCRCMathAverageValue _xMotion;
	SCRCMathAverageValue _yMotion;
	double _startMotion;
	AXAccessQueueTimer* _shakeCancelerTimer;
	NSMutableArray* _menuButtonClientIds;
	NSLock* _menuButtonLock;
	BOOL isHearingAidControlVisible;
	BOOL switchControlRendersDeviceUnusable;
	BOOL _didShowHoldDurationTripleClickHelp;

}

@property (assign,nonatomic) BOOL isHearingAidControlVisible; 
@property (assign,nonatomic) BOOL switchControlRendersDeviceUnusable; 
@property (assign,nonatomic) BOOL didShowHoldDurationTripleClickHelp;              //@synthesize didShowHoldDurationTripleClickHelp=_didShowHoldDurationTripleClickHelp - In the implementation block
+(void)initializeMonitor;
+(id)controller;
-(void)_startVoiceOverSequence;
-(void)_toggleGrayscale;
-(void)_toggleGuidedAccess;
-(void)_springBoardDied:(id)arg1 ;
-(void)_triggerAppTransition;
-(void)_toggleDisplayAskSheet;
-(void)_handleZoomInBuddyAlertResult:(long long)arg1 ;
-(void)_toggleWhiteOnBlack;
-(void)_toggleAssistiveTouch;
-(BOOL)isHearingAidControlVisible;
-(BOOL)_purpleBuddySetupComplete;
-(void)_toggleTouchAccommodations;
-(void)_updateTripleHomeSettings:(BOOL)arg1 ;
-(BOOL)captureHomeClick:(id)arg1 ;
-(void)_toggleSwitchOverOffMainThread;
-(void)_updateEventTapSettings;
-(void)_toggleZoomOffMainThread;
-(void)_updateHomeClickEnabled;
-(void)_updateHomeClickSpeed;
-(void)_setHearingAidControlVisible:(BOOL)arg1 ;
-(void)_toggleSwitchOver;
-(void)_fireHomeButtons:(BOOL)arg1 ;
-(void)_toggleVoiceOver;
-(BOOL)_captureKeyboardCommands:(SCD_Struct_AX1*)arg1 ;
-(id)_eventTapIdentifier;
-(void)_appTransition;
-(void)_didHideAlert;
-(void)_willShowAlert;
-(void)_toggleZoom;
-(void)_toggleWhiteOnBlackOffMainThread;
-(void)_toggleAssistiveTouchOffMainThread;
-(BOOL)didShowHoldDurationTripleClickHelp;
-(void)setDidShowHoldDurationTripleClickHelp:(BOOL)arg1 ;
-(BOOL)_checkIfZoomWasActivated:(id)arg1 stealEvent:(BOOL*)arg2 ;
-(void)_handleZoomActivationDuringBuddy;
-(BOOL)switchControlRendersDeviceUnusable;
-(void)setIsHearingAidControlVisible:(BOOL)arg1 ;
-(void)dealloc;
-(void)initialize;
-(void)setSwitchControlRendersDeviceUnusable:(BOOL)arg1 ;
@end

