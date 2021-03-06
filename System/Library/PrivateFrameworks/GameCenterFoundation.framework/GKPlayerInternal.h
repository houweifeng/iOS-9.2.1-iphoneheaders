/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary, NSDate, GKGameInternal, NSArray, NSNumber;

@interface GKPlayerInternal : GKInternalRepresentation {

	NSString* _playerID;
	NSString* _alias;
	NSDictionary* _photos;
	unsigned short _numberOfFriends;
	unsigned short _numberOfGames;
	unsigned short _numberOfFriendsInCommon;
	unsigned short _numberOfGamesInCommon;
	unsigned _numberOfAchievements;
	unsigned _numberOfAchievementPoints;
	SCD_Union_GK8 _flags;

}

@property (nonatomic,retain) NSString * playerID;                                              //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * alias;                                                 //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) NSDictionary * photos;                                            //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) BOOL isFriend; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) BOOL isAnonymousPlayer; 
@property (nonatomic,readonly) BOOL isUnknownPlayer; 
@property (nonatomic,readonly) BOOL isAutomatchPlayer; 
@property (nonatomic,readonly) BOOL isLoaded; 
@property (nonatomic,readonly) BOOL isGuestPlayer; 
@property (assign,nonatomic) unsigned short numberOfFriendsInCommon;                           //@synthesize numberOfFriendsInCommon=_numberOfFriendsInCommon - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGamesInCommon;                             //@synthesize numberOfGamesInCommon=_numberOfGamesInCommon - In the implementation block
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) NSString * compositeName; 
@property (nonatomic,retain) NSString * status; 
@property (nonatomic,retain) NSDate * lastPlayedDate; 
@property (nonatomic,retain) GKGameInternal * lastPlayedGame; 
@property (nonatomic,retain) NSString * guestIdentifier; 
@property (assign,nonatomic) unsigned short numberOfFriends;                                   //@synthesize numberOfFriends=_numberOfFriends - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGames;                                     //@synthesize numberOfGames=_numberOfGames - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievements;                                    //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievementPoints;                               //@synthesize numberOfAchievementPoints=_numberOfAchievementPoints - In the implementation block
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSArray * emailAddresses; 
@property (nonatomic,retain) NSArray * friends; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic) BOOL purpleBuddyAccount; 
@property (assign,getter=isUnderage,nonatomic) BOOL underage; 
@property (assign,getter=isFindable,nonatomic) BOOL findable; 
@property (assign,getter=isPhotoPending,nonatomic) BOOL photoPending; 
@property (assign,nonatomic) unsigned short numberOfRequests; 
@property (assign,nonatomic) unsigned short numberOfTurns; 
@property (assign,nonatomic) unsigned short numberOfChallenges; 
@property (nonatomic,retain) NSString * facebookUserID; 
@property (nonatomic,retain) NSNumber * iCloudUserID; 
@property (assign,nonatomic) unsigned flags; 
+(id)secureCodedPropertyKeys;
+(id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3 ;
+(id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2 ;
+(Class)classForFamiliarity:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isLoaded;
-(id)cacheKey;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setPhotos:(NSDictionary *)arg1 ;
-(NSDictionary *)photos;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)alias;
-(void)setFriends:(NSArray *)arg1 ;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(NSArray *)friends;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)serverRepresentation;
-(unsigned)numberOfAchievements;
-(id)minimalInternal;
-(unsigned short)numberOfFriends;
-(void)setNumberOfFriends:(unsigned short)arg1 ;
-(unsigned short)numberOfFriendsInCommon;
-(unsigned short)numberOfGames;
-(unsigned short)numberOfGamesInCommon;
-(unsigned)numberOfAchievementPoints;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfChallenges;
-(unsigned short)numberOfTurns;
-(int)defaultFamiliarity;
-(BOOL)isUnknownPlayer;
-(BOOL)isAnonymousPlayer;
-(BOOL)isGuestPlayer;
-(void)setNumberOfAchievements:(unsigned)arg1 ;
-(void)setCompositeName:(NSString *)arg1 ;
-(void)setLastPlayedGame:(GKGameInternal *)arg1 ;
-(NSString *)facebookUserID;
-(void)setFacebookUserID:(NSString *)arg1 ;
-(NSNumber *)iCloudUserID;
-(void)setICloudUserID:(NSNumber *)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(BOOL)isFindable;
-(void)setFindable:(BOOL)arg1 ;
-(BOOL)isPhotoPending;
-(void)setPhotoPending:(BOOL)arg1 ;
-(BOOL)allowNearbyMultiplayer;
-(void)setAllowNearbyMultiplayer:(BOOL)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(NSString *)guestIdentifier;
-(void)setNumberOfFriendsInCommon:(unsigned short)arg1 ;
-(void)setNumberOfGames:(unsigned short)arg1 ;
-(void)setNumberOfGamesInCommon:(unsigned short)arg1 ;
-(void)setNumberOfAchievementPoints:(unsigned)arg1 ;
-(NSString *)compositeName;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)playerID;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(BOOL)isFriend;
-(BOOL)isLocalPlayer;
-(BOOL)isPurpleBuddyAccount;
-(BOOL)isAutomatchPlayer;
-(BOOL)isUnderage;
-(id)conciseDescription;
-(void)setPlayerID:(NSString *)arg1 ;
-(GKGameInternal *)lastPlayedGame;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
@end

