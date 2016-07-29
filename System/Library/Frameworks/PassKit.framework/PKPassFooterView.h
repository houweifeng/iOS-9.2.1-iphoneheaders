/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol OS_dispatch_source;
@class PKPassView, PKPassFooterContentView, PKPaymentSessionHandle, NSObject;

@interface PKPassFooterView : UIView {

	PKPassView* _passView;
	PKPassFooterContentView* _contentView;
	PKPaymentSessionHandle* _sessionHandle;
	NSObject*<OS_dispatch_source> _sessionStartTimer;
	long long _paymentApplicationState;
	BOOL _isVisible;
	BOOL _isBackgrounded;
	unsigned long long _sessionToken;
	long long _state;

}

@property (nonatomic,retain) PKPassView * passView;                //@synthesize passView=_passView - In the implementation block
@property (nonatomic,readonly) long long state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isPassAuthorized; 
-(void)dealloc;
-(void)layoutSubviews;
-(long long)state;
-(void)_setContentView:(id)arg1 ;
-(void)_endSession;
-(PKPassView *)passView;
-(BOOL)isPassAuthorized;
-(id)initWithPassView:(id)arg1 context:(id)arg2 ;
-(void)configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)setPassView:(PKPassView *)arg1 ;
-(void)_handleEnterForegroundNotification:(id)arg1 ;
-(void)_handleEnterBackgroundNotification:(id)arg1 ;
-(void)_configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3 ;
-(void)_endSessionStartTimer;
-(id)_contentViewForPaymentApplicationWithContext:(id)arg1 ;
-(void)_configureForValueAddedServiceWithContext:(id)arg1 ;
-(void)_configureForPersonalizedPaymentApplicationWithContext:(id)arg1 ;
-(void)_lostModeButtonTapped;
-(void)_deleteButtonTapped;
-(BOOL)_canApplyContentViewForPersonalizedApplication;
-(void)_setContentView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_startContactlessInterfaceSessionWithSessionAvailable:(/*^block*/id)arg1 sessionUnavailable:(/*^block*/id)arg2 ;
-(BOOL)_canApplyContentViewForValueAddedService;
@end
