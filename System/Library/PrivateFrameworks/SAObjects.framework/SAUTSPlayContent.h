/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUTSPlayContent : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * utsId; 
+(id)playContent;
+(id)playContentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSString *)utsId;
-(void)setUtsId:(NSString *)arg1 ;
-(id)encodedClassName;
@end

