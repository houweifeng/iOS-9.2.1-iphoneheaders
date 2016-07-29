/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSArray;

@interface RTCReporting : NSObject {

	NSObject*<OS_dispatch_queue> _reportingQueue;
	/*^block*/id _loggingBlock;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _timer;
	int _counter;
	int _intervalMultiplier;
	NSMutableDictionary* _periodicServiceDict;
	NSArray* _enabledBackendNames;

}

@property (nonatomic,copy) id messageLoggingBlock;              //@synthesize loggingBlock=_loggingBlock - In the implementation block
+(BOOL)sendMsgToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 componentType:(int)arg5 version:(unsigned short)arg6 sessionID:(unsigned)arg7 eventID:(unsigned short)arg8 method:(unsigned short)arg9 respCode:(unsigned short)arg10 dict:(id)arg11 ;
+(void)regeneratePersistentIdentifierForDNU:(BOOL)arg1 ;
+(id)getPersistentIdentifierForDNU:(BOOL)arg1 ;
+(BOOL)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id*)arg6 ;
-(id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned)arg3 frameworksToCheck:(id)arg4 ;
-(id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned)arg3 ;
-(void)setUserInfoDict:(id)arg1 ;
-(BOOL)setReportToServer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)setReportToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 msgBlock:(/*^block*/id)arg5 ;
-(void)sendMsgWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3 ;
-(BOOL)startLogTimerWithInterval:(int)arg1 reportingFrequency:(int)arg2 reportingMethod:(unsigned short)arg3 reportingStatus:(unsigned short)arg4 ;
-(BOOL)stopLogTimerForSession;
-(BOOL)registerPeriodicTask:(id)arg1 needToUpDate:(BOOL)arg2 needToReport:(BOOL)arg3 service_block:(/*^block*/id)arg4 ;
-(BOOL)unregisterPeriodTask:(id)arg1 unservice_block:(/*^block*/id)arg2 ;
-(int)getUploadflag;
-(BOOL)uploadFileWithName:(id)arg1 ;
-(BOOL)serverSupportsFileUpload;
-(BOOL)uploadFileWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)uploadDataArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2 ;
-(void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 ;
-(void)stopLogTimer;
-(BOOL)registerPeriodicTaskForModule:(unsigned)arg1 needToUpdate:(BOOL)arg2 needToReport:(BOOL)arg3 serviceBlock:(/*^block*/id)arg4 ;
-(BOOL)unregisterPeriodTaskForModule:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(/*^block*/id)arg4 ;
-(void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(/*^block*/id)arg2 ;
-(void)setMessageLoggingBlock:(id)arg1 ;
-(BOOL)sendMessageWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)messageLoggingBlock;
-(BOOL)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 ;
-(BOOL)flushMessages;
@end
