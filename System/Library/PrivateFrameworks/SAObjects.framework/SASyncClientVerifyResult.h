/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASyncClientVerifyResult : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * checksums; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)clientVerifyResult;
+(id)clientVerifyResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)checksums;
-(void)setChecksums:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

