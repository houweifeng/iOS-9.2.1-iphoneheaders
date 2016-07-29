/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal {

	GKScoreInternal* _score;
	GKLeaderboardInternal* _leaderboard;

}

@property (nonatomic,copy) GKScoreInternal * score;                            //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) GKLeaderboardInternal * leaderboard;              //@synthesize leaderboard=_leaderboard - In the implementation block
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(unsigned long long)type;
-(void)setScore:(GKScoreInternal *)arg1 ;
-(id)titleText;
-(GKScoreInternal *)score;
-(GKLeaderboardInternal *)leaderboard;
-(void)setLeaderboard:(GKLeaderboardInternal *)arg1 ;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
@end

