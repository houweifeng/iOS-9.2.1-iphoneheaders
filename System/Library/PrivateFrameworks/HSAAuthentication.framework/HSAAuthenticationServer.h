/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HSAAuthentication.framework/HSAAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface HSAAuthenticationServer : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSMutableArray* _clients;
	BOOL _hasRegistered;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_cleanup;
-(void)_cleanupClient:(id)arg1 ;
-(void)_configureWithClient:(id)arg1 ;
-(void)parseIncomingMessageFromNumber:(id)arg1 forService:(id)arg2 messageBody:(id)arg3 ;
-(void)_clientConnected;
@end

