/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PLCloudTrigger : NSObject {

	NSObject*<OS_dispatch_queue> _triggerQueue;
	NSMutableDictionary* _subscriptions;

}
-(void)dealloc;
-(id)init;
-(void)activate;
-(void)triggerWithContextObject:(id)arg1 ;
-(void)subscribeWithInstance:(id)arg1 selector:(SEL)arg2 ;
-(void)unsubscribeWithInstance:(id)arg1 ;
@end

