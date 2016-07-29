/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LAUIDelegate.h>

@protocol OS_dispatch_source;
@class PKWeakReference, NSObject, PKAuthenticatorEvaluationRequest, LAContext;

@interface PKAuthenticatorEvaluationContext : NSObject <LAUIDelegate> {

	PKWeakReference* _weakDelegate;
	PKWeakReference* _weakAuthenticator;
	/*^block*/id _completionHandler;
	double _touchIDBeginTime;
	NSObject*<OS_dispatch_source> _liftFingerTimeout;
	BOOL _fingerPresent;
	BOOL _shouldLiftFinger;
	BOOL _fingerPresentTimeoutRequired;
	BOOL _fingerPresentTimeoutExpired;
	PKAuthenticatorEvaluationRequest* _request;
	LAContext* _LAContext;
	unsigned long long _presentationFlags;

}

@property (nonatomic,readonly) PKAuthenticatorEvaluationRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) LAContext * LAContext;                                   //@synthesize LAContext=_LAContext - In the implementation block
@property (nonatomic,readonly) BOOL fingerPresent;                                      //@synthesize fingerPresent=_fingerPresent - In the implementation block
@property (nonatomic,readonly) BOOL shouldLiftFinger;                                   //@synthesize shouldLiftFinger=_shouldLiftFinger - In the implementation block
@property (nonatomic,readonly) BOOL fingerPresentTimeoutRequired;                       //@synthesize fingerPresentTimeoutRequired=_fingerPresentTimeoutRequired - In the implementation block
@property (nonatomic,readonly) BOOL fingerPresentTimeoutExpired;                        //@synthesize fingerPresentTimeoutExpired=_fingerPresentTimeoutExpired - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationFlags;                    //@synthesize presentationFlags=_presentationFlags - In the implementation block
@property (assign,nonatomic,__weak) id<PKAuthenticatorDelegate> delegate; 
-(void)setDelegate:(id<PKAuthenticatorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKAuthenticatorDelegate>)delegate;
-(void)invalidate;
-(PKAuthenticatorEvaluationRequest *)request;
-(BOOL)fingerPresent;
-(BOOL)fingerPresentTimeoutRequired;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 forAuthenticator:(id)arg3 ;
-(void)_dismissRemoteViewOfType:(long long)arg1 ;
-(unsigned long long)_presentationFlagForRemoteViewType:(long long)arg1 ;
-(BOOL)_delegateSupportsPasscodeDismissal;
-(BOOL)_delegateSupportsPassphraseDismissal;
-(BOOL)_delegateSupportsPasscodePresentation;
-(BOOL)_delegateSupportsPassphrasePresentation;
-(void)_presentRemoteViewOfType:(long long)arg1 withClassName:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)_clearLiftFinger;
-(void)_handleLiftFingerEvent;
-(void)handlePasscodeEvent:(long long)arg1 params:(id)arg2 ;
-(void)handlePassphraseEvent:(long long)arg1 params:(id)arg2 ;
-(void)handleTouchIDEvent:(long long)arg1 params:(id)arg2 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(/*^block*/id)hoistCompletionHandler;
-(LAContext *)LAContext;
-(BOOL)shouldLiftFinger;
-(BOOL)fingerPresentTimeoutExpired;
-(unsigned long long)presentationFlags;
@end

