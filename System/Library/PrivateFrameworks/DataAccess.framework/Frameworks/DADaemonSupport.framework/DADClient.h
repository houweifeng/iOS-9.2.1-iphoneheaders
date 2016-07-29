/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DADisableableObject.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary, NSString;

@interface DADClient : DADisableableObject {

	int _numOutstandingAgentDisables;
	int _numOutstandingBlockingClientCalls;
	int _numOutstandingRefreshPriorityClientCalls;
	NSObject*<OS_xpc_object> _conn;
	NSMutableDictionary* _watchedIDs;
	NSMutableDictionary* _busyIDs;
	NSMutableDictionary* _accountTimers;
	NSMutableDictionary* _actionDelegatesById;
	NSString* _clientName;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> conn;                             //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * watchedIDs;                          //@synthesize watchedIDs=_watchedIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * busyIDs;                             //@synthesize busyIDs=_busyIDs - In the implementation block
@property (assign,nonatomic) int numOutstandingAgentDisables;                           //@synthesize numOutstandingAgentDisables=_numOutstandingAgentDisables - In the implementation block
@property (assign,nonatomic) int numOutstandingBlockingClientCalls;                     //@synthesize numOutstandingBlockingClientCalls=_numOutstandingBlockingClientCalls - In the implementation block
@property (assign,nonatomic) int numOutstandingRefreshPriorityClientCalls;              //@synthesize numOutstandingRefreshPriorityClientCalls=_numOutstandingRefreshPriorityClientCalls - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountTimers;                       //@synthesize accountTimers=_accountTimers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionDelegatesById;                 //@synthesize actionDelegatesById=_actionDelegatesById - In the implementation block
@property (nonatomic,retain) NSString * clientName;                                     //@synthesize clientName=_clientName - In the implementation block
+(id)clientsToInterrogate;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)conn;
-(void)setConn:(NSObject*<OS_xpc_object>)arg1 ;
-(id)_clientName;
-(void)_foldersUpdated:(id)arg1 ;
-(void)disable;
-(void)applyClientStatusReportToAggregator:(id)arg1 ;
-(void)_clientDiedWithReason:(id)arg1 ;
-(void)_dispatchMessage:(id)arg1 ;
-(void)setWatchedIDs:(NSMutableDictionary *)arg1 ;
-(void)setBusyIDs:(NSMutableDictionary *)arg1 ;
-(void)setAccountTimers:(NSMutableDictionary *)arg1 ;
-(void)setActionDelegatesById:(NSMutableDictionary *)arg1 ;
-(void)_asPolicyKeyChanged:(id)arg1 ;
-(void)_requestClientStatusDump:(id)arg1 ;
-(void)_agentsStopped:(id)arg1 ;
-(NSMutableDictionary *)watchedIDs;
-(NSMutableDictionary *)busyIDs;
-(NSMutableDictionary *)actionDelegatesById;
-(NSMutableDictionary *)accountTimers;
-(void)unregisterForInterrogation;
-(void)_removeBusyFolderIDs:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)_removeWatchedFolderIDs:(id)arg1 forAccountWithID:(id)arg2 ;
-(int)numOutstandingAgentDisables;
-(void)setNumOutstandingAgentDisables:(int)arg1 ;
-(void)noteBlockedClientCallChange:(int)arg1 ;
-(void)setNumOutstandingBlockingClientCalls:(int)arg1 ;
-(void)setNumOutstandingRefreshPriorityClientCalls:(int)arg1 ;
-(int)numOutstandingBlockingClientCalls;
-(int)numOutstandingRefreshPriorityClientCalls;
-(id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2 ;
-(id)timersForAccountWithID:(id)arg1 ;
-(void)_requestFolderContentsUpdateForFolders:(id)arg1 accountId:(id)arg2 dataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(void)_requestAllFolderContentsUpdateForAccountId:(id)arg1 dataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_requestFolderListUpdateForAccountId:(id)arg1 dataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(void)noteRefreshClientCallChange:(int)arg1 ;
-(void)registerForInterrogation;
-(void)_beginMonitoringFolders:(id)arg1 ;
-(void)_stopMonitoringFolders:(id)arg1 ;
-(void)_resumeMonitoringFolders:(id)arg1 ;
-(void)_suspendMonitoringFolders:(id)arg1 ;
-(void)_startMonitoringAgents:(id)arg1 ;
-(void)_stopMonitoringAgents:(id)arg1 ;
-(void)_getCurrentPolicyKey:(id)arg1 ;
-(void)_requestPolicyUpdate:(id)arg1 ;
-(void)_requestFolderContentsUpdate:(id)arg1 ;
-(void)_requestAllFolderContentsUpdate:(id)arg1 ;
-(void)_requestFolderListUpdate:(id)arg1 ;
-(void)_openServerContactsSearch:(id)arg1 ;
-(void)_cancelServerContactsSearch:(id)arg1 ;
-(void)_processMeetingRequests:(id)arg1 ;
-(void)_resetCertWarnings:(id)arg1 ;
-(void)_setFolderIdsThatExternalClientsCareAbout:(id)arg1 ;
-(void)_reportFolderItemsSyncResult:(id)arg1 ;
-(void)_handleURL:(id)arg1 ;
-(void)_processFolderChange:(id)arg1 ;
-(void)_removeStoresForAccountWithID:(id)arg1 ;
-(void)_getStatusReports:(id)arg1 ;
-(void)_registerForInterrogation:(id)arg1 ;
-(void)_resetThrottleTimers:(id)arg1 ;
-(void)_beginDownloadingAttachmentEvent:(id)arg1 eventDict:(id)arg2 ;
-(void)_cancelDownloadingAttachmentEvent:(id)arg1 eventDict:(id)arg2 ;
-(void)_respondToSharedCalendarEvent:(id)arg1 eventDict:(id)arg2 ;
-(void)_fillOutEASTimeZoneInfo:(id)arg1 ;
-(void)_getActiveSyncDeviceIdentifier:(id)arg1 ;
-(void)_openServerOofSettingsRequest:(id)arg1 ;
-(void)_checkIsOofSettingsSupported:(id)arg1 ;
-(void)_requestCalendarAvailability:(id)arg1 eventDict:(id)arg2 ;
-(void)_cancelCalendarAvailabilityRequest:(id)arg1 eventDict:(id)arg2 ;
-(void)_performCalendarDirectorySearch:(id)arg1 eventDict:(id)arg2 ;
-(void)_cancelCalendarDirectorySearch:(id)arg1 eventDict:(id)arg2 ;
-(void)_getAccountExternalIdentification:(id)arg1 eventDict:(id)arg2 ;
-(void)delegateWithIDIsGoingAway:(id)arg1 ;
-(id)rawConnection;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
@end

