/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapItemPrivate.h>

@class GEOLocation, NSDictionary, NSString, NSURL, GEOPlace, NSData, GEOMapRegion, GEOAddress, NSArray, NSTimeZone, NSDate, GEOPDPlace, GEOMapItemClientAttributes, GEOPDFlyover, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOMapItemAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim;

@interface GEOMapItemAssistant : NSObject <GEOMapItemPrivate> {

	GEOLocation* _location;
	NSDictionary* _addressDictionary;
	NSString* _name;
	NSURL* _businessURL;
	NSString* _phoneNumber;
	unsigned long long _muid;
	NSString* _attributionID;
	unsigned _sampleSizeForUserRatingScore;
	float _normalizedUserRatingScore;
	GEOPlace* _place;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * encodedData; 
@property (getter=isDisputed,nonatomic,readonly) BOOL disputed; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) SCD_Struct_GE16 centerCoordinate; 
@property (nonatomic,readonly) int referenceFrame; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (nonatomic,readonly) GEOAddress * geoAddress; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,readonly) NSArray * areasOfInterest; 
@property (nonatomic,readonly) NSTimeZone * timezone; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegionOrNil; 
@property (nonatomic,readonly) int contactAddressType; 
@property (nonatomic,readonly) NSString * contactName; 
@property (nonatomic,readonly) NSString * contactSpokenName; 
@property (nonatomic,readonly) BOOL contactIsMe; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) BOOL isEventAllDay; 
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_addressGeocodeAccuracy,nonatomic,readonly) int addressGeocodeAccuracy; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOMapItemTransitAttribution> transitAttribution; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) BOOL hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) BOOL hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) BOOL hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) BOOL hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) BOOL goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) BOOL hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) BOOL takesReservations; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) BOOL hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) BOOL acceptsApplePay; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) BOOL hasCurrentOperatingHours; 
@property (getter=_operatingHours,nonatomic,readonly) NSArray * operatingHours; 
@property (getter=_hasTelephone,nonatomic,readonly) BOOL hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_hasTextBlock,nonatomic,readonly) BOOL hasTextBlock; 
@property (getter=_textBlockTitle,nonatomic,readonly) NSString * textBlockTitle; 
@property (getter=_textBlockText,nonatomic,readonly) NSString * textBlockText; 
@property (getter=_hasPairOfFactoids,nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (getter=_factoids,nonatomic,readonly) NSArray * factoids; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_encyclopedicAttribution,nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (getter=_resultSnippetLocationString,nonatomic,readonly) NSString * resultSnippetLocationString; 
@property (getter=_resultSnippetDistanceDisplayThreshold,nonatomic,readonly) unsigned resultSnippetDistanceDisplayThreshold; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_photos,nonatomic,readonly) NSArray * photos; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(BOOL)isValid;
-(id)_roadAccessPoints;
-(NSTimeZone *)timezone;
-(GEOMapRegion *)displayMapRegion;
-(unsigned long long)_muid;
-(int)referenceFrame;
-(id)_photos;
-(id)_telephone;
-(id)_styleAttributes;
-(BOOL)isDisputed;
-(int)_addressGeocodeAccuracy;
-(id)_place;
-(NSDate *)eventDate;
-(NSString *)eventName;
-(BOOL)isEventAllDay;
-(SCD_Struct_GE16)centerCoordinate;
-(id)_operatingHours;
-(id)_reviews;
-(id)_disambiguationName;
-(unsigned long long)_openingHoursOptions;
-(id)_clientAttributes;
-(id)_placeData;
-(BOOL)_needsAttribution;
-(id)_textBlockTitle;
-(id)_textBlockText;
-(BOOL)_hasPairOfFactoids;
-(id)_urlForWritingAReview;
-(id)_placeDataAsData;
-(id)_factoids;
-(BOOL)_hasTelephone;
-(NSDictionary *)addressDictionary;
-(BOOL)_hasTextBlock;
-(id)_asPlaceInfo;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasCurrentOperatingHours;
-(id)_mapItemByStrippingOptionalData;
-(id)_transitInfo;
-(int)_resultProviderID;
-(BOOL)_hasTransit;
-(unsigned long long)_customIconID;
-(BOOL)_hasFlyover;
-(id)_reviewsAttribution;
-(id)_encyclopedicAttribution;
-(id)_transitAttribution;
-(id)_attribution;
-(int)_placeType;
-(id)_urlForReview:(id)arg1 ;
-(BOOL)_hasResolvablePartialInformation;
-(id)_photosAttribution;
-(id)_urlForPhotoWithUID:(id)arg1 ;
-(id)_webURL;
-(BOOL)_hasResultProviderID;
-(float)_normalizedUserRatingScore;
-(id)_providerURL;
-(id)_vendorID;
-(NSData *)encodedData;
-(double)_areaInMeters;
-(BOOL)_hasAreaInMeters;
-(id)_spokenAddressForLocale:(id)arg1 ;
-(unsigned)_sampleSizeForUserRatingScore;
-(BOOL)_hasUserRatingScore;
-(id)_businessURL;
-(id)spokenNameForLocale:(id)arg1 ;
-(id)_resultSnippetLocationString;
-(id)_flyoverAnnouncementMessage;
-(unsigned)_resultSnippetDistanceDisplayThreshold;
-(id)_flyover;
-(BOOL)_hasBusinessClaim;
-(id)_additionalPlaceInfos;
-(BOOL)_hasMUID;
-(id)_businessClaim;
-(BOOL)_goodForKids;
-(id)_arrivalMapRegionForTransportType:(int)arg1 ;
-(NSString *)contactName;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasGoodForKidsAmenity;
-(BOOL)contactIsMe;
-(NSString *)contactSpokenName;
-(BOOL)_hasDelivery;
-(BOOL)_acceptsApplePay;
-(BOOL)_hasAcceptsApplePayAmenity;
-(int)contactAddressType;
-(BOOL)_takesReservations;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasTakesReservationsAmenity;
-(GEOMapRegion *)displayMapRegionOrNil;
-(int)_recommendedTransportType;
-(GEOAddress *)geoAddress;
-(id)_poiSurveyURLString;
-(NSArray *)areasOfInterest;
-(BOOL)_hasTravelTimeForTransportType:(int)arg1 ;
-(BOOL)_hasDeliveryAmenity;
-(unsigned)_travelTimeForTransportType:(int)arg1 ;
-(BOOL)_hasAnyAmenities;
-(unsigned)_priceRange;
-(GEOMapRegion *)geoFenceMapRegion;
-(unsigned)_travelDistanceForTransportType:(int)arg1 ;
-(BOOL)_hasPriceRange;
-(id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned)arg9 normalizedUserRatingScore:(float)arg10 ;
-(SCD_Struct_GE16)coordinate;
@end

