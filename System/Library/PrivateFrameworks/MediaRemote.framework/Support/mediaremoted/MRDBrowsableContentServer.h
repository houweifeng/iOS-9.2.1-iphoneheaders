/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDXPCMessageHandling.h>

@class NSMutableArray, MRDBrowsableContentAPICoordinator, NSString;

@interface MRDBrowsableContentServer : NSObject <MRDXPCMessageHandling> {

	NSMutableArray* _queuedInitiatePlaybackMessages;
	NSMutableArray* _queuedRelayableMessages;
	MRDBrowsableContentAPICoordinator* _apiCoordinator;

}

@property (nonatomic,readonly) MRDBrowsableContentAPICoordinator * apiCoordinator;              //@synthesize apiCoordinator=_apiCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRequestPlaybackInitializationMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRequestPlaybackQueueInitializationMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_relayMessage:(id)arg1 toClientWithBundleIDAndReply:(id)arg2 ;
-(void)_sendInitiatePlaybackMessage:(id)arg1 ;
-(void)_handleSupportedAPIsDidChangeForClient:(id)arg1 ;
-(BOOL)_messageRequiresMediaServerBlessing:(id)arg1 ;
-(BOOL)_messageCanLaunchApp:(id)arg1 ;
-(BOOL)_takeProcessAssertionForClient:(id)arg1 ;
-(void)_scheduleEndProcessAssertionForClient:(id)arg1 ;
-(MRDBrowsableContentAPICoordinator *)apiCoordinator;
-(void)dealloc;
-(id)init;
@end

