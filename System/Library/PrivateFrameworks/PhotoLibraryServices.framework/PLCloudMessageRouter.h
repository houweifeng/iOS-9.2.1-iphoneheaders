/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PLCloudMessageRouter : NSObject {

	NSMutableDictionary* _subscriptions;

}
-(void)dealloc;
-(id)init;
-(void)publishMessage:(id)arg1 fromAgent:(id)arg2 ;
-(void)subscribeAgent:(id)arg1 toMessageType:(Class)arg2 withSelector:(SEL)arg3 ;
@end

