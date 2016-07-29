/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ServiceInterface.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableDictionary, FlowAnalyticsEngine, NetworkAnalyticsEngine, NOIAnalyticsEngine, NSObject, NSString;

@interface ServiceImpl : NSObject <NSXPCListenerDelegate, ServiceInterface> {

	NSMutableDictionary* spaces;
	FlowAnalyticsEngine* f_engine;
	NetworkAnalyticsEngine* n_engine;
	NOIAnalyticsEngine* noi_engine;
	NSObject*<OS_dispatch_semaphore> svc_sema;
	NSObject*<OS_dispatch_queue> queue;
	NSMutableDictionary* lastAllowedRequests;
	id featureReadyObserver;
	BOOL _isHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)shutdown;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)assertEntitlement:(id)arg1 entitlement:(id)arg2 orWaiveOnIntent:(id)arg3 ;
-(void)identifierForUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)setOption:(id)arg1 inScopes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 inScopes:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)unsubscribeToNOIs:(id)arg1 ;
-(void)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setUsageOption:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetUsageFor:(id)arg1 nameKind:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_serviceReadyCheckPoint;
-(BOOL)_serviceReady;
-(void)_serviceReadyCheckPointRelease;
-(BOOL)_checkRateLimitForConnection:(id)arg1 ;
@end

