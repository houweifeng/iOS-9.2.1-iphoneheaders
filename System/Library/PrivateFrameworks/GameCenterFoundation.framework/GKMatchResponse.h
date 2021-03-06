/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSArray, NSData, NSDictionary, GKMatchRequestInternal, GKDispatchGroup;

@interface GKMatchResponse : GKInternalRepresentation {

	int _sequence;
	NSString* _rid;
	NSArray* _matches;
	NSData* _sessionToken;
	NSArray* _relayPushes;
	NSData* _cdxTicket;
	long long _state;
	NSDictionary* _serverRequest;
	GKMatchRequestInternal* _matchRequest;
	GKDispatchGroup* _matchingGroup;

}

@property (retain) NSString * rid;                                     //@synthesize rid=_rid - In the implementation block
@property (retain) NSArray * matches;                                  //@synthesize matches=_matches - In the implementation block
@property (retain) NSData * sessionToken;                              //@synthesize sessionToken=_sessionToken - In the implementation block
@property (retain) NSArray * relayPushes;                              //@synthesize relayPushes=_relayPushes - In the implementation block
@property (retain) NSData * cdxTicket;                                 //@synthesize cdxTicket=_cdxTicket - In the implementation block
@property (assign) GKDispatchGroup * matchingGroup;                    //@synthesize matchingGroup=_matchingGroup - In the implementation block
@property (retain) GKMatchRequestInternal * matchRequest;              //@synthesize matchRequest=_matchRequest - In the implementation block
@property (retain) NSDictionary * serverRequest;                       //@synthesize serverRequest=_serverRequest - In the implementation block
@property (readonly) int sequence;                                     //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) long long state;                          //@synthesize state=_state - In the implementation block
+(id)secureCodedPropertyKeys;
-(int)sequence;
-(NSData *)sessionToken;
-(void)setSessionToken:(NSData *)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)transitionToState:(long long)arg1 ;
-(NSArray *)matches;
-(NSData *)cdxTicket;
-(NSArray *)relayPushes;
-(void)setRid:(NSString *)arg1 ;
-(void)setMatches:(NSArray *)arg1 ;
-(int)_incrementSequence;
-(NSString *)rid;
-(void)setRelayPushes:(NSArray *)arg1 ;
-(void)setCdxTicket:(NSData *)arg1 ;
-(NSDictionary *)serverRequest;
-(void)setServerRequest:(NSDictionary *)arg1 ;
-(GKMatchRequestInternal *)matchRequest;
-(void)setMatchRequest:(GKMatchRequestInternal *)arg1 ;
-(GKDispatchGroup *)matchingGroup;
-(void)setMatchingGroup:(GKDispatchGroup *)arg1 ;
@end

