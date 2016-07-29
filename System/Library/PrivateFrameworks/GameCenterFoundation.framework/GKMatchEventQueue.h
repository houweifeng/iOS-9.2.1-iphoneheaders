/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKPlayer, NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject {

	GKPlayer* _player;
	GKPlayer* _hostPlayer;
	NSMutableArray* _events;
	NSMutableDictionary* _connectionInfo;
	long long _playerState;
	long long _deferedPlayerState;
	unsigned _sequenceNumber;
	BOOL _counted;
	BOOL _okToSend;
	BOOL _relayInitiated;
	BOOL _hasInitRelayInfo;
	BOOL _hasUpdateRelayInfo;

}

@property (nonatomic,retain) NSMutableArray * events;                           //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                 //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKPlayer * hostPlayer;                             //@synthesize hostPlayer=_hostPlayer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (assign,nonatomic) long long playerState;                             //@synthesize playerState=_playerState - In the implementation block
@property (assign,nonatomic) long long deferedPlayerState;                      //@synthesize deferedPlayerState=_deferedPlayerState - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                           //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL counted;                                      //@synthesize counted=_counted - In the implementation block
@property (assign,nonatomic) BOOL okToSend;                                     //@synthesize okToSend=_okToSend - In the implementation block
@property (assign,nonatomic) BOOL relayInitiated;                               //@synthesize relayInitiated=_relayInitiated - In the implementation block
@property (assign,nonatomic) BOOL hasInitRelayInfo;                             //@synthesize hasInitRelayInfo=_hasInitRelayInfo - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateRelayInfo;                           //@synthesize hasUpdateRelayInfo=_hasUpdateRelayInfo - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setConnectionInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)connectionInfo;
-(void)setPlayerState:(long long)arg1 ;
-(long long)playerState;
-(NSMutableArray *)events;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(GKPlayer *)hostPlayer;
-(void)setHostPlayer:(GKPlayer *)arg1 ;
-(BOOL)counted;
-(void)setCounted:(BOOL)arg1 ;
-(long long)deferedPlayerState;
-(void)setDeferedPlayerState:(long long)arg1 ;
-(BOOL)okToSend;
-(void)setOkToSend:(BOOL)arg1 ;
-(BOOL)relayInitiated;
-(void)setRelayInitiated:(BOOL)arg1 ;
-(BOOL)hasInitRelayInfo;
-(void)setHasInitRelayInfo:(BOOL)arg1 ;
-(BOOL)hasUpdateRelayInfo;
-(void)setHasUpdateRelayInfo:(BOOL)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
@end

