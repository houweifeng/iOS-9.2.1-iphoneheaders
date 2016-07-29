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

@class GEOStructuredAddress, NSMutableArray, GEOLatLng, NSString;

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying> {

	unsigned long long _muid;
	int _addressGeocodeAccuracyHint;
	GEOStructuredAddress* _addressHint;
	NSMutableArray* _formattedAddressLineHints;
	GEOLatLng* _locationHint;
	NSString* _placeNameHint;
	int _placeTypeHint;
	int _resultProviderId;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                                    //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                                 //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint;                                //@synthesize locationHint=_locationHint - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint;                      //@synthesize addressHint=_addressHint - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint;                                //@synthesize placeNameHint=_placeNameHint - In the implementation block
@property (nonatomic,retain) NSMutableArray * formattedAddressLineHints;              //@synthesize formattedAddressLineHints=_formattedAddressLineHints - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceTypeHint; 
@property (assign,nonatomic) int placeTypeHint;                                       //@synthesize placeTypeHint=_placeTypeHint - In the implementation block
@property (assign,nonatomic) BOOL hasAddressGeocodeAccuracyHint; 
@property (assign,nonatomic) int addressGeocodeAccuracyHint;                          //@synthesize addressGeocodeAccuracyHint=_addressGeocodeAccuracyHint - In the implementation block
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 ;
-(id)initWithMuid:(unsigned long long)arg1 locationHint:(SCD_Struct_GE16)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 ;
-(BOOL)_hasRequiredFields;
-(BOOL)_routeHypothesisPlaceRefinementParametersIsEqual:(id)arg1 ;
-(unsigned long long)_routeHypothesisPlaceRefinementParametersHash;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(unsigned long long)muid;
-(BOOL)hasMuid;
-(void)setResultProviderId:(int)arg1 ;
-(int)resultProviderId;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(BOOL)hasAddressHint;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(BOOL)hasPlaceTypeHint;
-(unsigned long long)formattedAddressLineHintsCount;
-(id)formattedAddressLineHintAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAddressGeocodeAccuracyHint;
-(NSMutableArray *)formattedAddressLineHints;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(void)setHasPlaceTypeHint:(BOOL)arg1 ;
-(NSString *)placeNameHint;
-(GEOStructuredAddress *)addressHint;
-(void)setAddressGeocodeAccuracyHint:(int)arg1 ;
-(void)setPlaceTypeHint:(int)arg1 ;
-(void)setHasAddressGeocodeAccuracyHint:(BOOL)arg1 ;
-(void)clearFormattedAddressLineHints;
-(BOOL)hasPlaceNameHint;
-(int)addressGeocodeAccuracyHint;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(BOOL)hasLocationHint;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(int)placeTypeHint;
-(GEOLatLng *)locationHint;
-(BOOL)readFrom:(id)arg1 ;
@end

