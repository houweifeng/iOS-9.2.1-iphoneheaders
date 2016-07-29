/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface SLOpenGraphNode : NSObject {

	BOOL _likedByMe;
	unsigned long long _numberOfLikes;
	unsigned long long _numberOfFriendLikes;
	int _fetchState;
	NSURL* _URL;
	NSArray* _likedByFriends;

}

@property (readonly) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (readonly) BOOL likedByMe; 
@property (readonly) unsigned long long globalLikeCount; 
@property (readonly) unsigned long long friendLikeCount; 
@property (readonly) NSArray * likedByFriends;                        //@synthesize likedByFriends=_likedByFriends - In the implementation block
@property (assign,nonatomic) int fetchState;                          //@synthesize fetchState=_fetchState - In the implementation block
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(id)cache;
-(void)_startUpdateIfNeeded;
-(BOOL)likedByMe;
-(void)likeWithCompletion:(/*^block*/id)arg1 ;
-(void)unlikeWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)likedByFriends;
-(int)fetchState;
-(void)setFetchState:(int)arg1 ;
-(unsigned long long)friendLikeCount;
-(unsigned long long)globalLikeCount;
@end

