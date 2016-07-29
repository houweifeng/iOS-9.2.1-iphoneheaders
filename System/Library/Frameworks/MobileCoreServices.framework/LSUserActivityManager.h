/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSUserActivityClientResponseProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMapTable, NSUUID, NSString;

@interface LSUserActivityManager : NSObject <LSUserActivityClientResponseProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serverQ;
	BOOL _connectionInitializationSucceeded;
	BOOL _needToSendInitialMessage;
	NSMapTable* _userActivitiesByUUID;
	BOOL _supportsActivityContinuation;
	BOOL _activityContinuationIsEnabled;
	NSUUID* _activeUserActivityUUID;

}

@property (retain,readonly) NSXPCConnection * connection; 
@property (copy) NSUUID * activeUserActivityUUID;                       //@synthesize activeUserActivityUUID=_activeUserActivityUUID - In the implementation block
@property (readonly) BOOL supportsActivityContinuation;                 //@synthesize supportsActivityContinuation=_supportsActivityContinuation - In the implementation block
@property (readonly) BOOL activityContinuationIsEnabled; 
@property (readonly) NSObject*<OS_dispatch_queue> serverQ;              //@synthesize serverQ=_serverQ - In the implementation block
@property (retain) NSMapTable * userActivitiesByUUID;                   //@synthesize userActivitiesByUUID=_userActivitiesByUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldSupportActivityContinuation;
+(BOOL)userActivityContinuationSupported;
+(id)defaultManager;
-(void)sendInitialMessage;
-(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(NSUUID *)activeUserActivityUUID;
-(NSObject*<OS_dispatch_queue>)serverQ;
-(BOOL)userActivityIsActive:(id)arg1 ;
-(void)makeInactive:(id)arg1 ;
-(NSMapTable *)userActivitiesByUUID;
-(void)setActiveUserActivityUUID:(NSUUID *)arg1 ;
-(void)makeActive:(id)arg1 ;
-(id)_findUserActivityForUUID:(id)arg1 ;
-(void)addUserActivity:(id)arg1 ;
-(void)askClientUserActivityToSave:(id)arg1 ;
-(void)askClientUserActivityToSave:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)tellClientUserActivityItWasResumed:(id)arg1 ;
-(BOOL)activityContinuationIsEnabled;
-(void)fetchUUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeUserActivity:(id)arg1 ;
-(void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 ;
-(id)encodeUserActivity:(id)arg1 ;
-(id)createByDecodingUserActivity:(id)arg1 ;
-(void)tellDaemonAboutNewLSUserActivity:(id)arg1 ;
-(void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(BOOL)arg2 ;
-(void)markUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2 ;
-(void)pinUserActivity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsActivityContinuation;
-(void)setUserActivitiesByUUID:(NSMapTable *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
@end

