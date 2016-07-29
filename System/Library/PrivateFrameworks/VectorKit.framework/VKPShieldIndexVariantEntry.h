/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VKPShieldIndexVariantEntry : PBCodable <NSCopying> {

	NSMutableArray* _entries;
	NSMutableArray* _textEntries;
	int _variantType;
	SCD_Struct_VK534 _has;

}

@property (assign,nonatomic) BOOL hasVariantType; 
@property (assign,nonatomic) int variantType;                           //@synthesize variantType=_variantType - In the implementation block
@property (nonatomic,retain) NSMutableArray * entries;                  //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) NSMutableArray * textEntries;              //@synthesize textEntries=_textEntries - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setVariantType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)variantType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)entries;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearEntries;
-(unsigned long long)entriesCount;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)textEntries;
-(void)setHasVariantType:(BOOL)arg1 ;
-(void)setTextEntries:(NSMutableArray *)arg1 ;
-(BOOL)hasVariantType;
-(id)textEntriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)textEntriesCount;
-(void)addTextEntries:(id)arg1 ;
-(void)clearTextEntries;
-(BOOL)readFrom:(id)arg1 ;
@end

