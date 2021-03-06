/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <MapsDataClassMigrator/SearchResultRepr.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MKLocatableObject.h>
#import <libobjc.A.dylib/MKAnnotation.h>
#import <MapsDataClassMigrator/MapsSynced.h>

@class NSString, NSData, AddressBookAddress, UIImage, GEOComposedWaypoint, MSPBookmarkStorage, MSPPinStorage, GEORPPlaceInfo, MKMapItem;

@interface SearchResult : SearchResultRepr <NSCopying, MKLocatableObject, MKAnnotation, MapsSynced> {

	NSString* _singleLineAddress;
	NSString* _singleLineAddressWithHomeCountry;
	BOOL _hasMergedFormattedAddress;
	NSString* _formattedAddress;
	NSString* _formattedAddressMultiline;
	SCD_Struct_Se2 _coordinate;
	BOOL _originatedFromHistory;
	BOOL _originatedFromTrace;
	BOOL _originatedFromBookmarks;
	AddressBookAddress* _address;
	int _appearance;
	unsigned long long _businessID;
	UIImage* _parkingImage;
	GEOComposedWaypoint* _composedWaypoint;
	MSPBookmarkStorage* _bookmarkStorage;
	MSPPinStorage* _pinStorage;
	GEORPPlaceInfo* _placeInfo;
	MKMapItem* _mapItem;

}

