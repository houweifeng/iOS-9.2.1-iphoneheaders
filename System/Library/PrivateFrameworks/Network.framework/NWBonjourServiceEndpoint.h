/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (readonly) NSString * name; 
@property (readonly) NSString * type; 
@property (readonly) NSString * domain; 
+(id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(NSString *)name;
-(NSString *)type;
-(NSString *)domain;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
@end

