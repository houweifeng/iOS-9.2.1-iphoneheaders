/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FLFollowUpController;

@interface CDPDFollowUpController : NSObject {

	NSString* _networkObserverToken;
	FLFollowUpController* _followUpController;

}
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)postFollowUpItemForOfflineLocalSecretChange;
-(void)deleteFollowUpItemForOfflineLocalSecretChange;
-(void)_networkReachabilityDidChangeWithIsReachable:(BOOL)arg1 ;
-(void)_postOfflineLocalSecretChangeNotification;
-(void)_postFollowUpItemForOfflineLocalSecretChangeWithNotification:(BOOL)arg1 ;
-(id)_offlineSecretChangeFollowUpAction;
@end

