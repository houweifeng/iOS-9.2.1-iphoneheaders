/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long packetNumber; 
@property (nonatomic,copy) NSArray * packets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)speechPacket;
+(id)speechPacketWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(long long)packetNumber;
-(void)setPacketNumber:(long long)arg1 ;
-(NSArray *)packets;
-(void)setPackets:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

