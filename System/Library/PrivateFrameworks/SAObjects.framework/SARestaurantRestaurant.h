/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SALocalSearchBusiness2.h>

@class NSArray, NSURL;

@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (nonatomic,copy) NSArray * attributeSet; 
@property (nonatomic,copy) NSArray * makeReservationPunchOuts; 
@property (nonatomic,copy) NSURL * menuLink; 
@property (nonatomic,copy) NSArray * openings; 
@property (nonatomic,copy) NSArray * orderDeliveryPunchOuts; 
+(id)restaurant;
+(id)restaurantWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)siri_restaurants_acceptsApplePay;
-(void)setAttributeSet:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)makeReservationPunchOuts;
-(void)setMakeReservationPunchOuts:(NSArray *)arg1 ;
-(NSURL *)menuLink;
-(void)setMenuLink:(NSURL *)arg1 ;
-(NSArray *)openings;
-(void)setOpenings:(NSArray *)arg1 ;
-(NSArray *)orderDeliveryPunchOuts;
-(void)setOrderDeliveryPunchOuts:(NSArray *)arg1 ;
-(NSArray *)attributeSet;
-(id)encodedClassName;
@end

