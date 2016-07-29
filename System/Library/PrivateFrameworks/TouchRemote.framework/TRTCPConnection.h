/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRTCPConnectionStreamDelegate.h>

@protocol OS_dispatch_queue, TRTCPConnectionDelegate, OS_dispatch_source;
@class NSObject, TRTCPConnectionStream, NSString, NSArray;

@interface TRTCPConnection : NSObject <TRTCPConnectionStreamDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _closed;
	TRTCPConnectionStream* _connectionStream;
	id<TRTCPConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _deviceIdentifier;
	NSObject*<OS_dispatch_source> _keepAliveTimer;
	NSArray* _relevantPacketEventClasses;
	int _uniqueID;

}

@property (nonatomic,__weak,readonly) id<TRTCPConnectionDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (nonatomic,readonly) int uniqueID;                                             //@synthesize uniqueID=_uniqueID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<TRTCPConnectionDelegate>)delegate;
-(void)close;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(int)uniqueID;
-(void)connectionStreamDidClose:(id)arg1 ;
-(void)sendPacketEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_initWithUniqueID:(int)arg1 connectionStream:(id)arg2 ;
-(void)_performNextRead;
-(void)_handleReceivedPacketEvent:(id)arg1 ;
-(void)setDelegate:(id)arg1 delegateQueue:(id)arg2 ;
@end
