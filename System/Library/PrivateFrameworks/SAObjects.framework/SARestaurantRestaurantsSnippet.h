/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISirilandSnippet.h>

@class NSArray, NSDictionary;

@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (nonatomic,copy) NSArray * attributionOrder; 
@property (nonatomic,copy) NSArray * contributingProviderIds; 
@property (nonatomic,copy) NSDictionary * providerPunchOutMap; 
@property (nonatomic,copy) NSArray * restaurants; 
+(id)restaurantsSnippet;
+(id)restaurantsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)siri_restaurants_navigationPathForRestaurantAtIndex:(long long)arg1 type:(long long)arg2 ;
-(void)siri_restaurants_getNavigationPathRestaurant:(id*)arg1 andType:(long long*)arg2 ;
-(id)groupIdentifier;
-(NSArray *)attributionOrder;
-(void)setAttributionOrder:(NSArray *)arg1 ;
-(NSArray *)contributingProviderIds;
-(void)setContributingProviderIds:(NSArray *)arg1 ;
-(NSDictionary *)providerPunchOutMap;
-(void)setProviderPunchOutMap:(NSDictionary *)arg1 ;
-(NSArray *)restaurants;
-(void)setRestaurants:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

