/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKScore, GKLeaderboard;

@interface GKScoreChallenge : GKChallenge {

	GKScore* _score;

}

@property (nonatomic,retain) GKScore * score;                            //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) GKLeaderboard * leaderboard; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(id)alertGoalText;
-(id)iconSource;
-(id)smallIconURLString;
-(id)iconURLString;
-(id)listTitleText;
-(id)listGoalText;
-(id)composeGoalText;
-(id)detailGoalText;
-(void)dealloc;
-(id)description;
-(void)setScore:(GKScore *)arg1 ;
-(id)titleText;
-(GKScore *)score;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(id)arg1 ;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2 ;
@end

