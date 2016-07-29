/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, SAPersonAttribute, NSNumber;

@interface SAPhoneCallSearchResult : SADomainObject

@property (nonatomic,copy) NSDate * callTime; 
@property (nonatomic,retain) SAPersonAttribute * contact; 
@property (nonatomic,copy) NSNumber * isNew; 
+(id)callSearchResult;
+(id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setIsNew:(NSNumber *)arg1 ;
-(NSDate *)callTime;
-(void)setCallTime:(NSDate *)arg1 ;
-(void)setContact:(SAPersonAttribute *)arg1 ;
-(SAPersonAttribute *)contact;
-(NSNumber *)isNew;
-(id)encodedClassName;
@end

