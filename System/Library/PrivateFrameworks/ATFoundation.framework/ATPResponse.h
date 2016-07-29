/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATPError;

@interface ATPResponse : PBCodable <NSCopying> {

	ATPError* _error;

}

@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) ATPError * error;              //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasError;
-(ATPError *)error;
-(void)setError:(ATPError *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

