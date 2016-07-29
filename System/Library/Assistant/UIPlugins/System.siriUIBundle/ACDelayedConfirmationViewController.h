/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/ACAssistantConfirmationViewController.h>

@class NSTimer, SAUIDelayedConfirmationView;

@interface ACDelayedConfirmationViewController : ACAssistantConfirmationViewController {

	NSTimer* _automaticConfirmationTimer;

}

@property (nonatomic,retain) SAUIDelayedConfirmationView * aceObject; 
-(BOOL)_executeTriggerBlock:(/*^block*/id)arg1 ;
-(void)_removeFromTranscript;
-(void)_cancelAutomaticConfirmation;
-(BOOL)triggerConfirmation;
-(void)_automaticConfirmationTimerDidFire:(id)arg1 ;
-(BOOL)triggerDenial;
-(BOOL)_hasScheduledAutomaticConfirmation;
-(void)_scheduleAutomaticConfirmation;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

