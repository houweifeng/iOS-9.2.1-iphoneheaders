/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIKeyboardArbitration
@required
-(void)setDebugLevel:(long long)arg1;
-(void)retrieveDebugInformation:(/*^block*/id)arg1;
-(void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 withSuppression:(int)arg3 onConnected:(/*^block*/id)arg4;
-(void)setWindowContextID:(unsigned)arg1 sceneIdentifier:(id)arg2 forKeyboard:(BOOL)arg3 withLevel:(double)arg4;
-(void)signalKeyboardChanged:(id)arg1 onCompletion:(/*^block*/id)arg2;
-(void)signalKeyboardChangeComplete;
-(void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2;
-(void)notifyHostedPIDsOfSuppression:(BOOL)arg1;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3;
-(void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(/*^block*/id)arg2;

@end

