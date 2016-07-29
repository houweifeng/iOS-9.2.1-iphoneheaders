/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaRemote/MediaRemote-Structs.h>
@class NSObject, NSMutableDictionary;

@interface MRAVRoutingClientController : NSObject {

	MRMediaRemoteServiceRef _mediaRemoteService;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _pendingCompletionHandlersForCategories;
	NSMutableDictionary* _cachedRoutesForCategories;

}

@property (nonatomic,readonly) MRMediaRemoteServiceRef mediaRemoteService;              //@synthesize mediaRemoteService=_mediaRemoteService - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithMediaRemoteService:(MRMediaRemoteServiceRef)arg1 ;
-(void)fetchPickableRoutesForCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(MRMediaRemoteServiceRef)mediaRemoteService;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
@end

