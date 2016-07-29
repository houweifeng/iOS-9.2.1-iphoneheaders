/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCallModelState.h>

@class TUTelephonyCallModel, TUFaceTimeAudioCallModel, TUProxyCallModel;

@interface TUCallCenterCallModelState : TUCallModelState

@property (nonatomic,retain,readonly) TUTelephonyCallModel * telephonyCallModel; 
@property (nonatomic,retain,readonly) TUFaceTimeAudioCallModel * faceTimeAudioCallModel; 
@property (nonatomic,retain,readonly) TUProxyCallModel * proxyCallModel; 
-(void)dealloc;
-(id)init;
-(void)telephonyCallModelDidChange:(id)arg1 ;
-(void)handlePossibleStateChange;
-(TUProxyCallModel *)proxyCallModel;
-(BOOL)_supportsCallModelType:(int)arg1 ;
-(BOOL)_onlySupportsCallModelType:(int)arg1 ;
-(BOOL)_updateAddCallAllowed;
-(BOOL)_updateAmbiguityState;
-(BOOL)_updateEndAndAnswerAllowed;
-(BOOL)_updateHardPauseAvailable;
-(BOOL)_updateHoldAllowed;
-(BOOL)_updateHoldAndAnswerAllowed;
-(BOOL)_updateMergeable;
-(BOOL)_updateSendToVoicemailAllowed;
-(BOOL)_updateSwappable;
-(BOOL)_updateTakingCallsPrivateAllowed;
-(TUTelephonyCallModel *)telephonyCallModel;
-(TUFaceTimeAudioCallModel *)faceTimeAudioCallModel;
-(BOOL)_allCallsSupportCallModelType:(int)arg1 ;
-(BOOL)_displayedCallSupportsCallModelType:(int)arg1 ;
-(BOOL)_anyCallsSupportCallModelType:(int)arg1 ;
-(BOOL)isAmbiguous;
-(BOOL)updateInternalState;
@end

