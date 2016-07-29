/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSPlaybackCommandMessage : PBCodable <NSCopying> {

	int _playbackCommand;
	int _sessionIdentifier;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) BOOL hasPlaybackCommand; 
@property (assign,nonatomic) int playbackCommand;                    //@synthesize playbackCommand=_playbackCommand - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)playbackCommand;
-(void)setPlaybackCommand:(int)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasPlaybackCommand:(BOOL)arg1 ;
-(BOOL)hasPlaybackCommand;
@end

