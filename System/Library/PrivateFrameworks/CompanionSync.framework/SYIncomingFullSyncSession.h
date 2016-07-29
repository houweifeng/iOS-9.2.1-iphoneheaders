/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SYIncomingFullSyncSession : SYSession {

	unsigned long long _activity;
	long long _state;
	NSObject*<OS_dispatch_source> _stateUpdateSource;
	BOOL canRestart;
	BOOL canRollback;

}
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(unsigned long long)protocolVersion;
-(void)_handleError:(id)arg1 ;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(void)_sendEndSessionResponse:(id)arg1 ;
-(void)_continueProcessing;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_sessionComplete;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_handleBatchChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyErrorAndShutdown;
-(void)_sessionEnded;
-(void)_cancelSession;
-(id)initWithService:(id)arg1 ;
@end
