/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBWorkspaceServer.h>

@interface FBUIApplicationWorkspaceServer : FBWorkspaceServer
-(void)sendLaunchEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendExitEventWithCompletion:(/*^block*/id)arg1 ;
-(void)sendProcessAssertionExpirationImminent;
-(BOOL)_queue_handleMessage:(id)arg1 withType:(long long)arg2 ;
@end

