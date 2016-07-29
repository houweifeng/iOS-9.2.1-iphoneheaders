/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/XPCClient.h>

@class NSMutableSet, NSSet;

@interface DownloadHandlerClient : XPCClient {

	NSMutableSet* _disavowedSessionProperties;
	NSSet* _downloadPhasesToIgnore;
	long long _handlerIdentifier;
	BOOL _sessionsNeedPowerAssertion;
	BOOL _sessionsShouldBlockOtherDownloads;

}

@property (assign) long long handlerIdentifier; 
@property (readonly) NSSet * disavowedSessionProperties; 
@property (copy) NSSet * downloadPhasesToIgnore; 
@property (assign) BOOL sessionsNeedPowerAssertion; 
@property (assign) BOOL sessionsShouldBlockOtherDownloads; 
-(id)initWithInputConnection:(id)arg1 ;
-(void)addDisavowedSessionProperties:(id)arg1 ;
-(NSSet *)disavowedSessionProperties;
-(id)resetDisavowedSessionProperties;
-(void)setHandlerIdentifier:(long long)arg1 ;
-(NSSet *)downloadPhasesToIgnore;
-(BOOL)sessionsNeedPowerAssertion;
-(BOOL)sessionsShouldBlockOtherDownloads;
-(void)dealloc;
-(id)description;
-(void)setDownloadPhasesToIgnore:(NSSet *)arg1 ;
-(void)setSessionsNeedPowerAssertion:(BOOL)arg1 ;
-(void)setSessionsShouldBlockOtherDownloads:(BOOL)arg1 ;
-(long long)handlerIdentifier;
@end

