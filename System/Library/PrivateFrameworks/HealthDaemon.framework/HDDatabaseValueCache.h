/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface HDDatabaseValueCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}

@property (nonatomic,retain) NSMutableDictionary * cache;                             //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceQueue;              //@synthesize resourceQueue=_resourceQueue - In the implementation block
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)fetchObjectForKey:(id)arg1 database:(id)arg2 faultHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(void)setResourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

