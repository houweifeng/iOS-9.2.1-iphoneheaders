/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFuture.h>

@class CNFutureTask, NSString;

@interface _CNLazyFuture : NSObject <CNFuture> {

	CNFutureTask* _futureTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
-(BOOL)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)result:(id*)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

