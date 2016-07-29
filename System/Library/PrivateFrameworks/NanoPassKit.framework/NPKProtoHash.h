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

@class NSData;

@interface NPKProtoHash : PBCodable <NSCopying> {

	NSData* _hashData;

}

@property (nonatomic,readonly) BOOL hasHashData; 
@property (nonatomic,retain) NSData * hashData;               //@synthesize hashData=_hashData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHashData:(NSData *)arg1 ;
-(BOOL)hasHashData;
-(NSData *)hashData;
-(BOOL)readFrom:(id)arg1 ;
@end

