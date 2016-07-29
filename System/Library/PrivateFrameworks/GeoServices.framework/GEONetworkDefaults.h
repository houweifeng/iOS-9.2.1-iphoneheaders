/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxyDelegate.h>

@protocol _GEONetworkDefaultsServerProxy;
@class NSMutableArray, NSDictionary, NSLock, NSString;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate> {

	id<_GEONetworkDefaultsServerProxy> _serverProxy;
	NSMutableArray* _completionHandlers;
	NSDictionary* _networkDefaults;
	NSLock* _networkDefaultsLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(id)sharedNetworkDefaults;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)allKeys;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2 ;
-(BOOL)_needsUpdate;
@end