@property (nonatomic,readonly) MSPBookmarkStorage * bookmarkStorage; 
@property (assign,nonatomic) SCD_Struct_Se2 coordinate;                                  //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,getter=isReverseGeocoded,nonatomic) BOOL reverseGeocoded; 
@property (nonatomic,readonly) BOOL needsReverseGeocodeCheck; 
@property (assign,nonatomic) BOOL originatedFromHistory;                                 //@synthesize originatedFromHistory=_originatedFromHistory - In the implementation block
@property (assign,nonatomic) BOOL originatedFromTrace;                                   //@synthesize originatedFromTrace=_originatedFromTrace - In the implementation block
@property (nonatomic,readonly) BOOL isDynamicCurrentLocation; 
@property (assign,nonatomic) int appearance;                                             //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) unsigned long long businessID; 
@property (nonatomic,readonly) int localSearchProviderID; 
@property (nonatomic,readonly) NSString * infoCardTitle; 
@property (nonatomic,readonly) NSString * locationTitle; 
@property (nonatomic,readonly) NSString * rawLocationTitle; 
@property (nonatomic,readonly) NSString * disambiguationTitle; 
@property (nonatomic,readonly) NSString * tweetableTitle; 
@property (nonatomic,readonly) NSString * defaultName; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * locality; 
@property (nonatomic,retain) GEOComposedWaypoint * composedWaypoint;                     //@synthesize composedWaypoint=_composedWaypoint - In the implementation block
@property (nonatomic,readonly) MSPPinStorage * pinStorage;                               //@synthesize pinStorage=_pinStorage - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                        //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) GEORPPlaceInfo * placeInfo;                                 //@synthesize placeInfo=_placeInfo - In the implementation block
@property (nonatomic,retain) NSString * bookmarkTitle; 
@property (nonatomic,retain) AddressBookAddress * address; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
+(id)currentLocationSearchResult;
+(id)customSearchResultWithCoordinate:(SCD_Struct_Se2)arg1 ;
+(id)keyPathsForValuesAffectingLocationTitle;
+(id)keyPathsForValuesAffectingSingleLineAddress;
+(id)keyPathsForValuesAffectingSingleLineAddressWithHomeCountry;
+(id)keyPathsForValuesAffectingName;
+(id)keyPathsForValuesAffectingTitle;
+(id)keyPathsForValuesAffectingSubtitle;
-(MSPBookmarkStorage *)bookmarkStorage;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(id)initWithDroppedPin:(id)arg1 ;
-(void)setThoroughfare:(id)arg1 ;
-(id)unknownContact;
-(id)initWithFavoritePlace:(id)arg1 ;
-(BOOL)hasOriginatedFromBookmarks;
-(BOOL)_hasStructuredAddress;
-(id)initWithComposedWaypoint:(id)arg1 ;
-(BOOL)isEqualToSearchResult:(id)arg1 ;
-(NSString *)infoCardTitle;
-(void)markAsOriginatingFromBookmarks;
-(id)initWithSearchResult:(id)arg1 ;
-(void)updateWithGEOMapItem:(id)arg1 ;
-(void)clearAddressCache;
-(id)initWithMapItem:(id)arg1 syncIdentifier:(id)arg2 ;
-(NSString *)defaultName;
-(BOOL)isDynamicCurrentLocation;
-(id)mapsURLfromMapView:(id)arg1 ;
-(void)becomeDefaultTypeIfCustomType;
-(BOOL)isInMapRegion:(id)arg1 ;
-(NSString *)rawLocationTitle;
-(BOOL)isInMapRect:(SCD_Struct_Se3)arg1 ;
-(id)_locationTitleNeedsRaw:(BOOL)arg1 ;
-(BOOL)originatedFromHistory;
-(BOOL)_isEqualToSearchResult:(id)arg1 loose:(BOOL)arg2 ;
-(void)_syncGEOPlaceWithCoordinate;
-(MSPPinStorage *)pinStorage;
-(BOOL)updateFromSyncData:(id)arg1 ;
-(BOOL)originatedFromTrace;
-(void)clearLocationInformation;
-(id)coordinateString;
-(NSString *)locationTitle;
-(BOOL)isAddressBookResult;
-(void)setOriginalType:(unsigned)arg1 ;
-(void)setOriginatedFromTrace:(BOOL)arg1 ;
-(void)setOriginatedFromHistory:(BOOL)arg1 ;
-(id)initWithSearchResult:(id)arg1 address:(id)arg2 ;
-(GEOComposedWaypoint *)composedWaypoint;
-(void)setCoordinate:(SCD_Struct_Se2)arg1 preserveLocationInfo:(BOOL)arg2 ;
-(void)_updateTypeAndOriginalTypeIfNeeded;
-(BOOL)updateFromBookmarkRepresentation:(id)arg1 ;
-(id)singleLineAddressWithHomeCountry;
-(id)initWithComposedWaypoint:(id)arg1 preserveLocationInfo:(BOOL)arg2 ;
-(BOOL)isEqualToSearchResult:(id)arg1 forPurpose:(long long)arg2 ;
-(void)setReverseGeocoded:(BOOL)arg1 ;
-(BOOL)isReverseGeocoded;
-(void)setBookmarkTitle:(NSString *)arg1 ;
-(id)copyForBookmarksWithType:(unsigned)arg1 name:(id)arg2 zoomLevel:(unsigned)arg3 ;
-(void)setAddressFromSearchResult:(id)arg1 ;
-(BOOL)isLocationEqual:(id)arg1 withinDistance:(double)arg2 ;
-(id)bookmarkRepresentation;
-(id)copyWithType:(unsigned)arg1 ;
-(id)initWithGEOPlace:(id)arg1 ;
-(id)initWithBookmarkRepresentation:(id)arg1 ;
-(BOOL)needsReverseGeocodeCheck;
-(BOOL)_hasUID;
-(NSString *)bookmarkTitle;
-(void)setComposedWaypoint:(GEOComposedWaypoint *)arg1 ;
-(NSString *)disambiguationTitle;
-(id)initWithSearchResultStrippingName:(id)arg1 address:(id)arg2 ;
-(id)initWithGEOMapItem:(id)arg1 ;
-(id)copyWithCoordinate:(SCD_Struct_Se2)arg1 ;
-(NSString *)tweetableTitle;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)name;
-(void)setType:(unsigned)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)_commonInit;
-(id)initWithType:(unsigned)arg1 ;
-(int)appearance;
-(NSString *)subtitle;
-(void)writeTo:(id)arg1 ;
-(void)setAddress:(AddressBookAddress *)arg1 ;
-(id)mapsURL;
-(int)localSearchProviderID;
-(NSString *)countryCode;
-(id)addressDictionary;
-(NSString *)locality;
-(GEORPPlaceInfo *)placeInfo;
-(void)setPlaceInfo:(GEORPPlaceInfo *)arg1 ;
-(unsigned long long)businessID;
-(id)initWithMapItem:(id)arg1 ;
-(id)_formattedAddressMultiline;
-(id)_formattedAddress;
-(id)singleLineAddress;
-(void)setAppearance:(int)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setCoordinate:(SCD_Struct_Se2)arg1 ;
-(SCD_Struct_Se2)coordinate;
-(AddressBookAddress *)address;
-(NSData *)syncData;
-(BOOL)readFrom:(id)arg1 ;
@end

