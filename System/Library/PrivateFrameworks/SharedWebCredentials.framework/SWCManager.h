/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SWCXPCServer.h>

@protocol OS_dispatch_source;
@class NSMutableArray, NSXPCListener, NSObject, NSString;

@interface SWCManager : NSObject <NSXPCListenerDelegate, SWCXPCServer> {

	NSMutableArray* _database;
	NSXPCListener* _xpcListener;
	NSMutableArray* _netRequests;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSObject*<OS_dispatch_source> _recheckTimer;
	NSMutableArray* _xpcRequests;
	BOOL _started;
	BOOL _addedAllApps;
	BOOL _allowUnsigned;
	BOOL _redirects;
	BOOL _verifyEV;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)_scheduleRetries;
-(void)removeBundleID:(id)arg1 ;
-(void)addAllAppsWithReply:(/*^block*/id)arg1 ;
-(void)getInfoForService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)checkService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 mask:(unsigned)arg4 flags:(unsigned)arg5 reply:(/*^block*/id)arg6 ;
-(void)addService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)show:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)logControl:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 details:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)addBundleID:(id)arg1 ;
-(void)_performPeriodicRechecks;
-(void)addAllAppleApps;
-(int)_saveDatabase;
-(void)_reorderAppLinks:(id)arg1 domain:(id)arg2 ;
-(void)addAllApps;
-(id)_installedAppByID:(id)arg1 ;
-(void)addBundleID:(id)arg1 preApproved:(BOOL)arg2 ;
-(void)_retryDownloads;
-(int)_startAppsRequestForDomain:(id)arg1 ;
-(id)_findService:(id)arg1 app:(id)arg2 domain:(id)arg3 ;
-(int)_ensureDatabaseLoaded;
-(void)_schedulePeriodicRechecks;
-(int)_addService:(id)arg1 app:(id)arg2 domain:(id)arg3 ;
-(id)_findAppRequestForURLConnection:(id)arg1 ;
-(id)_appEntitlementsByID:(id)arg1 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(void)_sanitizeDatabase;
-(void)_parseServiceDomainString:(id)arg1 legacy:(BOOL)arg2 service:(id*)arg3 domain:(id*)arg4 ;
-(int)_verifyTrust:(SecTrustRef)arg1 ;
-(void)_completeAppsRequestForURLConnection:(id)arg1 status:(int)arg2 services:(id)arg3 ;
@end
