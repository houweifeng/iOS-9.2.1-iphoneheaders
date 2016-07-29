/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GEOCountryConfigurationServerProxy.h>

@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate;
@class NSObject, NSString;

@interface _GEOCountryConfigurationRemoteProxy : NSObject <_GEOCountryConfigurationServerProxy> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
	int _countryCodeChangedToken;
	int _providersChangedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_GEOCountryConfigurationServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_GEOCountryConfigurationServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_GEOCountryConfigurationServerProxyDelegate>)delegate;
-(void)updateCountryCode:(/*^block*/id)arg1 ;
@end

