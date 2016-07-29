/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileGroup : PBCodable <NSCopying> {

	SCD_Struct_GE88* _hybridUnavailableRegions;
	unsigned long long _hybridUnavailableRegionsCount;
	unsigned long long _hybridUnavailableRegionsSpace;
	SCD_Struct_GE104* _regionalResourceIndexs;
	unsigned long long _regionalResourceIndexsCount;
	unsigned long long _regionalResourceIndexsSpace;
	SCD_Struct_GE52* _attributionIndexs;
	SCD_Struct_GE52* _fontIndexs;
	SCD_Struct_GE52* _iconIndexs;
	SCD_Struct_GE52* _styleSheetIndexs;
	SCD_Struct_GE52* _textureIndexs;
	SCD_Struct_GE52* _xmlIndexs;
	SCD_Struct_GE105* _tileSets;
	unsigned long long _tileSetsCount;
	unsigned long long _tileSetsSpace;
	unsigned _attributionBadgeIndex;
	unsigned _identifier;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) unsigned identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long tileSetsCount; 
@property (nonatomic,readonly) SCD_Struct_GE105* tileSets; 
@property (nonatomic,readonly) unsigned long long styleSheetIndexsCount; 
@property (nonatomic,readonly) unsigned* styleSheetIndexs; 
@property (nonatomic,readonly) unsigned long long textureIndexsCount; 
@property (nonatomic,readonly) unsigned* textureIndexs; 
@property (nonatomic,readonly) unsigned long long fontIndexsCount; 
@property (nonatomic,readonly) unsigned* fontIndexs; 
@property (nonatomic,readonly) unsigned long long iconIndexsCount; 
@property (nonatomic,readonly) unsigned* iconIndexs; 
@property (nonatomic,readonly) unsigned long long regionalResourceIndexsCount; 
@property (nonatomic,readonly) SCD_Struct_GE104* regionalResourceIndexs; 
@property (nonatomic,readonly) unsigned long long xmlIndexsCount; 
@property (nonatomic,readonly) unsigned* xmlIndexs; 
@property (assign,nonatomic) BOOL hasAttributionBadgeIndex; 
@property (assign,nonatomic) unsigned attributionBadgeIndex;                                  //@synthesize attributionBadgeIndex=_attributionBadgeIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long attributionIndexsCount; 
@property (nonatomic,readonly) unsigned* attributionIndexs; 
@property (nonatomic,readonly) unsigned long long hybridUnavailableRegionsCount; 
@property (nonatomic,readonly) SCD_Struct_GE88* hybridUnavailableRegions; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SCD_Struct_GE105*)tileSets;
-(void)clearTileSets;
-(SCD_Struct_GE105)tileSetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)tileSetsCount;
-(void)addTileSet:(SCD_Struct_GE105)arg1 ;
-(unsigned long long)styleSheetIndexsCount;
-(SCD_Struct_GE88*)hybridUnavailableRegions;
-(void)addAttributionIndex:(unsigned)arg1 ;
-(unsigned long long)fontIndexsCount;
-(void)setRegionalResourceIndexs:(SCD_Struct_GE104*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)fontIndexs;
-(unsigned)fontIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributionIndexsCount;
-(unsigned)attributionIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned*)xmlIndexs;
-(void)clearStyleSheetIndexs;
-(void)setFontIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addStyleSheetIndex:(unsigned)arg1 ;
-(void)addRegionalResourceIndex:(SCD_Struct_GE104)arg1 ;
-(void)clearFontIndexs;
-(unsigned*)iconIndexs;
-(void)addXmlIndex:(unsigned)arg1 ;
-(SCD_Struct_GE104)regionalResourceIndexAtIndex:(unsigned long long)arg1 ;
-(void)setXmlIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHybridUnavailableRegions:(SCD_Struct_GE88*)arg1 count:(unsigned long long)arg2 ;
-(void)setAttributionBadgeIndex:(unsigned)arg1 ;
-(void)addFontIndex:(unsigned)arg1 ;
-(void)clearXmlIndexs;
-(void)setIconIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addHybridUnavailableRegion:(SCD_Struct_GE88)arg1 ;
-(void)clearHybridUnavailableRegions;
-(unsigned long long)textureIndexsCount;
-(unsigned)iconIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned)textureIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)regionalResourceIndexsCount;
-(void)setHasAttributionBadgeIndex:(BOOL)arg1 ;
-(void)setStyleSheetIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)iconIndexsCount;
-(SCD_Struct_GE104*)regionalResourceIndexs;
-(unsigned long long)xmlIndexsCount;
-(unsigned)attributionBadgeIndex;
-(void)addTextureIndex:(unsigned)arg1 ;
-(void)clearRegionalResourceIndexs;
-(unsigned)xmlIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hybridUnavailableRegionsCount;
-(BOOL)hasAttributionBadgeIndex;
-(unsigned*)styleSheetIndexs;
-(unsigned*)attributionIndexs;
-(void)clearTextureIndexs;
-(unsigned*)textureIndexs;
-(SCD_Struct_GE88)hybridUnavailableRegionAtIndex:(unsigned long long)arg1 ;
-(void)clearAttributionIndexs;
-(void)clearIconIndexs;
-(void)setTileSets:(SCD_Struct_GE105*)arg1 count:(unsigned long long)arg2 ;
-(void)setAttributionIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addIconIndex:(unsigned)arg1 ;
-(void)setTextureIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)styleSheetIndexAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

