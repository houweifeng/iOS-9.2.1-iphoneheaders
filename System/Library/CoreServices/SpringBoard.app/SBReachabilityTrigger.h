/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBiometricEventObserver.h>

@protocol SBReachabilityTriggerDelegate;
@class NSString;

@interface SBReachabilityTrigger : NSObject <SBUIBiometricEventObserver> {

	BOOL _enabled;
	BOOL _debouncedHome;
	BOOL _debounced;
	unsigned long long _numberOfTaps;
	unsigned long long _currentNumberOfTaps;
	unsigned long long _expirationGenCount;
	unsigned long long _debounceGenCount;
	id<SBReachabilityTriggerDelegate> _delegate;

}

@property (nonatomic,readonly) id<SBReachabilityTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTaps;                           //@synthesize numberOfTaps=_numberOfTaps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleHomeButtonPress;
-(void)_debounce;
-(void)_setExpirationTimer;
-(unsigned long long)numberOfTaps;
-(void)setNumberOfTaps:(unsigned long long)arg1 ;
-(id<SBReachabilityTriggerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2 ;
@end

