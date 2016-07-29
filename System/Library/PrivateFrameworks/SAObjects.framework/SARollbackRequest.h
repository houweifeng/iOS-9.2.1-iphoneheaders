/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SARollbackRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * requestId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)rollbackRequest;
+(id)rollbackRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
-(id)encodedClassName;
@end
