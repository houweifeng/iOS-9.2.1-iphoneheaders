/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VCSessionMessaging : NSObject {

	NSMutableDictionary* topics;
	unsigned p2pID;

}
-(void)dealloc;
-(id)newPackedMessageFromDictionary:(id)arg1 ;
-(void)sendMessage:(id)arg1 withTopic:(id)arg2 ;
-(void)stopMessaging;
-(id)initWithP2PID:(unsigned)arg1 remoteVersion:(id)arg2 ;
-(void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(BOOL)arg3 receiveHandler:(/*^block*/id)arg4 ;
-(id)newDictionaryFromUnpackedMessage:(id)arg1 ;
@end

