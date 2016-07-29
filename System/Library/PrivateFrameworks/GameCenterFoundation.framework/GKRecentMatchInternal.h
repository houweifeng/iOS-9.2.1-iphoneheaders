/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, GKGameRecordInternal, NSDate;

@interface GKRecentMatchInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	GKGameRecordInternal* _game;
	NSDate* _date;

}

@property (nonatomic,retain) GKPlayerInternal * player;                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGameRecordInternal * game;              //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)player;
-(void)setGame:(GKGameRecordInternal *)arg1 ;
-(GKGameRecordInternal *)game;
@end

