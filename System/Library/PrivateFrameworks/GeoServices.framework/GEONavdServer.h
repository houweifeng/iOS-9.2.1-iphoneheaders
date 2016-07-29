/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, GEONavigationServer, NSString;

@interface GEONavdServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _pushNavigationStateListener;
	NSXPCListener* _getNavigationStateListener;
	NSXPCListener* _monitorDestinationListener;
	GEONavigationServer* _navigationServer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

