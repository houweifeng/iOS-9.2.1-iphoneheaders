/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInteractionProgress.h>
#import <UIKit/_UIForceLevelClassifierDelegate.h>

@class _UITouchForceObservable, _UIForceLevelClassifier, NSObservation, NSString;

@interface UIPreviewForceInteractionProgress : UIInteractionProgress <_UIForceLevelClassifierDelegate> {

	_UITouchForceObservable* _observable;
	long long _targetState;
	long long _minimumState;
	BOOL _updateMinimumStateWithTargetState;
	_UIForceLevelClassifier* _classifier;
	NSObservation* _classifierObservation;
	BOOL _enteredMinimumState;
	BOOL _didEnd;
	NSObservation* _progressObservation;
	NSObservation* _targetStateUpdateObservation;
	NSObservation* _gestureBeganObservation;
	BOOL _completesAtTargetState;

}

@property (assign,nonatomic) BOOL completesAtTargetState;                                                                                                          //@synthesize completesAtTargetState=_completesAtTargetState - In the implementation block
@property (assign,setter=_setClassifierShouldRespectSystemGestureTouchFiltering:,nonatomic) BOOL _classifierShouldRespectSystemGestureTouchFiltering; 
@property (assign,setter=_setTargetState:,nonatomic) long long _targetState;                                                                                       //@synthesize targetState=_targetState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithView:(id)arg1 targetState:(long long)arg2 ;
-(void)_forceLevelClassifierDidReset:(id)arg1 ;
-(void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2 ;
-(void)setCompletesAtTargetState:(BOOL)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(BOOL)didEnd;
-(id)initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 ;
-(id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 ;
-(id)initWithGestureRecognizer:(id)arg1 minimumRequiredState:(long long)arg2 ;
-(void)_setTargetState:(long long)arg1 ;
-(void)_gestureRecognizerBegan:(BOOL)arg1 ;
-(id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(BOOL)arg4 ;
-(void)_installProgressObserver;
-(id)_initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(BOOL)arg4 ;
-(void)_setClassifierShouldRespectSystemGestureTouchFiltering:(BOOL)arg1 ;
-(BOOL)_classifierShouldRespectSystemGestureTouchFiltering;
-(long long)_targetState;
-(BOOL)completesAtTargetState;
@end

