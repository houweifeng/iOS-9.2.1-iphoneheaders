/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXAccessQueueTimer.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface AXDispatchTimer : NSObject <AXAccessQueueTimer> {

	BOOL _active;
	BOOL _pending;
	BOOL _cancelled;
	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;
	/*^block*/id _processBlock;
	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id processBlock;                                                           //@synthesize processBlock=_processBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                                            //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                             //@synthesize active=_active - In the implementation block
@property (assign,getter=isPending,nonatomic) BOOL pending;                                           //@synthesize pending=_pending - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)_reallyCancel;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)setProcessBlock:(id)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(id)cancelBlock;
-(id)processBlock;
-(BOOL)isPending;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
@end

