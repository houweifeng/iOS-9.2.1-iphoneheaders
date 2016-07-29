/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ondemandd/ODRDeveloperToolsProtocol.h>

@class NSString;

@interface ODRDeveloperToolsClient : NSObject <ODRDeveloperToolsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getSimulatedBandwidthWithReply:(/*^block*/id)arg1 ;
-(void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)tagStatusForBundle:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)purgeAllTagsInBundleWithID:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)purgeTagWithName:(id)arg1 inBundleWithID:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)registerManifest:(id)arg1 forBundleID:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(id)interface;
-(id)initWithConnection:(id)arg1 ;
@end
