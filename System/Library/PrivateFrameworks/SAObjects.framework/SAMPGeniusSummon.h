/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAMPMediaItem, NSString;

@interface SAMPGeniusSummon : SADomainCommand

@property (nonatomic,retain) SAMPMediaItem * mediaItem; 
@property (nonatomic,copy) NSString * upNextQueueInsertLocation; 
+(id)geniusSummon;
+(id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSString *)upNextQueueInsertLocation;
-(void)setUpNextQueueInsertLocation:(NSString *)arg1 ;
-(SAMPMediaItem *)mediaItem;
-(void)setMediaItem:(SAMPMediaItem *)arg1 ;
-(id)encodedClassName;
@end

