/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/SFServiceViewControllerProtocol.h>

@protocol SFServiceViewControllerProtocol, _SFQueueingBrowserServiceViewControllerProxyDelegate;
@class NSMutableArray, NSString;

@interface _SFQueueingBrowserServiceViewControllerProxy : NSProxy <SFServiceViewControllerProtocol> {

	NSMutableArray* _queuedInvocations;
	id<SFServiceViewControllerProtocol> _target;
	id<_SFQueueingBrowserServiceViewControllerProxyDelegate> _delegate;

}

@property (nonatomic,retain) id<SFServiceViewControllerProtocol> target;                                            //@synthesize target=_target - In the implementation block
@property (assign,nonatomic,__weak) id<_SFQueueingBrowserServiceViewControllerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<_SFQueueingBrowserServiceViewControllerProxyDelegate>)arg1 ;
-(id)init;
-(id<_SFQueueingBrowserServiceViewControllerProxyDelegate>)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setTarget:(id<SFServiceViewControllerProtocol>)arg1 ;
-(id<SFServiceViewControllerProtocol>)target;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

