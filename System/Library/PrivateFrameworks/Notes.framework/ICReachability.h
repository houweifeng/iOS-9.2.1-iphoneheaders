/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@interface ICReachability : NSObject {

	BOOL _alwaysReturnLocalWiFiStatus;
	SCNetworkReachabilityRef _reachabilityRef;

}
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)sharedReachabilityForInternetConnection;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(BOOL)connectionRequired;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(long long)currentReachabilityStatus;
-(BOOL)startNotifier;
-(void)stopNotifier;
@end

