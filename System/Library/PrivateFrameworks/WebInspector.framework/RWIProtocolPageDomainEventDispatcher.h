/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolPageDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)domContentEventFiredWithTimestamp:(double)arg1 ;
-(void)loadEventFiredWithTimestamp:(double)arg1 ;
-(void)frameNavigatedWithFrame:(id)arg1 ;
-(void)frameDetachedWithFrameId:(id)arg1 ;
-(void)frameStartedLoadingWithFrameId:(id)arg1 ;
-(void)frameStoppedLoadingWithFrameId:(id)arg1 ;
-(void)frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2 ;
-(void)frameClearedScheduledNavigationWithFrameId:(id)arg1 ;
-(void)javascriptDialogOpeningWithMessage:(id)arg1 ;
-(void)javascriptDialogClosed;
-(void)scriptsEnabledWithIsEnabled:(BOOL)arg1 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
@end

