/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (nonatomic,copy) NSNumber * maxAge; 
@property (nonatomic,copy) NSNumber * searchTimeout; 
+(id)getRequestOrigin;
+(id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)searchTimeout;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(void)setMaxAge:(NSNumber *)arg1 ;
-(void)setSearchTimeout:(NSNumber *)arg1 ;
-(NSString *)desiredAccuracy;
-(NSNumber *)maxAge;
-(void)setDesiredAccuracy:(NSString *)arg1 ;
-(id)encodedClassName;
@end

