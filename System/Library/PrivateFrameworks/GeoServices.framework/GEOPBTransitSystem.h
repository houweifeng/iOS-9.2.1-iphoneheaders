/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPBTransitArtwork, NSString, GEOStyleAttributes;

@interface GEOPBTransitSystem : PBCodable <GEOTransitNamedItem, NSCopying> {

	unsigned long long _muid;
	GEOPBTransitArtwork* _artwork;
	unsigned _brandIndex;
	NSString* _nameDisplayString;
	GEOStyleAttributes* _styleAttributes;
	unsigned _systemIndex;
	NSString* _website;
	SCD_Struct_GE49 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasSystemIndex; 
@property (assign,nonatomic) unsigned systemIndex;                              //@synthesize systemIndex=_systemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                           //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasWebsite; 
@property (nonatomic,retain) NSString * website;                                //@synthesize website=_website - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasBrandIndex; 
@property (assign,nonatomic) unsigned brandIndex;                               //@synthesize brandIndex=_brandIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork;                     //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;                      //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
-(id)bestName;
-(id)geoTransitSystem;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(unsigned long long)muid;
-(BOOL)hasMuid;
-(BOOL)hasStyleAttributes;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasNameDisplayString;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(unsigned)systemIndex;
-(BOOL)hasSystemIndex;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(void)setHasSystemIndex:(BOOL)arg1 ;
-(void)setSystemIndex:(unsigned)arg1 ;
-(BOOL)hasArtwork;
-(NSString *)nameDisplayString;
-(GEOPBTransitArtwork *)artwork;
-(void)setBrandIndex:(unsigned)arg1 ;
-(unsigned)brandIndex;
-(void)setHasBrandIndex:(BOOL)arg1 ;
-(BOOL)hasBrandIndex;
-(NSString *)website;
-(void)setWebsite:(NSString *)arg1 ;
-(BOOL)hasWebsite;
-(BOOL)readFrom:(id)arg1 ;
@end

