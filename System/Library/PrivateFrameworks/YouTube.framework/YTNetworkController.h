/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface YTNetworkController : NSObject {

	BOOL _registered;
	BOOL _isCellular;
	BOOL _isReachable;
	NSTimer* _notificationTimer;
	int _networkType;

}
+(id)sharedNetworkController;
-(void)start;
-(void)_reachabilityChanged:(id)arg1 ;
-(int)networkType;
-(void)_checkForNetworkWithDataStatus:(id)arg1 ;
-(BOOL)serviceIsReachable;
-(void)recheckNetwork;
-(BOOL)allowsHighQuality3GPlayback;
-(void)_carrierBundleChangeNotification:(id)arg1 ;
@end

