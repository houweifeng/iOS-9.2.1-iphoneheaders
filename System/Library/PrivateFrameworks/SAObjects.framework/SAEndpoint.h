/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAEndpoint : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * operations; 
@property (nonatomic,copy) NSString * providerId; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)endpoint;
+(id)endpointWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setOperations:(NSDictionary *)arg1 ;
-(NSDictionary *)operations;
-(void)setProviderId:(NSString *)arg1 ;
-(NSString *)providerId;
-(id)groupIdentifier;
-(BOOL)supportsAuthentication;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(id)encodedClassName;
@end

