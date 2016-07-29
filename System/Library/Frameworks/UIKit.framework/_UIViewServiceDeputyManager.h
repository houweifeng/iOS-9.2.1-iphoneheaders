/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIViewServiceViewControllerOperatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, _UIAsyncInvocation, NSMutableDictionary, NSLock, NSMutableSet, NSString;

@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	_UIAsyncInvocation* _invalidationInvocation;
	NSMutableDictionary* _connectionHandlers;
	NSLock* _connectionHandlersLock;
	NSMutableSet* _deputies;
	/*^block*/id _terminationHandler;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	id _delegate;

}

@property (assign) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)delegate;
-(void)invalidate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)_isDeallocating;
-(void)forwardInvocation:(id)arg1 ;
-(int)__automatic_invalidation_logic;
-(BOOL)_tryRetain;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(Class)_deputyClassForConnectionSelector:(SEL)arg1 ;
-(void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)checkDeputyForRotation:(id)arg1 ;
-(void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(R)arg2 replyHandler:(id)arg3 :(/*^block*/id)arg4 ;
-(void)unregisterDeputyClass:(Class)arg1 ;
-(void)registerDeputyClass:(Class)arg1 withConnectionHandler:(/*^block*/id)arg2 ;
-(void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2 ;
@end

