/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNObserver.h>

@class CNVirtualScheduler, NSMutableArray, NSArray, NSString;

@interface CNTestableObserver : NSObject <CNObserver> {

	CNVirtualScheduler* _scheduler;
	NSMutableArray* _results;

}

@property (readonly) NSArray * results;                             //@synthesize results=_results - In the implementation block
@property (readonly) NSArray * resultValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerWithScheduler:(id)arg1 ;
-(void)dealloc;
-(NSArray *)results;
-(NSArray *)resultValues;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)initWithScheduler:(id)arg1 ;
@end

