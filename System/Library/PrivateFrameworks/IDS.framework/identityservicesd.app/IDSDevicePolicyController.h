/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSMutableDictionary, NSObject;

@interface IDSDevicePolicyController : NSObject {

	NSMutableDictionary* _devices;
	NSObject*<OS_dispatch_semaphore> _lock;

}
+(id)sharedInstance;
-(void)startFairplayAuthenticationForDeviceWithBTUUID:(id)arg1 ;
-(void)endFairplayAuthenticationForDeviceWithBTUUID:(id)arg1 ;
-(BOOL)shouldBlackOutDeviceWithBTUUID:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

