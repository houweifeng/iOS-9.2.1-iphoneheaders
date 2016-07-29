/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAHAFilter.h>

@class NSString;

@interface SAHASearchCriteriaFilter : SAHAFilter

@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSString * entityType; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * homeName; 
@property (nonatomic,copy) NSString * roomName; 
@property (nonatomic,copy) NSString * sceneName; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSString * zoneName; 
+(id)searchCriteriaFilter;
+(id)searchCriteriaFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(NSString *)attribute;
-(void)setAttribute:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSString *)entityType;
-(void)setEntityType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setRoomName:(NSString *)arg1 ;
-(void)setSceneName:(NSString *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)zoneName;
-(NSString *)homeName;
-(NSString *)roomName;
-(NSString *)sceneName;
-(id)encodedClassName;
-(void)setHomeName:(NSString *)arg1 ;
@end

