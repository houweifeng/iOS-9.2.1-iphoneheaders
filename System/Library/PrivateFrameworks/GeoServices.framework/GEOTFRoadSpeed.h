/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface GEOTFRoadSpeed : PBCodable <NSCopying> {

	long long _geoid;
	int _color;
	unsigned _decayTimeWindowInMinutes;
	float _endOffset;
	NSMutableArray* _predictedSpeeds;
	unsigned _speedKph;
	float _startOffset;
	NSData* _zilch;
	BOOL _hidden;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) long long geoid;                                //@synthesize geoid=_geoid - In the implementation block
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) float startOffset;                              //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) float endOffset;                                //@synthesize endOffset=_endOffset - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden;                                    //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,retain) NSMutableArray * predictedSpeeds;               //@synthesize predictedSpeeds=_predictedSpeeds - In the implementation block
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color;                                      //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedKph; 
@property (assign,nonatomic) unsigned speedKph;                              //@synthesize speedKph=_speedKph - In the implementation block
@property (nonatomic,readonly) BOOL hasZilch; 
@property (nonatomic,retain) NSData * zilch;                                 //@synthesize zilch=_zilch - In the implementation block
@property (assign,nonatomic) BOOL hasDecayTimeWindowInMinutes; 
@property (assign,nonatomic) unsigned decayTimeWindowInMinutes;              //@synthesize decayTimeWindowInMinutes=_decayTimeWindowInMinutes - In the implementation block
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)endOffset;
-(float)startOffset;
-(int)color;
-(void)setColor:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStartOffset:(float)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasEndOffset;
-(unsigned long long)predictedSpeedsCount;
-(BOOL)hasColor;
-(id)predictedSpeedAtIndex:(unsigned long long)arg1 ;
-(NSData *)zilch;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(unsigned)speedKph;
-(void)setSpeedKph:(unsigned)arg1 ;
-(void)addPredictedSpeed:(id)arg1 ;
-(void)setGeoid:(long long)arg1 ;
-(void)setHasColor:(BOOL)arg1 ;
-(void)setPredictedSpeeds:(NSMutableArray *)arg1 ;
-(unsigned)decayTimeWindowInMinutes;
-(NSMutableArray *)predictedSpeeds;
-(void)setDecayTimeWindowInMinutes:(unsigned)arg1 ;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasZilch;
-(void)clearPredictedSpeeds;
-(BOOL)hasSpeedKph;
-(long long)geoid;
-(BOOL)hasHidden;
-(void)setEndOffset:(float)arg1 ;
-(void)setHasHidden:(BOOL)arg1 ;
-(void)setHasSpeedKph:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(BOOL)hasDecayTimeWindowInMinutes;
-(void)setZilch:(NSData *)arg1 ;
-(void)setHasDecayTimeWindowInMinutes:(BOOL)arg1 ;
-(BOOL)hidden;
-(BOOL)readFrom:(id)arg1 ;
@end

