/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDActivityEventRecording.h>
#import <libobjc.A.dylib/_CDAppActionRecording.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSXPCConnection;

@interface _CDAppActionRecorder : NSObject <_CDActivityEventRecording, _CDAppActionRecording> {

	NSString* _previousActivityType;
	NSString* _previousTitle;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * previousActivityType;                 //@synthesize previousActivityType=_previousActivityType - In the implementation block
@property (nonatomic,retain) NSString * previousTitle;                        //@synthesize previousTitle=_previousTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appActionRecorder;
-(void)createConnection;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)recordUserActivityEvent:(id)arg1 ;
-(void)_recordUserActivityEvent:(id)arg1 ;
-(void)recordUserActivityEvents:(id)arg1 ;
-(void)recordUserActivityEventForCollection:(id)arg1 ;
-(void)recordAppAction:(id)arg1 ;
-(NSString *)previousActivityType;
-(void)setPreviousActivityType:(NSString *)arg1 ;
-(NSString *)previousTitle;
-(void)setPreviousTitle:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

