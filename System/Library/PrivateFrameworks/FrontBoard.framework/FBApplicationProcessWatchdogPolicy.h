/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBProcessWatchdogProviding.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSString;

@interface FBApplicationProcessWatchdogPolicy : NSObject <FBProcessWatchdogProviding> {

	double _deviceLaunchScale;
	double _deviceResumeScale;
	double _additionalFirstPartyScale;
	BOOL _enableThirdPartyPre9;
	int _daNotificationToken;
	NSDictionary* _watchdogPolicyExceptions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPolicy;
+(double)_scaleForGestaltKey:(CFStringRef)arg1 ;
+(double)_defaultLaunchScale;
+(double)_defaultResumeScale;
+(double)_defaultFirstPartyAdditionalScale;
-(void)dealloc;
-(id)init;
-(void)_queue_reloadDefaultSettings;
-(double)_queue_watchdogScalingFactorForAppInfo:(id)arg1 isResume:(BOOL)arg2 ;
-(double)watchdogIntervalForProcess:(id)arg1 eventContext:(SCD_Struct_FB8)arg2 ;
@end

