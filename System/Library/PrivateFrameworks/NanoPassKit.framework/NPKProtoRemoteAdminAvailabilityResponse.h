/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoRemoteAdminAvailabilityResponse : PBCodable <NSCopying> {

	BOOL _isAvailable;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasIsAvailable; 
@property (assign,nonatomic) BOOL isAvailable;                 //@synthesize isAvailable=_isAvailable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIsAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(void)setHasIsAvailable:(BOOL)arg1 ;
-(BOOL)hasIsAvailable;
-(BOOL)readFrom:(id)arg1 ;
@end

