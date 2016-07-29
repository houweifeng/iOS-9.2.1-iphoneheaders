/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, SAUTSContent, NSString, NSArray;

@interface SAUTSViewingContext : SADomainObject

@property (assign,nonatomic) BOOL commercialPlaying; 
@property (nonatomic,copy) NSNumber * durationInMilliseconds; 
@property (nonatomic,retain) SAUTSContent * nowPlaying; 
@property (nonatomic,copy) NSString * nowPlayingAppId; 
@property (assign,nonatomic) BOOL paused; 
@property (nonatomic,copy) NSNumber * playbackPositionInMilliseconds; 
@property (nonatomic,copy) NSArray * viewingHistory; 
+(id)viewingContext;
+(id)viewingContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(id)groupIdentifier;
-(BOOL)commercialPlaying;
-(void)setCommercialPlaying:(BOOL)arg1 ;
-(void)setDurationInMilliseconds:(NSNumber *)arg1 ;
-(SAUTSContent *)nowPlaying;
-(void)setNowPlaying:(SAUTSContent *)arg1 ;
-(NSString *)nowPlayingAppId;
-(void)setNowPlayingAppId:(NSString *)arg1 ;
-(NSNumber *)playbackPositionInMilliseconds;
-(void)setPlaybackPositionInMilliseconds:(NSNumber *)arg1 ;
-(NSArray *)viewingHistory;
-(void)setViewingHistory:(NSArray *)arg1 ;
-(NSNumber *)durationInMilliseconds;
-(id)encodedClassName;
@end

