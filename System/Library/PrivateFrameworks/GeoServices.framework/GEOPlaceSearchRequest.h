/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, GEOAddress, GEOBusinessOptions, GEOClientCapabilities, NSString, GEOLatLng, NSMutableArray, GEOIndexQueryNode, GEOLocation, GEOMapRegion, GEOSuggestionsOptions, NSData;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying> {

	SCD_Struct_GE4 _sessionGUID;
	SCD_Struct_GE1* _additionalPlaceTypes;
	SCD_Struct_GE80* _businessIDs;
	SCD_Struct_GE1* _optionalSuppressionReasons;
	SCD_Struct_GE81 _searchContextSubstring;
	SCD_Struct_GE81* _searchSubstrings;
	unsigned long long _searchSubstringsCount;
	unsigned long long _searchSubstringsSpace;
	long long _geoId;
	unsigned long long _intersectingGeoId;
	double _timeSinceMapEnteredForeground;
	double _timeSinceMapViewportChanged;
	double _timestamp;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOAddress* _address;
	GEOBusinessOptions* _businessOptions;
	int _businessSortOrder;
	GEOClientCapabilities* _clientCapabilities;
	NSString* _deviceCountryCode;
	GEOLatLng* _deviceLocation;
	NSString* _deviceTimeZone;
	NSMutableArray* _filterByBusinessCategorys;
	GEOIndexQueryNode* _indexFilter;
	NSString* _inputLanguage;
	int _knownAccuracy;
	GEOLatLng* _knownLocation;
	NSMutableArray* _limitToCountryCodeIso2s;
	int _localSearchProviderID;
	GEOLocation* _location;
	int _mapMode;
	GEOMapRegion* _mapRegion;
	int _maxBusinessReviews;
	int _maxResults;
	NSString* _phoneticLocaleIdentifier;
	int _placeTypeLimit;
	GEOAddress* _preserveFields;
	NSString* _search;
	NSString* _searchContext;
	GEOLatLng* _searchLocation;
	int _searchSource;
	int _sequenceNumber;
	NSMutableArray* _serviceTags;
	GEOSuggestionsOptions* _suggestionsOptions;
	NSString* _suggestionsPrefix;
	int _transportTypeForTravelTimes;
	NSData* _zilchPoints;
	BOOL _excludeAddressInResults;
	BOOL _includeBusinessCategories;
	BOOL _includeBusinessRating;
	BOOL _includeEntryPoints;
	BOOL _includeFeatureSets;
	BOOL _includeGeoId;
	BOOL _includeMatchedToken;
	BOOL _includeNameForForwardGeocodingResults;
	BOOL _includePhonetics;
	BOOL _includeQuads;
	BOOL _includeRevgeoRequestTemplate;
	BOOL _includeRoadAccessPoints;
	BOOL _includeSpokenNames;
	BOOL _includeStatusCodeInfo;
	BOOL _includeSuggestionsOnly;
	BOOL _includeTravelDistance;
	BOOL _includeTravelTime;
	BOOL _includeUnmatchedStrings;
	BOOL _isCanonicalLocationSearch;
	BOOL _isFromAPI;
	BOOL _isPopularNearbyRequest;
	BOOL _isStrictGeocoding;
	BOOL _isStrictMapRegion;
	BOOL _structuredSearch;
	BOOL _suppressResultsRequiringAttribution;
	SCD_Struct_GE82 _has;

}

