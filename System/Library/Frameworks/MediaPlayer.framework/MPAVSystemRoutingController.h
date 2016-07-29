/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSPointerArray, NSObject;

@interface MPAVSystemRoutingController : NSObject {

	NSPointerArray* _clientRoutingControllers;
	long long _clientDiscoveryMode;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _debugNotifyToken;

}
+(id)sharedRoutingController;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)_clientRoutingControllerDidUpdateDiscoveryModeNotification:(id)arg1 ;
-(void)_debugLogSystemControllerState;
-(void)_onQueueUpdateClientRouteDiscoveryMode;
-(void)_updateClientRouteDiscoveryMode;
-(void)registerClientRoutingController:(id)arg1 ;
-(void)unregisterClientRoutingController:(id)arg1 ;
@end

