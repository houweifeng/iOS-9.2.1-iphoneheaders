/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, MFDelayedMessagesPresenterDelegate;
@class NSObject, NSMutableArray;

@interface MFDelayedMessagesPresenter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _fireSource;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	double _postingDelay;
	NSMutableArray* _pendingMessages;
	id<MFDelayedMessagesPresenterDelegate> _delegate;

}

@property (assign,nonatomic) id<MFDelayedMessagesPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double postingDelay; 
-(void)_scheduleNextFireEvent;
-(void)_delegateProcessMessages:(id)arg1 ;
-(void)_processSufficientlyDelayedMessages;
-(void)_removeProcessedMessages;
-(void)setPostingDelay:(double)arg1 ;
-(double)postingDelay;
-(void)clearPendingMessages;
-(void)removePendingMessagesWithIdentifiers:(id)arg1 ;
-(void)schedulePendingMessage:(id)arg1 identifier:(id)arg2 context:(id)arg3 ;
-(void)immediatelyProcessPendingMessagesWithIdentifiers:(id)arg1 ;
-(void)setDelegate:(id<MFDelayedMessagesPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MFDelayedMessagesPresenterDelegate>)delegate;
@end

