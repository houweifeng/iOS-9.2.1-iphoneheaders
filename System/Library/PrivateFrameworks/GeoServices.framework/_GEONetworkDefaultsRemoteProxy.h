/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxy.h>

@protocol _GEONetworkDefaultsServerProxyDelegate;
@class NSLock, NSMutableArray, NSString;

@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy> {

	id<_GEONetworkDefaultsServerProxyDelegate> _delegate;
	NSLock* _lock;
	NSMutableArray* _updateCompletionHandlers;
	int _configChangedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_GEONetworkDefaultsServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_GEONetworkDefaultsServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_GEONetworkDefaultsServerProxyDelegate>)delegate;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
@end

