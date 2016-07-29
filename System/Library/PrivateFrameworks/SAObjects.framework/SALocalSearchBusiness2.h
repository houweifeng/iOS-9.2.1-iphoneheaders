/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SALocalSearchRating, SALocation, NSURL, NSArray, NSString, NSDate, NSDictionary, SALocalSearchOperationHours, NSData;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>

@property (nonatomic,readonly) SALocalSearchRating * rating; 
@property (nonatomic,readonly) unsigned long long totalNumberOfReviews; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSURL * businessUrl; 
@property (nonatomic,copy) NSArray * categories; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * currencySymbol; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDate * extSessionGuidCreatedTimestamp; 
@property (nonatomic,copy) NSDictionary * identifierMap; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * offerLists; 
@property (nonatomic,retain) SALocalSearchOperationHours * operationHours; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSArray * photoList; 
@property (nonatomic,copy) NSData * placeData2; 
@property (nonatomic,copy) NSString * priceRange; 
@property (nonatomic,copy) NSArray * reviewList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)afui_mapsURLForLocalSearchBusiness2s:(id)arg1 ;
+(id)siriui_mapsURLForLocalSearchBusiness2s:(id)arg1 ;
+(id)business2;
+(id)business2WithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocalSearchRating *)rating;
-(unsigned long long)totalNumberOfReviews;
-(SALocalSearchRating *)rating;
-(unsigned long long)totalNumberOfReviews;
-(id)afui_mapItemRepresentation;
-(id)afui_mapsURL;
-(id)siriui_mapItemRepresentation;
-(id)siriui_mapsURL;
-(void)setCurrencySymbol:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)phoneNumber;
-(NSArray *)categories;
-(void)setAddress:(SALocation *)arg1 ;
-(void)setPriceRange:(NSString *)arg1 ;
-(NSString *)priceRange;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
-(id)groupIdentifier;
-(NSURL *)businessUrl;
-(void)setBusinessUrl:(NSURL *)arg1 ;
-(NSString *)extSessionGuid;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(NSDate *)extSessionGuidCreatedTimestamp;
-(void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg1 ;
-(NSData *)placeData2;
-(void)setPlaceData2:(NSData *)arg1 ;
-(NSDictionary *)identifierMap;
-(void)setIdentifierMap:(NSDictionary *)arg1 ;
-(NSArray *)offerLists;
-(void)setOfferLists:(NSArray *)arg1 ;
-(SALocalSearchOperationHours *)operationHours;
-(void)setOperationHours:(SALocalSearchOperationHours *)arg1 ;
-(NSArray *)photoList;
-(void)setPhotoList:(NSArray *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)currencySymbol;
-(void)setReviewList:(NSArray *)arg1 ;
-(NSArray *)reviewList;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(SALocation *)address;
-(id)encodedClassName;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
@end

