/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMicroblogGetSocialCredential.h>

@class NSString;

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property (nonatomic,copy) NSString * consumerKey; 
@property (nonatomic,copy) NSString * consumerSecret; 
+(id)getTwitterCredential;
+(id)getTwitterCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSString *)consumerKey;
-(NSString *)consumerSecret;
-(void)setConsumerSecret:(NSString *)arg1 ;
-(void)setConsumerKey:(NSString *)arg1 ;
-(id)encodedClassName;
@end

