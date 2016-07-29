/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BLTPBShouldSuppressLightsAndSirensNowResponse : PBCodable <NSCopying> {

	BOOL _shouldSuppress;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) BOOL hasShouldSuppress; 
@property (assign,nonatomic) BOOL shouldSuppress;                 //@synthesize shouldSuppress=_shouldSuppress - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setShouldSuppress:(BOOL)arg1 ;
-(void)setHasShouldSuppress:(BOOL)arg1 ;
-(BOOL)hasShouldSuppress;
-(BOOL)shouldSuppress;
-(BOOL)readFrom:(id)arg1 ;
@end

