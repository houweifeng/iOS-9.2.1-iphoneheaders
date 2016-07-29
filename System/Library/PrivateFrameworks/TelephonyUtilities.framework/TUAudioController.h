/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_group;
@class NSObject;

@interface TUAudioController : NSObject {

	NSObject*<OS_dispatch_semaphore> _modifyingStateLock;
	NSObject*<OS_dispatch_group> _outstandingRequestsGroup;

}
-(void)_acquireLock;
-(void)_releaseLock;
-(void)_enterOutstandingRequestsGroup;
-(void)_leaveOutstandingRequestsGroup;
-(void)_requestUpdatedValueWithBlock:(/*^block*/id)arg1 object:(id*)arg2 isRequestingPointer:(BOOL*)arg3 forceNewRequest:(BOOL)arg4 scheduleTimePointer:(unsigned long long*)arg5 notificationString:(id)arg6 queue:(id)arg7 ;
-(id)init;
-(void)blockUntilOutstandingRequestsComplete;
@end

