/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BLTPBDateComponents;

@interface BLTPBBehaviorOverrideEffectiveInterval : PBCodable <NSCopying> {

	NSString* _calendarIdentifier;
	BLTPBDateComponents* _endComponents;
	int _repeatInterval;
	BLTPBDateComponents* _startComponents;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasStartComponents; 
@property (nonatomic,retain) BLTPBDateComponents * startComponents;              //@synthesize startComponents=_startComponents - In the implementation block
@property (nonatomic,readonly) BOOL hasEndComponents; 
@property (nonatomic,retain) BLTPBDateComponents * endComponents;                //@synthesize endComponents=_endComponents - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendarIdentifier; 
@property (nonatomic,retain) NSString * calendarIdentifier;                      //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatInterval; 
@property (assign,nonatomic) int repeatInterval;                                 //@synthesize repeatInterval=_repeatInterval - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setRepeatInterval:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)calendarIdentifier;
-(int)repeatInterval;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BLTPBDateComponents *)startComponents;
-(BLTPBDateComponents *)endComponents;
-(void)setStartComponents:(BLTPBDateComponents *)arg1 ;
-(void)setEndComponents:(BLTPBDateComponents *)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(BOOL)hasStartComponents;
-(BOOL)hasEndComponents;
-(BOOL)hasCalendarIdentifier;
-(void)setHasRepeatInterval:(BOOL)arg1 ;
-(BOOL)hasRepeatInterval;
-(BOOL)readFrom:(id)arg1 ;
@end

