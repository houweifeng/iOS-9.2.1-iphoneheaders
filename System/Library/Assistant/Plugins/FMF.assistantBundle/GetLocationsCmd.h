/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class NSArray, NSString, CLLocation, NSNumber;

@interface GetLocationsCmd : FMFBaseCmd {

	NSArray* friends;
	NSArray* emails;
	NSString* proximity;
	CLLocation* currentLocation;
	CLLocation* requestedLocation;
	NSString* requestedLocationLabel;
	NSNumber* atRequestedLocation;
	NSString* clientId;

}

@property (nonatomic,copy) CLLocation * currentLocation; 
@property (nonatomic,copy) CLLocation * requestedLocation; 
@property (nonatomic,copy) NSString * requestedLocationLabel; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSString * clientId; 
@property (nonatomic,copy) NSArray * emails; 
-(void)setRequestedLocationLabel:(NSString *)arg1 ;
-(id)friendForHandle:(id)arg1 ;
-(id)requestedLocationDictionary;
-(NSString *)requestedLocationLabel;
-(id)allFriendsHandles;
-(id)currentLocationDictionary;
-(id)path;
-(id)result;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(NSNumber *)atRequestedLocation;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
-(NSString *)proximity;
-(void)setProximity:(NSString *)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(CLLocation *)requestedLocation;
-(void)setRequestedLocation:(CLLocation *)arg1 ;
-(NSArray *)emails;
-(void)setEmails:(NSArray *)arg1 ;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(id)headers;
-(NSArray *)friends;
-(id)jsonBodyDictionary;
@end