@property (nonatomic,readonly) unsigned long long businessIDsCount; 
@property (nonatomic,readonly) unsigned long long* businessIDs; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOAddress * address;                                                //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                                              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasSearch; 
@property (nonatomic,retain) NSString * search;                                                   //@synthesize search=_search - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                            //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (assign,nonatomic) BOOL hasIncludePhonetics; 
@property (assign,nonatomic) BOOL includePhonetics;                                               //@synthesize includePhonetics=_includePhonetics - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults;                                                      //@synthesize maxResults=_maxResults - In the implementation block
@property (assign,nonatomic) BOOL hasSessionGUID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionGUID;                                          //@synthesize sessionGUID=_sessionGUID - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessSortOrder; 
@property (assign,nonatomic) int businessSortOrder;                                               //@synthesize businessSortOrder=_businessSortOrder - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeBusinessRating; 
@property (assign,nonatomic) BOOL includeBusinessRating;                                          //@synthesize includeBusinessRating=_includeBusinessRating - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeBusinessCategories; 
@property (assign,nonatomic) BOOL includeBusinessCategories;                                      //@synthesize includeBusinessCategories=_includeBusinessCategories - In the implementation block
@property (assign,nonatomic) BOOL hasMaxBusinessReviews; 
@property (assign,nonatomic) int maxBusinessReviews;                                              //@synthesize maxBusinessReviews=_maxBusinessReviews - In the implementation block
@property (nonatomic,retain) NSMutableArray * filterByBusinessCategorys;                          //@synthesize filterByBusinessCategorys=_filterByBusinessCategorys - In the implementation block
@property (assign,nonatomic) BOOL hasIsStrictMapRegion; 
@property (assign,nonatomic) BOOL isStrictMapRegion;                                              //@synthesize isStrictMapRegion=_isStrictMapRegion - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                                //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeEntryPoints; 
@property (assign,nonatomic) BOOL includeEntryPoints;                                             //@synthesize includeEntryPoints=_includeEntryPoints - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessOptions; 
@property (nonatomic,retain) GEOBusinessOptions * businessOptions;                                //@synthesize businessOptions=_businessOptions - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                                           //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSuggestionsOnly; 
@property (assign,nonatomic) BOOL includeSuggestionsOnly;                                         //@synthesize includeSuggestionsOnly=_includeSuggestionsOnly - In the implementation block
@property (assign,nonatomic) BOOL hasStructuredSearch; 
@property (assign,nonatomic) BOOL structuredSearch;                                               //@synthesize structuredSearch=_structuredSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionsPrefix; 
@property (nonatomic,retain) NSString * suggestionsPrefix;                                        //@synthesize suggestionsPrefix=_suggestionsPrefix - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                                        //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLocation; 
@property (nonatomic,retain) GEOLatLng * deviceLocation;                                          //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage;                                            //@synthesize inputLanguage=_inputLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier;                                 //@synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                                                  //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasSuppressResultsRequiringAttribution; 
@property (assign,nonatomic) BOOL suppressResultsRequiringAttribution;                            //@synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI;                                                      //@synthesize isFromAPI=_isFromAPI - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) double timeSinceMapEnteredForeground;                                //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) double timeSinceMapViewportChanged;                                  //@synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSpokenNames; 
@property (assign,nonatomic) BOOL includeSpokenNames;                                             //@synthesize includeSpokenNames=_includeSpokenNames - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceTimeZone; 
@property (nonatomic,retain) NSString * deviceTimeZone;                                           //@synthesize deviceTimeZone=_deviceTimeZone - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                          //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeTravelTime; 
@property (assign,nonatomic) BOOL includeTravelTime;                                              //@synthesize includeTravelTime=_includeTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasTransportTypeForTravelTimes; 
@property (assign,nonatomic) int transportTypeForTravelTimes;                                     //@synthesize transportTypeForTravelTimes=_transportTypeForTravelTimes - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionsOptions; 
@property (nonatomic,retain) GEOSuggestionsOptions * suggestionsOptions;                          //@synthesize suggestionsOptions=_suggestionsOptions - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceTypeLimit; 
@property (assign,nonatomic) int placeTypeLimit;                                                  //@synthesize placeTypeLimit=_placeTypeLimit - In the implementation block
@property (assign,nonatomic) BOOL hasIsStrictGeocoding; 
@property (assign,nonatomic) BOOL isStrictGeocoding;                                              //@synthesize isStrictGeocoding=_isStrictGeocoding - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeTravelDistance; 
@property (assign,nonatomic) BOOL includeTravelDistance;                                          //@synthesize includeTravelDistance=_includeTravelDistance - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeRoadAccessPoints; 
@property (assign,nonatomic) BOOL includeRoadAccessPoints;                                        //@synthesize includeRoadAccessPoints=_includeRoadAccessPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * limitToCountryCodeIso2s;                            //@synthesize limitToCountryCodeIso2s=_limitToCountryCodeIso2s - In the implementation block
@property (assign,nonatomic) BOOL hasIsCanonicalLocationSearch; 
@property (assign,nonatomic) BOOL isCanonicalLocationSearch;                                      //@synthesize isCanonicalLocationSearch=_isCanonicalLocationSearch - In the implementation block
@property (assign,nonatomic) BOOL hasGeoId; 
@property (assign,nonatomic) long long geoId;                                                     //@synthesize geoId=_geoId - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeQuads; 
@property (assign,nonatomic) BOOL includeQuads;                                                   //@synthesize includeQuads=_includeQuads - In the implementation block
@property (assign,nonatomic) BOOL hasExcludeAddressInResults; 
@property (assign,nonatomic) BOOL excludeAddressInResults;                                        //@synthesize excludeAddressInResults=_excludeAddressInResults - In the implementation block
@property (nonatomic,readonly) unsigned long long searchSubstringsCount; 
@property (nonatomic,readonly) SCD_Struct_GE81* searchSubstrings; 
@property (assign,nonatomic) BOOL hasIncludeGeoId; 
@property (assign,nonatomic) BOOL includeGeoId;                                                   //@synthesize includeGeoId=_includeGeoId - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchContext; 
@property (nonatomic,retain) NSString * searchContext;                                            //@synthesize searchContext=_searchContext - In the implementation block
@property (assign,nonatomic) BOOL hasSearchContextSubstring; 
@property (assign,nonatomic) SCD_Struct_GE81 searchContextSubstring;                              //@synthesize searchContextSubstring=_searchContextSubstring - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeStatusCodeInfo; 
@property (assign,nonatomic) BOOL includeStatusCodeInfo;                                          //@synthesize includeStatusCodeInfo=_includeStatusCodeInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasPreserveFields; 
@property (nonatomic,retain) GEOAddress * preserveFields;                                         //@synthesize preserveFields=_preserveFields - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeUnmatchedStrings; 
@property (assign,nonatomic) BOOL includeUnmatchedStrings;                                        //@synthesize includeUnmatchedStrings=_includeUnmatchedStrings - In the implementation block
@property (nonatomic,readonly) BOOL hasIndexFilter; 
@property (nonatomic,retain) GEOIndexQueryNode * indexFilter;                                     //@synthesize indexFilter=_indexFilter - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeFeatureSets; 
@property (assign,nonatomic) BOOL includeFeatureSets;                                             //@synthesize includeFeatureSets=_includeFeatureSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
@property (assign,nonatomic) BOOL hasIntersectingGeoId; 
@property (assign,nonatomic) unsigned long long intersectingGeoId;                                //@synthesize intersectingGeoId=_intersectingGeoId - In the implementation block
@property (nonatomic,readonly) BOOL hasKnownLocation; 
@property (nonatomic,retain) GEOLatLng * knownLocation;                                           //@synthesize knownLocation=_knownLocation - In the implementation block
@property (assign,nonatomic) BOOL hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy;                                                   //@synthesize knownAccuracy=_knownAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeRevgeoRequestTemplate; 
@property (assign,nonatomic) BOOL includeRevgeoRequestTemplate;                                   //@synthesize includeRevgeoRequestTemplate=_includeRevgeoRequestTemplate - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeMatchedToken; 
@property (assign,nonatomic) BOOL includeMatchedToken;                                            //@synthesize includeMatchedToken=_includeMatchedToken - In the implementation block
@property (assign,nonatomic) BOOL hasSearchSource; 
@property (assign,nonatomic) int searchSource;                                                    //@synthesize searchSource=_searchSource - In the implementation block
@property (nonatomic,readonly) unsigned long long optionalSuppressionReasonsCount; 
@property (nonatomic,readonly) int* optionalSuppressionReasons; 
@property (nonatomic,readonly) BOOL hasSearchLocation; 
@property (nonatomic,retain) GEOLatLng * searchLocation;                                          //@synthesize searchLocation=_searchLocation - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeNameForForwardGeocodingResults; 
@property (assign,nonatomic) BOOL includeNameForForwardGeocodingResults;                          //@synthesize includeNameForForwardGeocodingResults=_includeNameForForwardGeocodingResults - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (assign,nonatomic) BOOL hasMapMode; 
@property (assign,nonatomic) int mapMode;                                                         //@synthesize mapMode=_mapMode - In the implementation block
@property (assign,nonatomic) BOOL hasIsPopularNearbyRequest; 
@property (assign,nonatomic) BOOL isPopularNearbyRequest;                                         //@synthesize isPopularNearbyRequest=_isPopularNearbyRequest - In the implementation block
-(id)initWithTraits:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZilchPoints;
-(void)setZilchPoints:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(int)knownAccuracy;
-(BOOL)hasKnownAccuracy;
-(void)setHasKnownAccuracy:(BOOL)arg1 ;
-(void)setKnownAccuracy:(int)arg1 ;
-(BOOL)hasLocation;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasAddress;
-(void)setAddress:(GEOAddress *)arg1 ;
-(int)maxResults;
-(BOOL)hasMaxResults;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(void)setMaxResults:(int)arg1 ;
-(void)setSearchLocation:(GEOLatLng *)arg1 ;
-(BOOL)hasSearchLocation;
-(GEOLatLng *)searchLocation;
-(BOOL)isFromAPI;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(BOOL)hasSequenceNumber;
-(BOOL)hasClientCapabilities;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAdditionalEnabledMarkets;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(int)sequenceNumber;
-(void)setSequenceNumber:(int)arg1 ;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(BOOL)hasIsFromAPI;
-(void)clearServiceTags;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(int)localSearchProviderID;
-(long long)geoId;
-(BOOL)hasPhoneticLocaleIdentifier;
-(NSString *)phoneticLocaleIdentifier;
-(BOOL)hasLocalSearchProviderID;
-(void)setGeoId:(long long)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasGeoId;
-(void)setHasGeoId:(BOOL)arg1 ;
-(BOOL)suppressResultsRequiringAttribution;
-(BOOL)hasSuppressResultsRequiringAttribution;
-(void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(void)setSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(void)setHasSearchContextSubstring:(BOOL)arg1 ;
-(BOOL)includeGeoId;
-(BOOL)includeSuggestionsOnly;
-(void)setIsCanonicalLocationSearch:(BOOL)arg1 ;
-(BOOL)hasIncludeBusinessCategories;
-(id)filterByBusinessCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setStructuredSearch:(BOOL)arg1 ;
-(BOOL)hasIncludeSuggestionsOnly;
-(void)addOptionalSuppressionReason:(int)arg1 ;
-(NSString *)searchContext;
-(BOOL)hasDeviceTimeZone;
-(BOOL)hasSearchContextSubstring;
-(BOOL)hasIncludeRevgeoRequestTemplate;
-(void)setHasIsCanonicalLocationSearch:(BOOL)arg1 ;
-(BOOL)includeQuads;
-(void)setHasIncludeRevgeoRequestTemplate:(BOOL)arg1 ;
-(void)setIncludeBusinessCategories:(BOOL)arg1 ;
-(void)setSearchContextSubstring:(SCD_Struct_GE81)arg1 ;
-(BOOL)structuredSearch;
-(void)clearAdditionalPlaceTypes;
-(unsigned long long)searchSubstringsCount;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)excludeAddressInResults;
-(void)setHasIncludeSuggestionsOnly:(BOOL)arg1 ;
-(void)setHasIncludeBusinessCategories:(BOOL)arg1 ;
-(NSString *)deviceCountryCode;
-(void)setDeviceTimeZone:(NSString *)arg1 ;
-(void)setIndexFilter:(GEOIndexQueryNode *)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(BOOL)hasIncludeGeoId;
-(void)setIncludeRevgeoRequestTemplate:(BOOL)arg1 ;
-(BOOL)hasIncludeBusinessRating;
-(BOOL)hasSuggestionsPrefix;
-(void)setHasIncludeRoadAccessPoints:(BOOL)arg1 ;
-(void)setIncludeRoadAccessPoints:(BOOL)arg1 ;
-(BOOL)includeStatusCodeInfo;
-(BOOL)hasStructuredSearch;
-(id)limitToCountryCodeIso2AtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMaxBusinessReviews;
-(NSString *)suggestionsPrefix;
-(BOOL)hasSearchContext;
-(void)setIncludeSpokenNames:(BOOL)arg1 ;
-(void)setMaxBusinessReviews:(int)arg1 ;
-(void)setDeviceLocation:(GEOLatLng *)arg1 ;
-(void)setHasStructuredSearch:(BOOL)arg1 ;
-(GEOLatLng *)deviceLocation;
-(void)setHasIncludeGeoId:(BOOL)arg1 ;
-(void)setIncludePhonetics:(BOOL)arg1 ;
-(SCD_Struct_GE81)searchContextSubstring;
-(void)setHasIncludeSpokenNames:(BOOL)arg1 ;
-(BOOL)hasIncludeRoadAccessPoints;
-(void)setFilterByBusinessCategorys:(NSMutableArray *)arg1 ;
-(void)setHasMaxBusinessReviews:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(BOOL)hasBusinessSortOrder;
-(void)addLimitToCountryCodeIso2:(id)arg1 ;
-(BOOL)includeUnmatchedStrings;
-(void)addFilterByBusinessCategory:(id)arg1 ;
-(void)setHasIncludeTravelDistance:(BOOL)arg1 ;
-(void)clearLimitToCountryCodeIso2s;
-(void)setIncludeTravelDistance:(BOOL)arg1 ;
-(BOOL)hasBusinessOptions;
-(NSString *)inputLanguage;
-(void)addBusinessID:(unsigned long long)arg1 ;
-(unsigned long long)businessIDsCount;
-(void)setIncludeBusinessRating:(BOOL)arg1 ;
-(void)setIncludeGeoId:(BOOL)arg1 ;
-(GEOIndexQueryNode *)indexFilter;
-(void)setTimeSinceMapViewportChanged:(double)arg1 ;
-(GEOAddress *)preserveFields;
-(BOOL)hasKnownLocation;
-(void)setHasBusinessSortOrder:(BOOL)arg1 ;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(void)setSearchSubstrings:(SCD_Struct_GE81*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasIncludeTravelDistance;
-(BOOL)hasSearch;
-(BOOL)hasIncludeEntryPoints;
-(void)setBusinessOptions:(GEOBusinessOptions *)arg1 ;
-(void)setKnownLocation:(GEOLatLng *)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(void)setHasIsStrictGeocoding:(BOOL)arg1 ;
-(void)setIncludeSuggestionsOnly:(BOOL)arg1 ;
-(BOOL)hasIntersectingGeoId;
-(NSString *)search;
-(void)setIsStrictGeocoding:(BOOL)arg1 ;
-(unsigned long long)intersectingGeoId;
-(void)clearFilterByBusinessCategorys;
-(void)setHasIntersectingGeoId:(BOOL)arg1 ;
-(void)setTimeSinceMapEnteredForeground:(double)arg1 ;
-(void)setSuggestionsOptions:(GEOSuggestionsOptions *)arg1 ;
-(BOOL)includeFeatureSets;
-(unsigned long long)additionalPlaceTypesCount;
-(void)setIntersectingGeoId:(unsigned long long)arg1 ;
-(double)timeSinceMapEnteredForeground;
-(unsigned long long)optionalSuppressionReasonsCount;
-(int*)additionalPlaceTypes;
-(void)setHasIncludeBusinessRating:(BOOL)arg1 ;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(BOOL)hasIsStrictGeocoding;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(void)setSuggestionsPrefix:(NSString *)arg1 ;
-(void)setSessionGUID:(SCD_Struct_GE4)arg1 ;
-(void)setHasIncludeNameForForwardGeocodingResults:(BOOL)arg1 ;
-(unsigned long long)filterByBusinessCategorysCount;
-(BOOL)hasExcludeAddressInResults;
-(BOOL)includeMatchedToken;
-(void)setLimitToCountryCodeIso2s:(NSMutableArray *)arg1 ;
-(NSString *)deviceTimeZone;
-(BOOL)hasIncludeFeatureSets;
-(void)setPlaceTypeLimit:(int)arg1 ;
-(void)clearOptionalSuppressionReasons;
-(void)setIncludeNameForForwardGeocodingResults:(BOOL)arg1 ;
-(void)addSearchSubstring:(SCD_Struct_GE81)arg1 ;
-(BOOL)includeRevgeoRequestTemplate;
-(void)setHasPlaceTypeLimit:(BOOL)arg1 ;
-(void)setHasExcludeAddressInResults:(BOOL)arg1 ;
-(BOOL)hasIncludeNameForForwardGeocodingResults;
-(BOOL)includePhonetics;
-(void)setHasIncludeFeatureSets:(BOOL)arg1 ;
-(BOOL)hasPlaceTypeLimit;
-(void)setHasSessionGUID:(BOOL)arg1 ;
-(double)timeSinceMapViewportChanged;
-(SCD_Struct_GE81*)searchSubstrings;
-(SCD_Struct_GE4)sessionGUID;
-(BOOL)includeSpokenNames;
-(void)setOptionalSuppressionReasons:(int*)arg1 count:(unsigned long long)arg2 ;
-(GEOLatLng *)knownLocation;
-(int)mapMode;
-(BOOL)hasIncludeQuads;
-(BOOL)includeBusinessCategories;
-(GEOSuggestionsOptions *)suggestionsOptions;
-(BOOL)hasTransportTypeForTravelTimes;
-(BOOL)hasIndexFilter;
-(void)setIncludeEntryPoints:(BOOL)arg1 ;
-(BOOL)hasSessionGUID;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)includeBusinessRating;
-(void)setIncludeFeatureSets:(BOOL)arg1 ;
-(BOOL)includeNameForForwardGeocodingResults;
-(void)setHasIncludeEntryPoints:(BOOL)arg1 ;
-(BOOL)hasSuggestionsOptions;
-(void)clearSearchSubstrings;
-(void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(int)placeTypeLimit;
-(void)setHasIncludeQuads:(BOOL)arg1 ;
-(unsigned long long)businessIDAtIndex:(unsigned long long)arg1 ;
-(void)setSearch:(NSString *)arg1 ;
-(void)setBusinessSortOrder:(int)arg1 ;
-(int*)optionalSuppressionReasons;
-(void)setHasMapMode:(BOOL)arg1 ;
-(NSMutableArray *)filterByBusinessCategorys;
-(void)setExcludeAddressInResults:(BOOL)arg1 ;
-(int)maxBusinessReviews;
-(int)businessSortOrder;
-(BOOL)includeTravelTime;
-(BOOL)hasIncludeUnmatchedStrings;
-(BOOL)hasMapMode;
-(BOOL)isStrictMapRegion;
-(unsigned long long)limitToCountryCodeIso2sCount;
-(BOOL)hasSearchSource;
-(int)transportTypeForTravelTimes;
-(void)setIncludeUnmatchedStrings:(BOOL)arg1 ;
-(BOOL)includeRoadAccessPoints;
-(void)setTransportTypeForTravelTimes:(int)arg1 ;
-(void)setHasIncludeUnmatchedStrings:(BOOL)arg1 ;
-(void)setIsPopularNearbyRequest:(BOOL)arg1 ;
-(BOOL)hasInputLanguage;
-(void)setHasIncludePhonetics:(BOOL)arg1 ;
-(void)setIsStrictMapRegion:(BOOL)arg1 ;
-(NSMutableArray *)limitToCountryCodeIso2s;
-(void)setHasSearchSource:(BOOL)arg1 ;
-(BOOL)isStrictGeocoding;
-(void)clearBusinessIDs;
-(BOOL)hasPreserveFields;
-(BOOL)isPopularNearbyRequest;
-(void)setSearchSource:(int)arg1 ;
-(BOOL)hasDeviceLocation;
-(void)setHasIsPopularNearbyRequest:(BOOL)arg1 ;
-(BOOL)includeTravelDistance;
-(void)setIncludeQuads:(BOOL)arg1 ;
-(void)setSearchContext:(NSString *)arg1 ;
-(BOOL)hasIncludePhonetics;
-(void)setHasTransportTypeForTravelTimes:(BOOL)arg1 ;
-(void)setInputLanguage:(NSString *)arg1 ;
-(int)searchSource;
-(BOOL)hasIsStrictMapRegion;
-(BOOL)hasIsPopularNearbyRequest;
-(void)setHasIncludeStatusCodeInfo:(BOOL)arg1 ;
-(void)setIncludeTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeMatchedToken;
-(BOOL)hasIsCanonicalLocationSearch;
-(BOOL)hasIncludeStatusCodeInfo;
-(void)setHasIncludeTravelTime:(BOOL)arg1 ;
-(SCD_Struct_GE81)searchSubstringAtIndex:(unsigned long long)arg1 ;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(GEOBusinessOptions *)businessOptions;
-(void)setIncludeStatusCodeInfo:(BOOL)arg1 ;
-(void)setHasIncludeMatchedToken:(BOOL)arg1 ;
-(BOOL)isCanonicalLocationSearch;
-(int)optionalSuppressionReasonAtIndex:(unsigned long long)arg1 ;
-(BOOL)includeEntryPoints;
-(void)setIncludeMatchedToken:(BOOL)arg1 ;
-(BOOL)hasIncludeTravelTime;
-(void)setPreserveFields:(GEOAddress *)arg1 ;
-(unsigned long long*)businessIDs;
-(void)setHasIsStrictMapRegion:(BOOL)arg1 ;
-(BOOL)hasIncludeSpokenNames;
-(GEOAddress *)address;
-(void)setMapMode:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

