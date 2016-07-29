/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MediaSocialStatusPollingDelegate, OS_dispatch_queue;
@class NSObject, ISOperationQueue, NSMutableArray;

@interface MediaSocialStatusPollingCoordinator : NSObject {

	id _btaObserver;
	id<MediaSocialStatusPollingDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _nextScheduledPoll;
	ISOperationQueue* _operationQueue;
	double _pollingInterval;
	NSMutableArray* _requests;

}

@property (assign,nonatomic,__weak) id<MediaSocialStatusPollingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfPollRequests; 
-(long long)numberOfPollRequests;
-(void)addPollRequest:(id)arg1 ;
-(void)_handleBackgroundTaskEvent:(id)arg1 ;
-(void)_addBackgroundTaskJob;
-(void)_finishRequests:(id)arg1 withResponses:(id)arg2 ;
-(void)setDelegate:(id<MediaSocialStatusPollingDelegate>)arg1 ;
-(void)dealloc;
-(id<MediaSocialStatusPollingDelegate>)delegate;
-(id)initWithDispatchQueue:(id)arg1 ;
@end

