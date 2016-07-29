/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTMessageDelivery.h>
#import <FTServices/FTMessageQueueDelegate.h>

@protocol OS_dispatch_queue;
@class IDSRemoteURLConnection, NSObject;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {

	IDSRemoteURLConnection* _remoteConnection;
	BOOL _pendingRetryAfterAirplaneMode;
	double _retryTimeAfterAirplaneMode;
	NSObject*<OS_dispatch_queue> _anisetteHeadersQueue;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)networkStateChanged;
-(void)_clearRetryTimer;
-(BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(void)_serverBagLoaded:(id)arg1 ;
-(void)_dequeueIfNeeded;
-(void)_cleanupURLConnection;
-(BOOL)_tryRetryMessageWithTimeInterval:(double)arg1 ;
-(id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3 ;
-(void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2 ;
-(void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 missingAnisetteHeaders:(BOOL*)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_updateWiFiAssertions;
-(BOOL)busy;
-(void)cancelMessage:(id)arg1 ;
-(BOOL)sendMessage:(id)arg1 ;
@end
