/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPBTransitIncident : PBCodable <NSCopying> {

	unsigned long long _incidentMuid;
	NSMutableArray* _affectedEntitys;
	unsigned _creationDatetime;
	unsigned _endDatetime;
	int _iconEnum;
	NSString* _longDescriptionString;
	NSString* _messageForAllBlocking;
	NSString* _messageForIncidentType;
	NSString* _messageString;
	NSString* _shortDescriptionString;
	unsigned _startDatetime;
	NSString* _titleString;
	unsigned _updatedDatetime;
	BOOL _blocking;
	SCD_Struct_GE63 _has;

}

@property (assign,nonatomic) BOOL hasIncidentMuid; 
@property (assign,nonatomic) unsigned long long incidentMuid;                //@synthesize incidentMuid=_incidentMuid - In the implementation block
@property (assign,nonatomic) BOOL hasIconEnum; 
@property (assign,nonatomic) int iconEnum;                                   //@synthesize iconEnum=_iconEnum - In the implementation block
@property (assign,nonatomic) BOOL hasStartDatetime; 
@property (assign,nonatomic) unsigned startDatetime;                         //@synthesize startDatetime=_startDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasEndDatetime; 
@property (assign,nonatomic) unsigned endDatetime;                           //@synthesize endDatetime=_endDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDatetime; 
@property (assign,nonatomic) unsigned creationDatetime;                      //@synthesize creationDatetime=_creationDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedDatetime; 
@property (assign,nonatomic) unsigned updatedDatetime;                       //@synthesize updatedDatetime=_updatedDatetime - In the implementation block
@property (nonatomic,retain) NSMutableArray * affectedEntitys;               //@synthesize affectedEntitys=_affectedEntitys - In the implementation block
@property (assign,nonatomic) BOOL hasBlocking; 
@property (assign,nonatomic) BOOL blocking;                                  //@synthesize blocking=_blocking - In the implementation block
@property (nonatomic,readonly) BOOL hasLongDescriptionString; 
@property (nonatomic,retain) NSString * longDescriptionString;               //@synthesize longDescriptionString=_longDescriptionString - In the implementation block
@property (nonatomic,readonly) BOOL hasShortDescriptionString; 
@property (nonatomic,retain) NSString * shortDescriptionString;              //@synthesize shortDescriptionString=_shortDescriptionString - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleString; 
@property (nonatomic,retain) NSString * titleString;                         //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageString; 
@property (nonatomic,retain) NSString * messageString;                       //@synthesize messageString=_messageString - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageForAllBlocking; 
@property (nonatomic,retain) NSString * messageForAllBlocking;               //@synthesize messageForAllBlocking=_messageForAllBlocking - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageForIncidentType; 
@property (nonatomic,retain) NSString * messageForIncidentType;              //@synthesize messageForIncidentType=_messageForIncidentType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)iconEnum;
-(BOOL)hasLongDescriptionString;
-(unsigned long long)incidentMuid;
-(void)setCreationDatetime:(unsigned)arg1 ;
-(NSString *)messageString;
-(BOOL)hasCreationDatetime;
-(BOOL)hasTitleString;
-(void)setIconEnum:(int)arg1 ;
-(void)setHasCreationDatetime:(BOOL)arg1 ;
-(BOOL)hasShortDescriptionString;
-(NSString *)titleString;
-(NSString *)messageForIncidentType;
-(void)setTitleString:(NSString *)arg1 ;
-(id)affectedEntityAtIndex:(unsigned long long)arg1 ;
-(void)setUpdatedDatetime:(unsigned)arg1 ;
-(void)setHasIconEnum:(BOOL)arg1 ;
-(BOOL)hasMessageString;
-(unsigned)endDatetime;
-(unsigned long long)affectedEntitysCount;
-(void)setAffectedEntitys:(NSMutableArray *)arg1 ;
-(NSString *)messageForAllBlocking;
-(BOOL)hasUpdatedDatetime;
-(BOOL)hasIconEnum;
-(unsigned)startDatetime;
-(BOOL)hasMessageForAllBlocking;
-(void)setHasUpdatedDatetime:(BOOL)arg1 ;
-(void)setStartDatetime:(unsigned)arg1 ;
-(void)setHasStartDatetime:(BOOL)arg1 ;
-(void)setLongDescriptionString:(NSString *)arg1 ;
-(void)setIncidentMuid:(unsigned long long)arg1 ;
-(NSMutableArray *)affectedEntitys;
-(void)clearAffectedEntitys;
-(BOOL)hasMessageForIncidentType;
-(unsigned)creationDatetime;
-(void)addAffectedEntity:(id)arg1 ;
-(void)setMessageForIncidentType:(NSString *)arg1 ;
-(void)setHasIncidentMuid:(BOOL)arg1 ;
-(unsigned)updatedDatetime;
-(BOOL)hasStartDatetime;
-(void)setBlocking:(BOOL)arg1 ;
-(void)setEndDatetime:(unsigned)arg1 ;
-(NSString *)longDescriptionString;
-(void)setHasEndDatetime:(BOOL)arg1 ;
-(void)setShortDescriptionString:(NSString *)arg1 ;
-(BOOL)hasIncidentMuid;
-(void)setMessageString:(NSString *)arg1 ;
-(NSString *)shortDescriptionString;
-(BOOL)hasBlocking;
-(void)setMessageForAllBlocking:(NSString *)arg1 ;
-(BOOL)blocking;
-(void)setHasBlocking:(BOOL)arg1 ;
-(BOOL)hasEndDatetime;
-(BOOL)readFrom:(id)arg1 ;
@end

