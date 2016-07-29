/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAceDomainSignal : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appIdHints; 
@property (nonatomic,copy) NSString * domain; 
+(id)aceDomainSignal;
+(id)aceDomainSignalWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domain;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSArray *)appIdHints;
-(void)setAppIdHints:(NSArray *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)encodedClassName;
@end

