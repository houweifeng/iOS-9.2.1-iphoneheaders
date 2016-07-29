/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BLTLightsAndSirensReplyInfo : NSObject {

	BOOL _replySent;
	BOOL _didLogAggd;
	/*^block*/id _reply;
	unsigned long long _didPlayLightsAndSirens;
	NSDate* _expiration;
	NSDate* _bulletinPublicationDate;

}

@property (nonatomic,readonly) BOOL replySent;                                       //@synthesize replySent=_replySent - In the implementation block
@property (nonatomic,copy) id reply;                                                 //@synthesize reply=_reply - In the implementation block
@property (assign,nonatomic) unsigned long long didPlayLightsAndSirens;              //@synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens - In the implementation block
@property (nonatomic,retain) NSDate * expiration;                                    //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,retain) NSDate * bulletinPublicationDate;                       //@synthesize bulletinPublicationDate=_bulletinPublicationDate - In the implementation block
@property (assign,nonatomic) BOOL didLogAggd;                                        //@synthesize didLogAggd=_didLogAggd - In the implementation block
-(id)init;
-(BOOL)hasExpired;
-(void)setReply:(id)arg1 ;
-(id)reply;
-(unsigned long long)didPlayLightsAndSirens;
-(BOOL)sendReply;
-(BOOL)replySent;
-(void)setDidPlayLightsAndSirens:(unsigned long long)arg1 ;
-(NSDate *)bulletinPublicationDate;
-(void)setBulletinPublicationDate:(NSDate *)arg1 ;
-(BOOL)didLogAggd;
-(void)setDidLogAggd:(BOOL)arg1 ;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSDate *)expiration;
@end

