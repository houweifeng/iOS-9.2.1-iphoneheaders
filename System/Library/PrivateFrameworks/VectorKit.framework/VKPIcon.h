/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VKPIcon : PBCodable <NSCopying> {

	unsigned long long _matchingStyleAttributeLongValue;
	unsigned _anchorPointX;
	unsigned _anchorPointY;
	unsigned _atlasIndex;
	unsigned _iconRectHeight;
	unsigned _iconRectWidth;
	unsigned _iconRectX;
	unsigned _iconRectY;
	unsigned _matchingStyleAttributeKey;
	int _matchingStyleAttributeValue;
	NSString* _name;
	unsigned _quadIndex;
	int _size;
	SCD_Struct_VK366 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned atlasIndex;                                             //@synthesize atlasIndex=_atlasIndex - In the implementation block
@property (assign,nonatomic) unsigned quadIndex;                                              //@synthesize quadIndex=_quadIndex - In the implementation block
@property (assign,nonatomic) BOOL hasAnchorPointX; 
@property (assign,nonatomic) unsigned anchorPointX;                                           //@synthesize anchorPointX=_anchorPointX - In the implementation block
@property (assign,nonatomic) BOOL hasAnchorPointY; 
@property (assign,nonatomic) unsigned anchorPointY;                                           //@synthesize anchorPointY=_anchorPointY - In the implementation block
@property (assign,nonatomic) BOOL hasIconRectX; 
@property (assign,nonatomic) unsigned iconRectX;                                              //@synthesize iconRectX=_iconRectX - In the implementation block
@property (assign,nonatomic) BOOL hasIconRectY; 
@property (assign,nonatomic) unsigned iconRectY;                                              //@synthesize iconRectY=_iconRectY - In the implementation block
@property (assign,nonatomic) BOOL hasIconRectWidth; 
@property (assign,nonatomic) unsigned iconRectWidth;                                          //@synthesize iconRectWidth=_iconRectWidth - In the implementation block
@property (assign,nonatomic) BOOL hasIconRectHeight; 
@property (assign,nonatomic) unsigned iconRectHeight;                                         //@synthesize iconRectHeight=_iconRectHeight - In the implementation block
@property (assign,nonatomic) BOOL hasMatchingStyleAttributeKey; 
@property (assign,nonatomic) unsigned matchingStyleAttributeKey;                              //@synthesize matchingStyleAttributeKey=_matchingStyleAttributeKey - In the implementation block
@property (assign,nonatomic) BOOL hasMatchingStyleAttributeValue; 
@property (assign,nonatomic) int matchingStyleAttributeValue;                                 //@synthesize matchingStyleAttributeValue=_matchingStyleAttributeValue - In the implementation block
@property (assign,nonatomic) BOOL hasMatchingStyleAttributeLongValue; 
@property (assign,nonatomic) unsigned long long matchingStyleAttributeLongValue;              //@synthesize matchingStyleAttributeLongValue=_matchingStyleAttributeLongValue - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) int size;                                                        //@synthesize size=_size - In the implementation block
-(int)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setHasSize:(BOOL)arg1 ;
-(unsigned)atlasIndex;
-(unsigned)quadIndex;
-(unsigned long long)matchingStyleAttributeLongValue;
-(unsigned)matchingStyleAttributeKey;
-(int)matchingStyleAttributeValue;
-(BOOL)hasMatchingStyleAttributeValue;
-(BOOL)hasMatchingStyleAttributeKey;
-(unsigned)anchorPointY;
-(void)setAnchorPointX:(unsigned)arg1 ;
-(void)setIconRectWidth:(unsigned)arg1 ;
-(void)setHasAnchorPointY:(BOOL)arg1 ;
-(void)setMatchingStyleAttributeKey:(unsigned)arg1 ;
-(unsigned)iconRectX;
-(BOOL)hasAnchorPointY;
-(BOOL)hasIconRectY;
-(BOOL)hasIconRectHeight;
-(void)setHasMatchingStyleAttributeValue:(BOOL)arg1 ;
-(void)setHasIconRectHeight:(BOOL)arg1 ;
-(unsigned)iconRectY;
-(BOOL)hasMatchingStyleAttributeLongValue;
-(unsigned)iconRectWidth;
-(void)setIconRectHeight:(unsigned)arg1 ;
-(void)setMatchingStyleAttributeValue:(int)arg1 ;
-(void)setAtlasIndex:(unsigned)arg1 ;
-(void)setAnchorPointY:(unsigned)arg1 ;
-(void)setHasIconRectY:(BOOL)arg1 ;
-(void)setHasMatchingStyleAttributeLongValue:(BOOL)arg1 ;
-(BOOL)hasAnchorPointX;
-(BOOL)hasIconRectWidth;
-(void)setIconRectY:(unsigned)arg1 ;
-(unsigned)iconRectHeight;
-(void)setHasMatchingStyleAttributeKey:(BOOL)arg1 ;
-(BOOL)hasIconRectX;
-(void)setMatchingStyleAttributeLongValue:(unsigned long long)arg1 ;
-(void)setQuadIndex:(unsigned)arg1 ;
-(void)setHasAnchorPointX:(BOOL)arg1 ;
-(void)setHasIconRectWidth:(BOOL)arg1 ;
-(void)setHasIconRectX:(BOOL)arg1 ;
-(unsigned)anchorPointX;
-(void)setIconRectX:(unsigned)arg1 ;
-(BOOL)hasSize;
-(BOOL)readFrom:(id)arg1 ;
@end

